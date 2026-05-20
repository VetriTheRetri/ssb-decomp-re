/* AnimJoint data for relocData file 1617 (FTCaptainAnimHammerLanding) */
/* 2208 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimHammerLanding_joint1[38];
extern u16 dFTCaptainAnimHammerLanding_joint2[28];
extern u16 dFTCaptainAnimHammerLanding_joint4[58];
extern u16 dFTCaptainAnimHammerLanding_joint5[90];
extern u16 dFTCaptainAnimHammerLanding_joint6[50];
extern u16 dFTCaptainAnimHammerLanding_joint7[22];
extern u16 dFTCaptainAnimHammerLanding_joint10[8];
extern u16 dFTCaptainAnimHammerLanding_joint11[88];
extern u16 dFTCaptainAnimHammerLanding_joint12[48];
extern u16 dFTCaptainAnimHammerLanding_joint13[84];
extern u16 dFTCaptainAnimHammerLanding_joint14[12];
extern u16 dFTCaptainAnimHammerLanding_joint16[16];
extern u16 dFTCaptainAnimHammerLanding_joint17[78];
extern u16 dFTCaptainAnimHammerLanding_joint19[56];
extern u16 dFTCaptainAnimHammerLanding_joint21[98];
extern u16 dFTCaptainAnimHammerLanding_joint22[116];
extern u16 dFTCaptainAnimHammerLanding_joint24[56];
extern u16 dFTCaptainAnimHammerLanding_joint25[108];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimHammerLanding_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerLanding_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimHammerLanding_joint1[38] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1677, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 1359,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1600, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimHammerLanding_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 268, 0, 0,
	ftAnimLoop(0x6800, -54),
};

/* Joint 4 */
u16 dFTCaptainAnimHammerLanding_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, 0, 0, 19, -21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -89, 0, 16, -109, -16, 172,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 178, 62, -49, -70, 85, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, -49, 49, 85, -78,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 19, -21,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -89,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimHammerLanding_joint5[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 385, -34, 202, -13, 2381, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 262, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 196, 42, 2042, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, 5, 1944, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 60, -71, 2300, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 327, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 428, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, -3, 2265, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 114, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2393, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2436, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2483, -68,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 185, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 397, -21, 2411, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 385, -12, 200, 14, 2383, -27,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimHammerLanding_joint6[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, 171,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -5,
	ftAnimLoop(0x6800, -98),
};

/* Joint 7 */
u16 dFTCaptainAnimHammerLanding_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -408,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -303, 174, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -189, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -203, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -408,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimHammerLanding_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTCaptainAnimHammerLanding_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1246, 55, -1406, 5, 670, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1520, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1234, -72, 491, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1157, 13, 397, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1293, 34, 580, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1470, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1416, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1329, 11, 443, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1205, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 776, -79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1224, 18, -1401, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1241, 10, -1402, -2, 699, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1246, 4, -1406, -3, 670, -29,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimHammerLanding_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -178, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTCaptainAnimHammerLanding_joint13[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 279, 57, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 254, -14, 53, -32, 92, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, -20, -8, 24, 154, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 173, -15, 152, 40, 223, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 15, 153, -29, 159, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 219, 15, 64, -39, 114, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 235, 32, 34, -82, 67, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 284, 11, -99, -6, 168, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 282, 0, 10, 50, 49, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, -1, 101, 15, 48, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 279, 57, 33,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimHammerLanding_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 398, -958, -1965, 63, 159, 72,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimHammerLanding_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 269,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 716, 145,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -249,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 269,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTCaptainAnimHammerLanding_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1630, 12, -1551, 13, -1647, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1714, 97, -1503, -53, -1885, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1838, -5, -1645, -17, -2441, -312,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1622, -44, -2326, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1537, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1505, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1546, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1613, 1, -2279, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1638, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2391, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2334, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2098, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1799, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, -8, -1551, -4, -1647, 152,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimHammerLanding_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 699, 179,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1364, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 668, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 704, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 832, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, -110,
	ftAnimLoop(0x6800, -110),
};

/* Joint 21 */
u16 dFTCaptainAnimHammerLanding_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1546, 6, -1656, -15, 1601, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1548, -16, -1729, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1499, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1340, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1846, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1519, 66, -1812, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1704, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1681, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1727, 16, 1938, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1850, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1593, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1710, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1664, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1842, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1472, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1440, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1582, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1558, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1546, -12, -1656, 8, 1601, 18,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimHammerLanding_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1622, -14, 1562, -3, -2683, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1617, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1499, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2700, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2299, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1477, 93, -1665, 476,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1559, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1346, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1497, -172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1504, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1403, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1566, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1548, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1675, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1524, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1462, 7, -1214, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1753, -13, -2640, -447,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1385, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1678, 55, 1546, 13, -2941, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1643, 27, 1563, 7, -2846, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, 20, 1562, 0, -2683, 162,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimHammerLanding_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 260, 366,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 818, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 606, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 813, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1294, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, -379,
	ftAnimLoop(0x6800, -110),
};

/* Joint 25 */
u16 dFTCaptainAnimHammerLanding_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1646, 11, 1577, 8, 1908, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1732, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1661, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1462, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1482, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1525, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1772, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1665, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1646, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1509, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1665, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1692, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1534, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1475, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1598, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1597, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1430, 20, 1722, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1599, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1696, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, -47, 1852, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1640, 23, 1598, -33, 1911, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, 6, 1577, -21, 1908, -2,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};
