/* AnimJoint data for relocData file 1060 (FTSamusAnimHammerIdle) */
/* 1648 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimHammerIdle_joint1[26];
extern u16 dFTSamusAnimHammerIdle_joint2[42];
extern u16 dFTSamusAnimHammerIdle_joint4[66];
extern u16 dFTSamusAnimHammerIdle_joint5[80];
extern u16 dFTSamusAnimHammerIdle_joint6[38];
extern u16 dFTSamusAnimHammerIdle_joint7[22];
extern u16 dFTSamusAnimHammerIdle_joint8[158];
extern u16 dFTSamusAnimHammerIdle_joint11[8];
extern u16 dFTSamusAnimHammerIdle_joint12[50];
extern u16 dFTSamusAnimHammerIdle_joint14[24];
extern u16 dFTSamusAnimHammerIdle_joint15[44];
extern u16 dFTSamusAnimHammerIdle_joint17[40];
extern u16 dFTSamusAnimHammerIdle_joint19[44];
extern u16 dFTSamusAnimHammerIdle_joint20[44];
extern u16 dFTSamusAnimHammerIdle_joint22[40];
extern u16 dFTSamusAnimHammerIdle_joint23[50];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimHammerIdle_joints[] = {
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimHammerIdle_joint23, /* [22] joint 23 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimHammerIdle_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimHammerIdle_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1620, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1600, -677, 0, 553,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1281, 10, 273, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1620, 413, -3, -44,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimHammerIdle_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -332, 8, -74, 219, -685, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 92, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 191, 126, -180, 991,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 35, -170, 181, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimLoop(0x6800, -82),
};

/* Joint 4 */
u16 dFTSamusAnimHammerIdle_joint4[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -116, 165, -26, 19, -21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -96, -28, 151, -31, -28, -3, 16, 11, -16, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -229, 62, 37, -19, -40, -2, 24, 85, -102, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 527, -59, -47, 37, -50, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 80, -103, 59, 327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -176, 67, 188, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -116, -107, 165, 35, -26, 3, 19, 261, -21, -279,
	ftAnimLoop(0x6800, -130),
};

/* Joint 5 */
u16 dFTSamusAnimHammerIdle_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -659, -127, -1837, -24, 1377, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1068, 66, 1156, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1838, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1828, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -939, 107, -1643, 26, 1277, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -940, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1213, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1774, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1766, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -997, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -789, 126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1775, -7, 1208, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1818, -15, 1307, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -659, 130, -1837, -19, 1377, 69,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimHammerIdle_joint6[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimHammerIdle_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 384, 39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -10, -49,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimHammerIdle_joint8[158] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 390, 4, 4155,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 113, -84, 136,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -169, -94, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1838, 685, -1503, -711, 2552, -807,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1761, -42, -1417, 77, 2540, -18,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -157, -37, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1754, -2, -1348, 47, 2515, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1757, 21, -1322, 4, 2483, -24,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -100, -85, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1797, 61, -1339, -77, 2465, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1880, -1501, -1478, -135, 2636, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1205, -1477, -1611, -43, 2336, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1074, 113, -1565, 41, 2263, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -978, 59, -1527, 26, 2210, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -955, -7, -1512, 22, 2256, 57,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 113, -84, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -992, -39, -1483, 36, 2325, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1033, -36, -1439, 35, 2410, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1066, -33, -1413, 4, 2476, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1100, -37, -1430, -49, 2513, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1141, 745, -1511, 717, 2528, 821,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 390, 968, 4, 380, 4155, -2466,
	ftAnimLoop(0x6800, -314),
};

/* Joint 11 */
u16 dFTSamusAnimHammerIdle_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -168, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimHammerIdle_joint12[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 3, -42, -9, -81, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 38, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -146, 11, -172, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, 12, -176, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -53, 10, -131, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 6, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -9, -42, 10, -81, 49,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimHammerIdle_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -568, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -863, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -532, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -35,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTSamusAnimHammerIdle_joint15[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1579, -1, 1618, 0, -1910, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1571, -7, 1608, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1709, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1731, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2344, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2253, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2099, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1579, -7, 1618, 9, -1910, 188,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimHammerIdle_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 336, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 785, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1073, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 866, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -279,
	ftAnimLoop(0x6800, -78),
};

/* Joint 19 */
u16 dFTSamusAnimHammerIdle_joint19[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1591, -9, -1536, -4, 1554, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1609, 17, -1539, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1242, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1355, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1445, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1515, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1591, 18, -1536, 3, 1554, 39,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimHammerIdle_joint20[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1562, 1, 1622, -1, 989, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 1568, -5, 1614, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1163, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1296, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1293, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1319, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1071, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1562, -5, 1622, 7, 989, -82,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimHammerIdle_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1041, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1001, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 603, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 577, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 966, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, 74,
	ftAnimLoop(0x6800, -78),
};

/* Joint 23 */
u16 dFTSamusAnimHammerIdle_joint23[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1554, -2, -1652, -8, 1585, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1569, 18, -1666, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1350, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1357, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1264, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1362, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1484, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, 14, -1652, 13, 1585, 101,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
