/* AnimJoint data for relocData file 850 (FTDonkeyAnimDownForwardD) */
/* 2880 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDownForwardD_joint1[14];
extern u16 dFTDonkeyAnimDownForwardD_joint2[48];
extern u16 dFTDonkeyAnimDownForwardD_joint3[28];
extern u16 dFTDonkeyAnimDownForwardD_joint5[36];
extern u16 dFTDonkeyAnimDownForwardD_joint6[136];
extern u16 dFTDonkeyAnimDownForwardD_joint7[48];
extern u16 dFTDonkeyAnimDownForwardD_joint8[10];
extern u16 dFTDonkeyAnimDownForwardD_joint9[48];
extern u16 dFTDonkeyAnimDownForwardD_joint11[14];
extern u16 dFTDonkeyAnimDownForwardD_joint12[138];
extern u16 dFTDonkeyAnimDownForwardD_joint13[72];
extern u16 dFTDonkeyAnimDownForwardD_joint14[34];
extern u16 dFTDonkeyAnimDownForwardD_joint15[10];
extern u16 dFTDonkeyAnimDownForwardD_joint17[20];
extern u16 dFTDonkeyAnimDownForwardD_joint18[170];
extern u16 dFTDonkeyAnimDownForwardD_joint20[56];
extern u16 dFTDonkeyAnimDownForwardD_joint22[152];
extern u16 dFTDonkeyAnimDownForwardD_joint23[144];
extern u16 dFTDonkeyAnimDownForwardD_joint25[64];
extern u16 dFTDonkeyAnimDownForwardD_joint26[146];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimDownForwardD_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDownForwardD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDownForwardD_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDownForwardD_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 643, 0, 14, 600, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 3395, 71, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 14, -2, 1389, -195, -16, 150,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 233, -240, 42, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 14, -14, 789, 304, 16, -168,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimDownForwardD_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, -7, 0, -1, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -265, -41, -16, -214, -154,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDownForwardD_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, 0, 0, 319, -157,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 402, 15, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 319, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 750, 11, 0, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimDownForwardD_joint6[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -93, -581, -15, -1043, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -463, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -501, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -123, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -292, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 95, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -236, -64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -509, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -276, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -264, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 209, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 33, -77,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, 7, -119, 142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 102, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -162, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -33, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -124, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -161, -75,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -91, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -477, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -51, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -10, -84, 6, -473, 3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDownForwardD_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1152, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1005, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -692, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -866, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -999, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -416, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDownForwardD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 702, 15, 17,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimDownForwardD_joint9[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -523, -342, 166, -9, 1320, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 482, 67, 0, 22, 0, -11, 0, 2, 1354, 7, 213, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 482, -44,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 31), 0, 1354, 213,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -402, -14, 0, -3, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDownForwardD_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDownForwardD_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1489, 37, 1083, 5, -2437, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1432, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1217, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2136, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2082, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2187, -289,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1479, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1233, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1259, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1644, -168,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2505, -262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2640, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1780, -93, 1278, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1833, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1291, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2422, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2167, -116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1861, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1653, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1682, -35, -2288, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2282, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1719, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1308, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1426, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2155, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2070, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1706, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1720, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, -4, 1436, 9, -2087, -17,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDownForwardD_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1073, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1110, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1169, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1085, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -854, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -915, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1030, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -922, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -735, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDownForwardD_joint14[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 31, 8, 216, -1, 306, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 260, 3, -26, -11, 303, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 100, -10, -14, 1, 402, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimDownForwardD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 119, 120, 120,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDownForwardD_joint17[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -404, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -1310,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimDownForwardD_joint18[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1394, -107, -1178, 68, 217, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1182, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1501, -212, 293, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1819, -285, 585, 275,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 992, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2064, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1352, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1505, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1377, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1322, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1038, 303,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1978, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1475, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1347, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -933, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1489, -95, 1376, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1667, -312, 1729, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2114, -319, 2246, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2306, 135, -976, -96, 2460, -185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1275, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1842, 277, 1876, -381,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1699, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1698, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1535, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1217, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1680, 7, -1319, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1239, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1687, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1671, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1659, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1266, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -9, -1215, 23, 1279, 12,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimDownForwardD_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1107, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 615, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1156, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1240, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 954, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1022, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimDownForwardD_joint22[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1630, -15, 1672, -14, 1313, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1804, -7, 1479, -124, 1641, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1752, 8, 1355, -73, 1973, 250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2101, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1468, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1788, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1856, -767,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3323, -833,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3523, -299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4176, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2025, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1416, -114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4266, -73, 1528, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -5022, -222, 1561, -72,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1274, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 731, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -5247, -201, 1495, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1709, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -5524, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5286, 161, 755, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -5038, 63, 1203, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1758, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1591, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4983, 42, 1214, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4998, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1219, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1592, 1, 1233, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4939, 59, 1593, 0, 1238, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimDownForwardD_joint23[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 38, 254, -24, -1160, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 120, -13, 3, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -697, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, -8, 6, 0, -779, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 416, 143, -877, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 208, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 363, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 312, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 565, 107, -700, 164,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 415, -203, -202, 266,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 329, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 183, -151, 103, 230,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 75, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 354, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, -35, 409, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 235, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 63, -4, 86, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 174, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -303, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 220, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 106, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, -1, 217, -3, -295, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDownForwardD_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1158, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 634, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1183, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1295, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1360, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 967, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 827, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 993, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimDownForwardD_joint26[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, 257, 162, 4, -565, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 290, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 9, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -365, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, 266,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 255, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, -259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -381, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -481, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -359, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -364, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -568, -191, 32, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 146, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -731, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -449, 292, -604, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -11, 118, -796, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, 87, -727, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -392, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 206, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 104, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 130, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 38, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -30, 103, -1, -387, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
