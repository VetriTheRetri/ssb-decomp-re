/* AnimJoint data for relocData file 1919 (FTYoshiAnimHammerLanding) */
/* 2464 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimHammerLanding_joint1[12];
extern u16 dFTYoshiAnimHammerLanding_joint2[22];
extern u16 dFTYoshiAnimHammerLanding_joint3[34];
extern u16 dFTYoshiAnimHammerLanding_joint4[16];
extern u16 dFTYoshiAnimHammerLanding_joint6[12];
extern u16 dFTYoshiAnimHammerLanding_joint7[84];
extern u16 dFTYoshiAnimHammerLanding_joint10[16];
extern u16 dFTYoshiAnimHammerLanding_joint11[92];
extern u16 dFTYoshiAnimHammerLanding_joint12[44];
extern u16 dFTYoshiAnimHammerLanding_joint13[46];
extern u16 dFTYoshiAnimHammerLanding_joint14[104];
extern u16 dFTYoshiAnimHammerLanding_joint15[22];
extern u16 dFTYoshiAnimHammerLanding_joint17[22];
extern u16 dFTYoshiAnimHammerLanding_joint18[136];
extern u16 dFTYoshiAnimHammerLanding_joint20[68];
extern u16 dFTYoshiAnimHammerLanding_joint22[126];
extern u16 dFTYoshiAnimHammerLanding_joint23[130];
extern u16 dFTYoshiAnimHammerLanding_joint25[68];
extern u16 dFTYoshiAnimHammerLanding_joint26[126];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimHammerLanding_joints[] = {
	(u32)dFTYoshiAnimHammerLanding_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimHammerLanding_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimHammerLanding_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimHammerLanding_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimHammerLanding_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimHammerLanding_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimHammerLanding_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimHammerLanding_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimHammerLanding_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimHammerLanding_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimHammerLanding_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimHammerLanding_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimHammerLanding_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimHammerLanding_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimHammerLanding_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimHammerLanding_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimHammerLanding_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimHammerLanding_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimHammerLanding_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimHammerLanding_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 672, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimHammerLanding_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 30, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 184, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 184, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -178,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimHammerLanding_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -94, 42, 0, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 337, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 337, -42, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, -178,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimHammerLanding_joint4[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), -643,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 329,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -643,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -643,
	ftAnimLoop(0x6800, -30),
};

/* Joint 6 */
u16 dFTYoshiAnimHammerLanding_joint6[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimHammerLanding_joint7[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1235, 32, -2032, 24, 442, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1775, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1365, -41, 430, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1280, -47, 313, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 375, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1270, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1449, 114, -1718, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 978, -306,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1942, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 154, 150,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 676, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1134, 163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2014, -46, 340, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1238, 104, -2035, -20, 446, 106,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimHammerLanding_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTYoshiAnimHammerLanding_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, 36, -31, 32, -281, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 104, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -98, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1300, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, 30, -1212, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 459, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1467, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -48, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 591, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 35, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1417, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, 490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, -35, -436, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, -6, -31, 16, -281, 155,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimHammerLanding_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -900, 146,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, 8,
	ftAnimLoop(0x6800, -86),
};

/* Joint 13 */
u16 dFTYoshiAnimHammerLanding_joint13[46] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -625,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), 194,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -127,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -203,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -234, -625,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -144, -597,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -246, 43, -664,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -625,
	ftAnimLoop(0x6800, -90),
};

/* Joint 14 */
u16 dFTYoshiAnimHammerLanding_joint14[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 622, 983, 324,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 163, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 855, 1531, 937, -49, 294, 1189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3686, 1143, 884, -33, 2704, 852,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3142, -265, 871, 17, 1999, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3156, -1482, 919, 17, 1787, -1512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, -2020, 906, 31, -1025, -1785,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -884, -650, 982, 33, -1783, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1773, -266, 1007, 14, -2082, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1949, -28, 1042, 39, -2215, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1858, 88, 1126, -17, -2132, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1773, 621, 1007, -55, -2082, 623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, 599, 904, -6, 360, 601,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 622, 983, 324,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimHammerLanding_joint15[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -312,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -312,
	ftAnimBlock(0, 4),
	ftAnimLoop(0x6800, -42),
};

/* Joint 17 */
u16 dFTYoshiAnimHammerLanding_joint17[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 327,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -357,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 327,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -357,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -42),
};

/* Joint 18 */
u16 dFTYoshiAnimHammerLanding_joint18[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, -120, -163, -114, -1064, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -140, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 99, -973, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 157, -465, 391,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -22, 61, -190, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 26, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -1, 301, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, -80, 37, 19, 610, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -134, -181, 76, -236, -561, -948,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, -579, -436, -128, -1286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1294, -591, -180, 232, -562, 211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 35, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1445, 603, -862, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -87, 699, -573, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, 42, 20, 2, -528, 328,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 52, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 70, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, 619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -45, -69, 16, -671,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -41, -42, -112, -632, -649,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimHammerLanding_joint20[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1491, -468,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1022, -742,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 651,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, 623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, 240,
	ftAnimLoop(0x6800, -134),
};

/* Joint 22 */
u16 dFTYoshiAnimHammerLanding_joint22[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1827, -107, 9, 301, 71, -333,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1630, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 310, 60, -261, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -169, -36, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -277, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -183, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1607, -116, -160, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1397, -53, -105, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1501, 329, -335, -48, -383, 197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2806, 580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -374, 212, 288, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 294, 265, 544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3216, 261, 214, 738, 1378, 636,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3283, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1566, 735, 1538, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1351, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1685, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3233, -156, 1752, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2970, -93, 1849, 0, 1458, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3045, 190, 1752, -124, 1180, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3351, 305, 1599, -152, 1492, 311,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimHammerLanding_joint23[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1591, -34, 1642, 0, -1448, 392,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1688, 41, 1645, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1543, 89, 1758, -103, -1674, -1035,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1508, -414, 1439, 76, -2881, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2371, -459, 1910, 97, -2296, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2427, 315, 1634, -134, -2326, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1741, 393, 1641, 31, -2141, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1805, 58, 1711, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2098, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1652, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1266, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 169, 1857, -110, -1881, -896,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1466, -275, 1490, 110, -3059, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2128, -153, 2077, 63, -2610, 476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1774, 244, 1616, -216, -2107, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1639, 94, 1644, 11, -1700, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1584, 54, 1639, -4, -1544, 155,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimHammerLanding_joint25[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 245, -245,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, 624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, -624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 253, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1033, 592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1439, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 292,
	ftAnimLoop(0x6800, -134),
};

/* Joint 26 */
u16 dFTYoshiAnimHammerLanding_joint26[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1573, -11, -8, 6, -158, 148,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1405, -42, 59, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -116, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1395, 334, 73, 329, 479, 367,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2382, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 718, 322, 238, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 718, -293, 738, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1599, -409, 131, -316, 36, -492,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -305, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1563, -30, 85, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 151, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1538, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1430, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, 295, 97, 202, 258, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2020, 52, 557, 35, 112, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -140, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1589, -227, 167, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1566, -9, 21, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1571, 5, -10, -32, -106, 34,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
	0x0000, 0x0000,
};
