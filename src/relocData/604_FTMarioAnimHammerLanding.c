/* AnimJoint data for relocData file 604 (FTMarioAnimHammerLanding) */
/* 2048 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimHammerLanding_joint1[20];
extern u16 dFTMarioAnimHammerLanding_joint2[18];
extern u16 dFTMarioAnimHammerLanding_joint4[40];
extern u16 dFTMarioAnimHammerLanding_joint5[30];
extern u16 dFTMarioAnimHammerLanding_joint6[8];
extern u16 dFTMarioAnimHammerLanding_joint7[14];
extern u16 dFTMarioAnimHammerLanding_joint8[18];
extern u16 dFTMarioAnimHammerLanding_joint10[24];
extern u16 dFTMarioAnimHammerLanding_joint11[30];
extern u16 dFTMarioAnimHammerLanding_joint12[16];
extern u16 dFTMarioAnimHammerLanding_joint13[32];
extern u16 dFTMarioAnimHammerLanding_joint15[48];
extern u16 dFTMarioAnimHammerLanding_joint16[134];
extern u16 dFTMarioAnimHammerLanding_joint18[64];
extern u16 dFTMarioAnimHammerLanding_joint20[136];
extern u16 dFTMarioAnimHammerLanding_joint21[136];
extern u16 dFTMarioAnimHammerLanding_joint23[72];
extern u16 dFTMarioAnimHammerLanding_joint24[136];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimHammerLanding_joints[] = {
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimHammerLanding_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimHammerLanding_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 540,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 600,
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTMarioAnimHammerLanding_joint2[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimHammerLanding_joint4[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -432, 69, 0, 16, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 555, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 130, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 658, -66, 0, -15, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimHammerLanding_joint5[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1359, 0, 117, 0, -1078, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1359, -1078,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1359, 0, 117, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1078,
	ftAnimLoop(0x6800, -58),
};

/* Joint 6 */
u16 dFTMarioAnimHammerLanding_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 7 */
u16 dFTMarioAnimHammerLanding_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimHammerLanding_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 288, 0, -54, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 288, -54,
	ftAnimLoop(0x6800, -34),
};

/* Joint 10 */
u16 dFTMarioAnimHammerLanding_joint10[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, -6, 117, 5, -87, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -165, 124, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -156, 117, -87,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimHammerLanding_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 480, 0, -133, -3, -1158, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 480, 0, -137, 1, -1156, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 480, 0, -133, 3, -1158, -2,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimHammerLanding_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTMarioAnimHammerLanding_joint13[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, 27, -108,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -261, -37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -37, 111, 63,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 0, 402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -61, 0, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimHammerLanding_joint15[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1215, -396, -2600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1276, 9, -452, -2, -2741, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -50, -422, 55, -2774, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1175, -78, -341, 63, -2812, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1143, 6, -296, -9, -2850, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1215, -396, -2600,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimHammerLanding_joint16[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 285, -593, 133, -371, 1991, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -307, -359, -237, -80, 2395, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 22, -26, 122, 2620, 227,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -154, 52, -109, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2849, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2815, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, -141, -108, -65, 3136, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -438, -349, -240, -616, 3748, 475,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4178, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -856, 257, -1341, -584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 75, 563, -1409, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 192, -1514, -68, 3908, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1601, 23, 4293, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 460, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1232, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1450, 93, -1498, 54, 4421, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1419, -333, -1492, 22, 4942, 645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 783, -280, -1453, 326, 5711, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 857, -310, -839, 666, 5643, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -696, -121, 718, 5440, -203,
	ftAnimLoop(0x6800, -264),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimHammerLanding_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1291, -755,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1415, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, -707,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -271,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, 197,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimHammerLanding_joint20[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1884, 202, 1146, 162, -1262, -253,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1512, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1309, 84, -1515, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, 84, -1278, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1976, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1642, -117, 1477, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1843, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1495, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1525, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2173, -341, 1283, -131, -2018, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2526, -645, 1261, 159, -2222, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3463, -542, 1602, 184, -1538, 602,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3769, -593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, -185, -1017, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1232, -123, -614, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4799, -592, 1383, 126, -1390, -566,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -5102, -471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, 44, -1747, -275,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2191, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1472, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -5898, -359, 1126, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5821, -306, 1164, -400, -2648, -421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6511, -690, 325, -839, -3035, -386,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimHammerLanding_joint21[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1752, 1284, 1404, 45, 1510, 807,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1521, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3036, 710, 2317, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3173, 212, 2500, 490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3461, 758, 1452, 48, 3298, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4691, 640, 1618, 42, 3574, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4743, 30, 1537, -33, 3984, 195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1508, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4752, 21, 3964, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4772, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4137, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4171, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4963, -4, 1374, -695, 4685, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4923, 706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, -590, 4107, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, -87, 4619, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6176, 710, -56, -29, 5102, 543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6343, 119, 135, 71, 5707, 408,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 71, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6415, 58, 5919, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6460, 49, 6211, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6514, 54, 153, 82, 6264, 52,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimHammerLanding_joint23[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 559, -218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1302, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, -647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, -567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 499,
	ftAnimLoop(0x6800, -142),
};

/* Joint 24 */
u16 dFTMarioAnimHammerLanding_joint24[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -79, -209, -1191, -195, 270,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 37, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1400, -685, 74, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1579, 0, 411, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1400, 689, -100, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 27, -200, 713, 809, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 44, 25, 116, 329, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -28, 31, 5, 327, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 104, 70, -37, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, -51, -193, -746, -437, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -87, -1529, -635, 192, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -15, -1465, 603, -140, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 84, -323, 735, 470, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, 40, 5, 167, 323, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -57, 11, -9, 209, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 9, -12, -76, 107, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, 15, -141, -129, -87, -195,
	ftAnimLoop(0x6800, -264),
	ftAnimEnd(),
	0x0000, 0x0000,
};
