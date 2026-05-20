/* AnimJoint data for relocData file 979 (FTSamusAnimFalconDivePulled) */
/* 2368 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFalconDivePulled_joint1[66];
extern u16 dFTSamusAnimFalconDivePulled_joint2[60];
extern u16 dFTSamusAnimFalconDivePulled_joint4[124];
extern u16 dFTSamusAnimFalconDivePulled_joint5[86];
extern u16 dFTSamusAnimFalconDivePulled_joint6[44];
extern u16 dFTSamusAnimFalconDivePulled_joint7[86];
extern u16 dFTSamusAnimFalconDivePulled_joint8[10];
extern u16 dFTSamusAnimFalconDivePulled_joint9[10];
extern u16 dFTSamusAnimFalconDivePulled_joint11[64];
extern u16 dFTSamusAnimFalconDivePulled_joint12[88];
extern u16 dFTSamusAnimFalconDivePulled_joint14[48];
extern u16 dFTSamusAnimFalconDivePulled_joint15[88];
extern u16 dFTSamusAnimFalconDivePulled_joint17[48];
extern u16 dFTSamusAnimFalconDivePulled_joint19[86];
extern u16 dFTSamusAnimFalconDivePulled_joint20[88];
extern u16 dFTSamusAnimFalconDivePulled_joint22[48];
extern u16 dFTSamusAnimFalconDivePulled_joint23[94];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimFalconDivePulled_joints[] = {
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimFalconDivePulled_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimFalconDivePulled_joint1[66] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1426, 125, -485, -1696,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -26,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 17, 1647, -98, -636, 57,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1, 0, 1270, -279, -393, 138,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1, -1, 1208, 66, -418, -198,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -1, 1319, 214, -537, 504,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 1442, 211, 130, 404,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimFalconDivePulled_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, -75, -239, -153, -92, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -226, -98, -459, -12, 401, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -606, -18, -356, 23, 337, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -460, 85, -163, 21, 39, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 11, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 223, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 0, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFalconDivePulled_joint4[124] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 242, -51, -38, 74, 91, 90, 0, -91, -24, -13, 82, -190,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 7), -409, 51, -91, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 222, 9, 270, 0, -5, -18, -71, -251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 65, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -40, 27, -130, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 401, 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -63, 141, 21, 77, -21, 330,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -6, 131, 5, -76, 68, 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 65, -10,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -14, 94,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 14, -54, 105,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 10, 140,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), -112,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), -111,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 401,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -13, -138, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 401, -59,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -13, -138, 86,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimFalconDivePulled_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -48, -1722, 144, 1377, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1433, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1290, 65, 1428, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1332, -4, 1612, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1671, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1363, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1640, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1785, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1633, -30, 1798, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1968, -27, -1604, -2, 1939, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1800, 42, -1380, 18, 1582, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1714, 65, -1494, -29, 1317, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1410, 96, -1554, -37, 1367, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1132, 92, -1722, -55, 1377, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFalconDivePulled_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -937, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -942, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1127, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -883, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -854, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -979, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -812, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -839, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -739, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFalconDivePulled_joint7[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1119, 219, 23, -21, -120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1140, 4, -43, 0, -241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1128, -1, 23, 5, -121, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1119, -45, 23, 0, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 602, -183, 27, -60, -110, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 231, -33, -267, -10, -115, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 376, 87, -41, 23, -6, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 654, 96, -154, -59, -256, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 934, 6, -383, 22, -164, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFalconDivePulled_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimFalconDivePulled_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFalconDivePulled_joint11[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 14, 0, 24, 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 57, 0, -171, 0, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 172, 39, -513, -48, -303, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 417, -14, -513, 44, -303, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -71, 0, 42, 0, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -339, -63, -55, 39, 68, -140,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimFalconDivePulled_joint12[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, 149, 1737, -181, -1824, 235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -663, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1101, 157, 1193, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -604, 76, 1281, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -642, -35, 1185, 2, -666, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -817, -125, 1294, 10, -861, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1396, -166, 1249, 9, -1127, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1817, -65, 1350, 22, -2083, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1787, 69, 1384, 11, -2289, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1399, 32, 1417, 37, -1628, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1591, -25, 1608, 53, -1705, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1550, 13, 1737, 42, -1824, -39,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFalconDivePulled_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -707, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -467, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -248, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -484, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -986, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -973, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -979, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1139, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -864, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -595, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFalconDivePulled_joint15[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -132, -27, 5, -389, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -309, -58, -11, 7, -224, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -261, 15, 17, -12, -4, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -218, 14, -87, -24, -41, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -174, 29, -130, -20, 22, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 67, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -208, 0, -74, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -126, 23, -578, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 95, -3, -65, 10, -783, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 46, -10, -62, 0, -620, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 33, 6, -61, 5, -419, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 87, 18, -27, 11, -389, 9,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFalconDivePulled_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 498, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 681, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 780, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 569, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 436, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 670, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 598, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 478, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimFalconDivePulled_joint19[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -74, -54, -36, -44, -45, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -221, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -238, -19, 443, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -192, 12, 400, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -129, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -135, 27, 179, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -56, 27, 56, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 30, 7, -93, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -91, 5, 138, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -99, 4, 137, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, 6, -7, 13, -157, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -57, -2, 25, -4, -142, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -74, -5, -36, -20, -45, 32,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFalconDivePulled_joint20[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, -57, 162, 28, -52, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 55, -55, 248, 14, -572, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -104, -35, 248, 11, -531, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -154, 0, 317, 31, -353, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -101, 58, 437, 24, -146, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 195, 43, 465, -21, 153, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 162, 11, 305, -26, -458, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 321, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 266, 41, -614, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 411, 16, -164, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 368, -30, 227, -26, 21, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 227, -46, 162, -21, -52, -24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFalconDivePulled_joint22[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 444, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 443, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 676, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 754, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 811, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 870, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 896, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 736, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 601, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 476, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 444, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimFalconDivePulled_joint23[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, -88, -1796, 29, -1818, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1484, -26, -1706, 11, -1549, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1588, 21, -1730, -6, -1596, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1614, 14, -1746, -1, -1750, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1674, 19, -1740, -3, -1862, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1732, 0, -1767, -36, -1913, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1676, -38, -1957, -22, -1866, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1503, 5, -1900, 39, -1803, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1711, 47, -1717, 31, -1836, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1787, 6, -1709, -13, -1840, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1750, -12, -1796, -29, -1818, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
