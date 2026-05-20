/* AnimJoint data for relocData file 2107 (FTBossAnimFlick) */
/* 2496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimFlick_joint1[8];
extern u16 dFTBossAnimFlick_joint3[68];
extern u16 dFTBossAnimFlick_joint4[44];
extern u16 dFTBossAnimFlick_joint5[22];
extern u16 dFTBossAnimFlick_joint7[44];
extern u16 dFTBossAnimFlick_joint8[148];
extern u16 dFTBossAnimFlick_joint10[26];
extern u16 dFTBossAnimFlick_joint11[146];
extern u16 dFTBossAnimFlick_joint12[46];
extern u16 dFTBossAnimFlick_joint14[54];
extern u16 dFTBossAnimFlick_joint15[124];
extern u16 dFTBossAnimFlick_joint16[56];
extern u16 dFTBossAnimFlick_joint17[56];
extern u16 dFTBossAnimFlick_joint19[18];
extern u16 dFTBossAnimFlick_joint20[80];
extern u16 dFTBossAnimFlick_joint21[46];
extern u16 dFTBossAnimFlick_joint23[38];
extern u16 dFTBossAnimFlick_joint24[94];
extern u16 dFTBossAnimFlick_joint25[38];
extern u16 dFTBossAnimFlick_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTBossAnimFlick_joints[] = {
	(AObjEvent32 *)dFTBossAnimFlick_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTBossAnimFlick_joint3, /* [1] joint 3 */
	NULL, /* [2] NULL */
	(AObjEvent32 *)dFTBossAnimFlick_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTBossAnimFlick_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTBossAnimFlick_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTBossAnimFlick_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTBossAnimFlick_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTBossAnimFlick_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTBossAnimFlick_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTBossAnimFlick_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTBossAnimFlick_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTBossAnimFlick_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTBossAnimFlick_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTBossAnimFlick_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTBossAnimFlick_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTBossAnimFlick_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTBossAnimFlick_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTBossAnimFlick_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTBossAnimFlick_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTBossAnimFlick_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimFlick_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimFlick_joint3[68] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -600, 5880, -1200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 40), -600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 6000, 719, -600, 1199,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 6600,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 6600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 3600, -4800, -3000, -4800,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -480, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 3600, 480, -3000, 480,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, -1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 3000, -2400,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 14), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimFlick_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 3127, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3216, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3395, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3395, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2680, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), 2680, 14, -44, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 2234, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTBossAnimFlick_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -446, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), -178,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimFlick_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 89, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -178, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 44), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -178, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimFlick_joint8[148] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3276,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -705, -38, -2088, 60, 2082, -67,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -779, 31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 3276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1711, -78, 1833, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1821, -111, 1883, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2014, 118, 2015, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -747, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -799, -34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1834, 233, 1907, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1177, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1967, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -816, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -619, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -619, 0, -1177, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), -619, -9, -1177, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1967, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1964, 9,
	ftAnimBlock(0, 22),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -637, -26, -1186, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1276, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -705, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1977, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1969, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1264, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1237, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -708, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -710, -1, -1237, 0, 1968, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimFlick_joint10[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 46), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -100, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTBossAnimFlick_joint11[146] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4915,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1597, 0, -43, 0, 133, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -40, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1616, 3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 331, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 717, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -85, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -44, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1620, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1599, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 157, 47,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -54, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -137, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1583, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1546, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 324, 19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -65, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 391, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 0, -64, 1, 394, 2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimFlick_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -133, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -334, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -552, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -170, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimFlick_joint14[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -139, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -141, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -794, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -617, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -190, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimFlick_joint15[124] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4505,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, -2, -1647, -1, -1353, -26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 4505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -1642, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 21, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1664, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1590, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1394, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1237, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1225, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1239, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1371, -46,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1637, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1569, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -10, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1413, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1425, 8,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1573, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1583, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1418, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1412, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, 0, -1410, 1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimFlick_joint16[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -304, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -379, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -324, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -159, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -146, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -376, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimFlick_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -242, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -332, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -266, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -165, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -209, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -331, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimFlick_joint19[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 40), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -44,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimFlick_joint20[80] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3276,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1573, 0, 0, 0, 771, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 3276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 2, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 756, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 334, -75,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 28, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 11, -10,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 23, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 0, 27, 0, 24, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimFlick_joint21[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -752, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -754, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -254, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -75, 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -307, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -407, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTBossAnimFlick_joint23[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -864, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -868, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -179, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -366, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTBossAnimFlick_joint24[94] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3276,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 1640, 0, 2559, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 40), 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), 104, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 1635, 0, 2547, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1635, -10, 2547, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1961, -80,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1439, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1898, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1790, 15,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1444, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1525, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1789, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1835, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 0, 1527, 1, 1838, 3,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimFlick_joint25[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -573, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -576, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -212, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -175, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimFlick_joint26[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -983, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -253, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -196, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
