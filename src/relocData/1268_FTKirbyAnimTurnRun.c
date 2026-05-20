/* AnimJoint data for relocData file 1268 (FTKirbyAnimTurnRun) */
/* 2016 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTurnRun_joint1[24];
extern u16 dFTKirbyAnimTurnRun_joint2[30];
extern u16 dFTKirbyAnimTurnRun_joint3[30];
extern u16 dFTKirbyAnimTurnRun_joint4[48];
extern u16 dFTKirbyAnimTurnRun_joint6[40];
extern u16 dFTKirbyAnimTurnRun_joint7[74];
extern u16 dFTKirbyAnimTurnRun_joint8[16];
extern u16 dFTKirbyAnimTurnRun_joint10[44];
extern u16 dFTKirbyAnimTurnRun_joint11[102];
extern u16 dFTKirbyAnimTurnRun_joint12[16];
extern u16 dFTKirbyAnimTurnRun_joint14[10];
extern u16 dFTKirbyAnimTurnRun_joint15[96];
extern u16 dFTKirbyAnimTurnRun_joint17[30];
extern u16 dFTKirbyAnimTurnRun_joint19[106];
extern u16 dFTKirbyAnimTurnRun_joint20[124];
extern u16 dFTKirbyAnimTurnRun_joint22[56];
extern u16 dFTKirbyAnimTurnRun_joint23[116];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimTurnRun_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimTurnRun_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimTurnRun_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1200,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 960, -959,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 600, -2304,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimTurnRun_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 720,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 600, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 11), 0, -100, 600, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 5), -1608, 720,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimTurnRun_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, -23, -223, -14, 178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -357, 22, -223, 13, 178, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimTurnRun_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 89, 312, 4300, 3686, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAY, 4), 178, 17, -357, -17, 4505, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 420, 3891, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 357, -5, -178, 27, 312, -54, 4300, 51, 3276, -102, 4300, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 89, 89, 312, 4300, 3686, 4300,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimTurnRun_joint6[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -89, -134, 178, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -180, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 5, 0, 8, 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -5, 0, -8, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -89, -134, 178, -180,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTurnRun_joint7[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 824, -51, -1176, -25, -126, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -51, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1104, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 533, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 507, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 175, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 38, -59,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 754, 114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1149, -33, -21, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1170, -13, -90, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 824, 69, -1176, -5, -126, -35,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimTurnRun_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimTurnRun_joint10[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, -134, -178, 180, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 5, 0, 8, 0, 11, 120, -32, 0, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 0, -5, 0, -8, 0, -11, 120, 29, -120, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -89, -134, -178, 180, -180,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimTurnRun_joint11[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -793, 82, 1134, -29, -114, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 970, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -496, 376, -31, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, 298, 464, 292,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 82, -18, 549, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1052, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1000, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 62, -18, 538, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 37, 6, 569, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -43, 980, -31, 584, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 958, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -284, 519, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -535, -337, 45, -314,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -775, -34, -117, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1077, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1124, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -793, -17, 1134, 10, -114, 2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimTurnRun_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimTurnRun_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimTurnRun_joint15[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1722, 18, -1373, 93, -723, -24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1704, 251, -1280, 113, -747, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1218, 303, -1146, -13, -1369, -461,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1697, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1191, -58, -1396, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1214, -20, -1397, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1192, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1380, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1700, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1209, -30, -1637, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1434, -215, -1148, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1324, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1221, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, -144, -1313, -75, -788, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, -38, -1373, -59, -723, 64,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimTurnRun_joint17[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimTurnRun_joint19[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -243, -66, -68, 15, -194, -104,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -439, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -68, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -343, 101, 25, 244,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -195, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 47, 127, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 26, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 120, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -201, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -364, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -169, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -228, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -382, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -292, 69, -96, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -243, 49, -68, 28, -194, 34,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimTurnRun_joint20[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1621, 90, 1365, -23, 1076, 109,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1530, 87, 1341, -103, 1186, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1446, 281, 1157, -132, 1239, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -968, 265, 1076, 70, 2005, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -915, 13, 1298, 95, 2262, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -993, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1245, -16, 2258, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1232, -10, 2255, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1267, 25, 2261, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -980, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -915, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -64, 2262, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1042, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -924, -216, 2110, -421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1348, -231, 1419, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1388, -107, 1308, 153, 1356, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, -116, 1349, 28, 1148, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1621, -58, 1365, 15, 1076, -71,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimTurnRun_joint22[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 450, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 707, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimTurnRun_joint23[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -31, 70, -15, 251, -51,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 127, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -61, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 270, 100, -406, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 299, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 48, -331, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -432, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 34, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 329, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -331, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 12, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 30, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 299, -81, -394, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 141, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -326, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 181, 29, 60, 19, 220, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 19, 70, 9, 251, 31,
	ftAnimEnd(),
	0x0000, 0x0000,
};
