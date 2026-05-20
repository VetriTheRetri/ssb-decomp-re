/* AnimJoint data for relocData file 2104 (FTBossAnimWalkStart) */
/* 2864 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimWalkStart_joint1[8];
extern u16 dFTBossAnimWalkStart_joint3[70];
extern u16 dFTBossAnimWalkStart_joint4[38];
extern u16 dFTBossAnimWalkStart_joint5[36];
extern u16 dFTBossAnimWalkStart_joint7[44];
extern u16 dFTBossAnimWalkStart_joint8[162];
extern u16 dFTBossAnimWalkStart_joint10[54];
extern u16 dFTBossAnimWalkStart_joint11[140];
extern u16 dFTBossAnimWalkStart_joint12[56];
extern u16 dFTBossAnimWalkStart_joint14[64];
extern u16 dFTBossAnimWalkStart_joint15[104];
extern u16 dFTBossAnimWalkStart_joint16[56];
extern u16 dFTBossAnimWalkStart_joint17[56];
extern u16 dFTBossAnimWalkStart_joint19[26];
extern u16 dFTBossAnimWalkStart_joint20[120];
extern u16 dFTBossAnimWalkStart_joint21[40];
extern u16 dFTBossAnimWalkStart_joint23[48];
extern u16 dFTBossAnimWalkStart_joint24[144];
extern u16 dFTBossAnimWalkStart_joint25[48];
extern u16 dFTBossAnimWalkStart_joint26[66];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTBossAnimWalkStart_joints[] = {
	(AObjEvent32 *)dFTBossAnimWalkStart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint3, /* [1] joint 3 */
	NULL, /* [2] NULL */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTBossAnimWalkStart_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimWalkStart_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimWalkStart_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, -1200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 1800,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 8000,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 9600,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), -600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 600, 1440,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 600, -1440,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 5880, -3200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -1200,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1600, -4800,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), -600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 4200, -2400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5880, 1600, -1200, 4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimWalkStart_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -982, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -1608,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), 3127,
	ftAnimBlock(0, 30),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -44,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -111,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 2948,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 3127, 104,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimWalkStart_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 357, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 357, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -89,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimWalkStart_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 8, -357, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 178, 5, 178, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 178, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 178, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 178,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimWalkStart_joint8[162] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -710, 1, -1237, -2, 1968, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -733, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1983, 9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1187, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1172, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1547, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -763, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -785, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1553, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1549, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1990, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 2016, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -786, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -707, 5,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1549, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1742, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2036, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2074, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2039, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2224, 138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2084, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2123, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -705, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -876, 15,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2358, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2486, -107,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -854, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -754, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2360, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2220, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -705, 49, -2085, 37, 2081, -138,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimWalkStart_joint10[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -97, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -90, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -383, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -474, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -450, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimWalkStart_joint11[140] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1547, 0, -64, -3, 394, -12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1642, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -95, 22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 16, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 252, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1662, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1523, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 725, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -27, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1521, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 1611, 1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 408, -51,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4915,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 191, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 133, 26,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 269, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 227, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -38, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1599, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, -2, -43, -5, 133, -93,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimWalkStart_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -171, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -48, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -300, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -647, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -198, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -278, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -128, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimWalkStart_joint14[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -191, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -29, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -264, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -904, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -829, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -139, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -346, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -131, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimWalkStart_joint15[104] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, -1583, 1, -1410, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -1602, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), 22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1712, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1761, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1371, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1294, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1005, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1310, -40,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4505,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1607, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1652, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 19, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1353, 31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1193, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1165, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1264, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, -1647, 4, -1353, -89,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimWalkStart_joint16[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -380, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -95, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -702, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -631, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -304, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -374, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimWalkStart_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -335, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -19, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -634, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -844, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -322, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -371, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -240, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimWalkStart_joint19[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -44, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -178, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -178,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimWalkStart_joint20[120] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1607, 0, 27, 0, 24, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1681, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 161, 11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -165, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 541, 16,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1676, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -1598, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 181, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 506, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 780, 33,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3276,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1592, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1559, -5,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 916, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 11, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1573, -14, 0, -11, 771, -75,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimWalkStart_joint21[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -412, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -98, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -687, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -765, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -765, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -752, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimWalkStart_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -373, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -20, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -570, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -730, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -886, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -881, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimWalkStart_joint24[144] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, 0, 1527, -2, 1838, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -48, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1447, -2,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1579, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1461, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1821, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1911, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2319, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1442, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 1466, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 114, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2331, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 2264, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2280, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2595, 14,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3276,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 105, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2601, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2782, -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3276,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1476, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1632, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2728, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2654, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, -8, 1640, 7, 2559, -95,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimWalkStart_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -158, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -531, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -548, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -574, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimWalkStart_joint26[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -201, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -170, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -884, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -881, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -975, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
