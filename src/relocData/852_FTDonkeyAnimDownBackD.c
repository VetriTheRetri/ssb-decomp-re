/* AnimJoint data for relocData file 852 (FTDonkeyAnimDownBackD) */
/* 2592 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDownBackD_joint1[16];
extern u16 dFTDonkeyAnimDownBackD_joint2[60];
extern u16 dFTDonkeyAnimDownBackD_joint3[16];
extern u16 dFTDonkeyAnimDownBackD_joint5[36];
extern u16 dFTDonkeyAnimDownBackD_joint6[146];
extern u16 dFTDonkeyAnimDownBackD_joint7[48];
extern u16 dFTDonkeyAnimDownBackD_joint8[10];
extern u16 dFTDonkeyAnimDownBackD_joint9[46];
extern u16 dFTDonkeyAnimDownBackD_joint11[14];
extern u16 dFTDonkeyAnimDownBackD_joint12[140];
extern u16 dFTDonkeyAnimDownBackD_joint13[48];
extern u16 dFTDonkeyAnimDownBackD_joint14[20];
extern u16 dFTDonkeyAnimDownBackD_joint15[10];
extern u16 dFTDonkeyAnimDownBackD_joint17[20];
extern u16 dFTDonkeyAnimDownBackD_joint18[144];
extern u16 dFTDonkeyAnimDownBackD_joint20[56];
extern u16 dFTDonkeyAnimDownBackD_joint22[126];
extern u16 dFTDonkeyAnimDownBackD_joint23[104];
extern u16 dFTDonkeyAnimDownBackD_joint25[48];
extern u16 dFTDonkeyAnimDownBackD_joint26[136];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimDownBackD_joints[] = {
	(u32)dFTDonkeyAnimDownBackD_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDownBackD_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDownBackD_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimDownBackD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimDownBackD_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDownBackD_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDownBackD_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDownBackD_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimDownBackD_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimDownBackD_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDownBackD_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDownBackD_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDownBackD_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimDownBackD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimDownBackD_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimDownBackD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimDownBackD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimDownBackD_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimDownBackD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimDownBackD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDownBackD_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -400,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), -3960, -2160,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDownBackD_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 643, 14, 600, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 20), 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 536, -138, 613, -96, -19, 176,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 480, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -2814, -121,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -19,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 420, 599,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1080, 432,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 960, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 14, -21, -19, -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimDownBackD_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -265, -41, -16, -214, -154,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDownBackD_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, 0, 0, 319, -157,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 536, 17, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 319, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 804, 10, 0, 1, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimDownBackD_joint6[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -128, -581, -8, -1043, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -451, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, -209, -883, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, -219, -497, 346,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -67, 257, -119, -194,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -435, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -545, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 226, 238, -373, -215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 516, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -609, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -459, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -161, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 506, -9, -149, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -332, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -222, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -337, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -175, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -127, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -294, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -76, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -459, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -53, 18, -157, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -49, -11, -93, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -13, -84, 8, -473, -13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDownBackD_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1152, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1172, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -480, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -489, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1201, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1229, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -411, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDownBackD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 702, 15, 17,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimDownBackD_joint9[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -523, -342, 166, -9, 1320, -145,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 0, 1354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), 187, 70, 0, 22, 0, -11, 213, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 536, -36,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 31), 213,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -536, -17, 0, -3, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDownBackD_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDownBackD_joint12[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 119, 63, 524, -16, -828, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -197, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 244, -114, 389, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 92, -189, 467, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -442, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 211, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -501, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -491, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -112, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 155, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 459, 65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -398, 132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -45, 82, 510, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 79, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 278, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -399, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 253, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 170, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 2, 172, 1, -479, -16,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDownBackD_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1073, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -954, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -379, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -788, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -822, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -415, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDownBackD_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -23, 95, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 98, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimDownBackD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 119, 120, 120,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDownBackD_joint17[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -404, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -1130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimDownBackD_joint18[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1394, -17, -1178, 40, -2999, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1726, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2931, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1230, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1311, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1526, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1707, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1642, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2951, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2073, 186,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1529, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1462, -66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1723, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1861, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1555, -48, -1868, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1556, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1860, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1856, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1381, 132, -2111, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1081, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1789, 61, -2225, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1832, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1742, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1078, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1189, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1857, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1931, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1718, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1682, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, 13, -1215, -25, -1937, -6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimDownBackD_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1107, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1273, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 395, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1053, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1030, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimDownBackD_joint22[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 63, -64, 5, -295, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 155, -1, -449, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 219, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -184, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, -2, -440, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -149, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 43, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -27, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -107, -190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -156, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -488, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 107, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -374, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -149, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -123, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 23, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 9, 14, -8, -369, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimDownBackD_joint23[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1602, -5, 1353, 10, 448, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 453, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1611, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 1536, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1525, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1594, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1118, 173,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1644, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1783, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1315, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1393, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1589, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1277, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1362, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1291, 19, 1378, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1384, 6, 1317, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1755, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1716, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, -3, 1391, 6, 1312, -4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDownBackD_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1158, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1272, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 451, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 108, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 33, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 960, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1000, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 996, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimDownBackD_joint26[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1286, 25, 1445, 11, -2174, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1700, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1975, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1622, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1867, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1895, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1810, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1477, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1872, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1695, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1994, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1808, 86,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1557, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1699, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1684, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1723, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1690, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1899, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2063, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1540, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1623, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1698, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1665, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, -28, -2056, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1486, 7, -1998, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, -36, 1504, 18, -1995, 3,
	ftAnimEnd(),
};
