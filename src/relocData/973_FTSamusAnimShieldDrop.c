/* AnimJoint data for relocData file 973 (FTSamusAnimShieldDrop) */
/* 2432 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimShieldDrop_joint1[22];
extern u16 dFTSamusAnimShieldDrop_joint2[42];
extern u16 dFTSamusAnimShieldDrop_joint4[60];
extern u16 dFTSamusAnimShieldDrop_joint5[114];
extern u16 dFTSamusAnimShieldDrop_joint6[48];
extern u16 dFTSamusAnimShieldDrop_joint7[10];
extern u16 dFTSamusAnimShieldDrop_joint8[10];
extern u16 dFTSamusAnimShieldDrop_joint9[10];
extern u16 dFTSamusAnimShieldDrop_joint11[10];
extern u16 dFTSamusAnimShieldDrop_joint12[150];
extern u16 dFTSamusAnimShieldDrop_joint14[48];
extern u16 dFTSamusAnimShieldDrop_joint15[124];
extern u16 dFTSamusAnimShieldDrop_joint17[56];
extern u16 dFTSamusAnimShieldDrop_joint19[136];
extern u16 dFTSamusAnimShieldDrop_joint20[142];
extern u16 dFTSamusAnimShieldDrop_joint22[48];
extern u16 dFTSamusAnimShieldDrop_joint23[140];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimShieldDrop_joints[] = {
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldDrop_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimShieldDrop_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 970, -252,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 846, 265, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 1618, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimShieldDrop_joint2[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 257, -10, 3, -20,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 639, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 820, 26, -2, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 736, 31, -861, -130,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1467, 74,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1608, -1611,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 1608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimShieldDrop_joint4[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2, -11, 22,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 95, 9,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 52, 49, -29, -2, 31, 6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 160, 280, 77,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 88, -5, -15, 33, 34, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 388, 485, 191,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 206, 290, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 44, -65, 16, 11, 59, -25,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimShieldDrop_joint5[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 24, -14, -48, 198, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 160, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -350, -4, 349, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -342, 12, 266, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -313, 9, 128, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 191, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 184, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, 79, -45, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 56, -87, -156, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 159, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -33, -102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, -167, -80, 167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -120, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -199, -85, 178, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 75, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 177, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 30, -131, -20, 219, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 138, 4, -213, -12, 446, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, 8, -218, -5, 506, 59,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimShieldDrop_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -608, -111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -874, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1060, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1169, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1011, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -566, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1133, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimShieldDrop_joint7[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -89,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), -268,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimShieldDrop_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimShieldDrop_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimShieldDrop_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimShieldDrop_joint12[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2066, 2, 1540, -18, -2006, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2043, 9, 1601, 13, -2243, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2023, 203, 1605, 75, -2268, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2131, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1637, 206, 1753, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1610, -13, 1665, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1511, 315,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1161, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2056, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1589, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1060, 282, -1023, 373,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -961, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -947, -65, 1369, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1192, -165, 1603, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1346, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1576, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1262, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1396, -269,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1535, -215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2308, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1378, 15, -1687, -286,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2147, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1302, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2346, -19, 1353, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2343, 4, 1460, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2117, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2078, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2338, 4, 1496, 35, -2053, 25,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimShieldDrop_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -730, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -691, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -963, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1160, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1232, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -915, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimShieldDrop_joint15[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1695, 18, -1514, 37, 647, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1626, -27, 713, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1370, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1321, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1495, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1612, -7, 988, 283,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1439, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1560, 53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1491, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1546, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, -175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1031, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1666, 196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2126, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1808, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1564, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1331, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1968, -179,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1473, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1533, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1479, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 798, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1497, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1562, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1610, 47, -1568, -88, 775, -22,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimShieldDrop_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1094, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1163, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1144, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 701, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1028, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1106, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 766, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 795, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1016, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1053, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimShieldDrop_joint19[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -102, -21, 81, 41, -363, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -176, 30, 77, -38, -499, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 9, 15, -123, -561, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -174, 44, -7, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -170, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 31, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -67, 77, -66, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 53, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 156, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 319, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 89, -176, 180, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -44, 56, -37, -144, -208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -34, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, -36, -237, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -107, 78, 53, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 348, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 50, 160, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 215, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -16, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 367, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 159, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 322, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -126, -14, 2, 328, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimShieldDrop_joint20[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -207, 29, 286, 4, -703, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -810, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 8, 28, 295, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 7, -81, 278, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -48, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -495, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -52, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 272, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -478, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -84, 80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -77, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -412, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -29, 55, 283, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 26, 212, 305, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 394, 16, 563, -45, -399, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -172, 213, -209, -568, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -63, 145, -46, -314, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -192, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 10, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -411, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -29, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 20, 5, -5, -410, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimShieldDrop_joint22[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1180, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1031, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1077, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 797, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimShieldDrop_joint23[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 29, 7, -100, -16, 11, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -182, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -121, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 20, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -39, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 148, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -185, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 112, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 367, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 81, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -96, 31, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 66, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 61, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 88, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 84, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 202, -142, 20, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 87, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -36, 9, -34, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -9, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 86, -73,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -19, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, -27, 89, 1, -19, 0,
	ftAnimEnd(),
};
