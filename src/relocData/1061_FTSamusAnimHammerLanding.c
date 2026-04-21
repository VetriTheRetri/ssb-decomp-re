/* AnimJoint data for relocData file 1061 (FTSamusAnimHammerLanding) */
/* 1872 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimHammerLanding_joint1[26];
extern u16 dFTSamusAnimHammerLanding_joint2[42];
extern u16 dFTSamusAnimHammerLanding_joint4[66];
extern u16 dFTSamusAnimHammerLanding_joint5[80];
extern u16 dFTSamusAnimHammerLanding_joint6[38];
extern u16 dFTSamusAnimHammerLanding_joint7[22];
extern u16 dFTSamusAnimHammerLanding_joint8[158];
extern u16 dFTSamusAnimHammerLanding_joint11[8];
extern u16 dFTSamusAnimHammerLanding_joint12[50];
extern u16 dFTSamusAnimHammerLanding_joint14[24];
extern u16 dFTSamusAnimHammerLanding_joint15[68];
extern u16 dFTSamusAnimHammerLanding_joint17[36];
extern u16 dFTSamusAnimHammerLanding_joint19[70];
extern u16 dFTSamusAnimHammerLanding_joint20[78];
extern u16 dFTSamusAnimHammerLanding_joint22[40];
extern u16 dFTSamusAnimHammerLanding_joint23[82];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimHammerLanding_joints[] = {
	(u32)dFTSamusAnimHammerLanding_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimHammerLanding_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimHammerLanding_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimHammerLanding_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimHammerLanding_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimHammerLanding_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimHammerLanding_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimHammerLanding_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimHammerLanding_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimHammerLanding_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimHammerLanding_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimHammerLanding_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimHammerLanding_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimHammerLanding_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimHammerLanding_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimHammerLanding_joint23, /* [22] joint 23 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimHammerLanding_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimHammerLanding_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1620, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1600, -677, 0, 553,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1281, 10, 273, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1620, 413, -3, -44,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimHammerLanding_joint2[42] = {
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
u16 dFTSamusAnimHammerLanding_joint4[66] = {
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
u16 dFTSamusAnimHammerLanding_joint5[80] = {
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
u16 dFTSamusAnimHammerLanding_joint6[38] = {
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
u16 dFTSamusAnimHammerLanding_joint7[22] = {
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
u16 dFTSamusAnimHammerLanding_joint8[158] = {
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
u16 dFTSamusAnimHammerLanding_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -168, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimHammerLanding_joint12[50] = {
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
u16 dFTSamusAnimHammerLanding_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -568, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -863, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -532, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -35,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTSamusAnimHammerLanding_joint15[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1595, 1, 1628, -1, -1533, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1557, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1583, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1832, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1973, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2338, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2462, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1878, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1627, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1588, -4, -1758, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1593, -1, -1568, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, -1, 1628, 1, -1533, 35,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimHammerLanding_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 733, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 809, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 842, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 664, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -2,
	ftAnimLoop(0x6800, -70),
};

/* Joint 19 */
u16 dFTSamusAnimHammerLanding_joint19[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1629, 5, -1569, 4, 1495, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1601, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1475, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1284, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 994, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1570, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1628, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1488, -20, 1019, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1565, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1321, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1322, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1629, -1, -1569, -4, 1495, 92,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimHammerLanding_joint20[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1333, 185, 1758, -126, 843, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1599, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1581, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1391, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1582, 222,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1958, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1606, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1551, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1584, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1668, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1843, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 965, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1497, -124, 843, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1302, -82, 1791, 45, 830, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1333, 31, 1758, -32, 843, 12,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimHammerLanding_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 591, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 548, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 788, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 595, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 636, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, -44,
	ftAnimLoop(0x6800, -78),
};

/* Joint 23 */
u16 dFTSamusAnimHammerLanding_joint23[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, 114, -1939, 180, 1069, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1568, 9, -1656, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1347, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1266, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1373, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1562, -11, -1658, -6, 1460, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1638, -5, -1726, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1208, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1065, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1657, -59, -1786, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1758, -47, -1978, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, 5, -1939, 39, 1069, 4,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
