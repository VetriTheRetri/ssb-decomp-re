/* AnimJoint data for relocData file 1420 (FTKirbyAnimFinalCutterImpact) */
/* 1808 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFinalCutterImpact_joint1[8];
extern u16 dFTKirbyAnimFinalCutterImpact_joint2[14];
extern u16 dFTKirbyAnimFinalCutterImpact_joint3[12];
extern u16 dFTKirbyAnimFinalCutterImpact_joint4[44];
extern u16 dFTKirbyAnimFinalCutterImpact_joint6[14];
extern u16 dFTKirbyAnimFinalCutterImpact_joint7[156];
extern u16 dFTKirbyAnimFinalCutterImpact_joint8[16];
extern u16 dFTKirbyAnimFinalCutterImpact_joint10[14];
extern u16 dFTKirbyAnimFinalCutterImpact_joint11[156];
extern u16 dFTKirbyAnimFinalCutterImpact_joint12[16];
extern u16 dFTKirbyAnimFinalCutterImpact_joint14[94];
extern u16 dFTKirbyAnimFinalCutterImpact_joint15[40];
extern u16 dFTKirbyAnimFinalCutterImpact_joint17[14];
extern u16 dFTKirbyAnimFinalCutterImpact_joint19[104];
extern u16 dFTKirbyAnimFinalCutterImpact_joint20[40];
extern u16 dFTKirbyAnimFinalCutterImpact_joint22[14];
extern u16 dFTKirbyAnimFinalCutterImpact_joint23[102];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimFinalCutterImpact_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimFinalCutterImpact_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimFinalCutterImpact_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTKirbyAnimFinalCutterImpact_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3216, 0, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimFinalCutterImpact_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimFinalCutterImpact_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimFinalCutterImpact_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 536, -446, -357, 0, -90, -180, 4096, 4096, 4096,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimFinalCutterImpact_joint7[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -463, 112, -1097, -46, 310, -94,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1146, 49, 220, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -260, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -354, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -463, 1, -1097, 1, 310, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 146, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1146, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -350, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -353, -101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -466, 0, -1099, 0, 314, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -261, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1143, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 216, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -350, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -463, -1, -1097, -1, 310, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1146, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -353, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -353, -99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -463, 0, -1097, 0, 310, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -260, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1143, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 216, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -350, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -466, -115, -1099, 44, 314, 97,
	ftAnimLoop(0x6800, -308),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimFinalCutterImpact_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTKirbyAnimFinalCutterImpact_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 536, 446, 357, 0, -90, -180, 4096, 4096, 4096,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimFinalCutterImpact_joint11[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1145, -113, 511, -46, -1297, -94,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 464, 49, -1392, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1347, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1258, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1144, 0, 511, 0, -1297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1465, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 464, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1258, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1258, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1392, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1145, 0, 511, 0, -1297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1347, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 464, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1392, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1392, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1258, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1142, 0, 509, 0, -1294, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1465, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 462, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1258, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1255, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1388, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1141, -1, 508, 1, -1293, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1344, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 464, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1392, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1392, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1258, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1142, 116, 508, 44, -1294, 98,
	ftAnimLoop(0x6800, -308),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimFinalCutterImpact_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFinalCutterImpact_joint14[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -328,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 0, -832, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -235, 0, 95, 0, -833, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, 0, 15, 0, -832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -235, 0, 95, 0, -832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, 0, 15, 0, -832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -235, 0, 95, 0, -833, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, 0, 15, 0, -832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -235, 0, 95, 0, -833, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -328, 0, -832, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -235, 0, 95, 0, -836, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, 0, 15, 0, -832, 0,
	ftAnimLoop(0x6800, -186),
};

/* Joint 15 */
u16 dFTKirbyAnimFinalCutterImpact_joint15[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -169, -7, -429, 16, -306, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -177, 8, -310, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -397, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -413, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, 7, -429, -16, -306, 4,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimFinalCutterImpact_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 19 */
u16 dFTKirbyAnimFinalCutterImpact_joint19[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1485, 18, -1451, -43, -1470, 29,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 1526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1495, 41, -1440, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1451, 0, -1470, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1495, 41, -1440, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1504, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1470, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 1485,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1495, 41, -1440, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1451, 0, -1470, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1495, 41, -1440, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1504, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 1526,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1470, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1451,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1495, 41, -1440, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1504, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, -18, -1451, 43, -1470, -29,
	ftAnimLoop(0x6800, -206),
};

/* Joint 20 */
u16 dFTKirbyAnimFinalCutterImpact_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1781, 7, 1179, 16, 1307, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), 1785, -8, 1297, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1212, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1195, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1195, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1781, -4, 1179, -15, 1307, 9,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimFinalCutterImpact_joint22[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 23 */
u16 dFTKirbyAnimFinalCutterImpact_joint23[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1485, -18, 1451, 43, 1750, 29,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -1526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1495, -41, 1776, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, 0, 1750, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1495, -41, 1780, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1485, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, 1750,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1495, -41, 1776, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, 0, 1750, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1495, -41, 1780, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1526, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, 1750,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1495, -41, 1776, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 18, 1451, -43, 1750, -26,
	ftAnimLoop(0x6800, -198),
	ftAnimEnd(),
	0x0000,
};
