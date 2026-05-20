/* AnimJoint data for relocData file 531 (FTMarioAnimDamaged5) */
/* 2432 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged5_joint1[42];
extern u16 dFTMarioAnimDamaged5_joint2[34];
extern u16 dFTMarioAnimDamaged5_joint4[42];
extern u16 dFTMarioAnimDamaged5_joint5[110];
extern u16 dFTMarioAnimDamaged5_joint6[54];
extern u16 dFTMarioAnimDamaged5_joint7[24];
extern u16 dFTMarioAnimDamaged5_joint8[42];
extern u16 dFTMarioAnimDamaged5_joint10[26];
extern u16 dFTMarioAnimDamaged5_joint11[120];
extern u16 dFTMarioAnimDamaged5_joint12[42];
extern u16 dFTMarioAnimDamaged5_joint13[74];
extern u16 dFTMarioAnimDamaged5_joint15[10];
extern u16 dFTMarioAnimDamaged5_joint16[110];
extern u16 dFTMarioAnimDamaged5_joint18[52];
extern u16 dFTMarioAnimDamaged5_joint20[98];
extern u16 dFTMarioAnimDamaged5_joint21[114];
extern u16 dFTMarioAnimDamaged5_joint23[46];
extern u16 dFTMarioAnimDamaged5_joint24[128];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDamaged5_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged5_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged5_joint1[42] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 223, 540,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 125, 215, 200, -39, 605, 793,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 430, 27, 143, -5, 739, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 22), 755, 15, 83, -5, 880, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 6), 3216, 0, 599,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamaged5_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 11, -718, 130, -86, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 1, -529, 17, -64, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -29, 1, -324, 18, -39, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamaged5_joint4[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, -37, 231, -46, 98, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, -7, 166, -12, 70, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 25, 18, -35, -3, 165, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 577, -25, 80, -42, 124, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -373, 241,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged5_joint5[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 313, -1308, 197, 1336, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1161, 385, -1110, -26, 1057, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -704, 232, -1361, -126, 600, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1368, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -696, 8, 595, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -688, 9, 594, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -688, -42, 714, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), -1361, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -734, -174, -1347, 145, 726, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1036, -557, -1071, 98, 936, 485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1848, -527, -1150, -88, 1698, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2091, 126, -1248, 128, 1813, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, 628, -893, 155, 1146, -727,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -833, 428, -937, -59, 358, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -738, 95, -1013, -75, 264, -94,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamaged5_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -297,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimDamaged5_joint7[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, -167, 0, -2, 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 190, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1008, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), -115, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamaged5_joint8[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, -386, 117, 122, 157, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -571, -8, 239, 4, 119, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -343, 36, 215, -6, -21, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 306, 33, 80, 18, -148, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -77, 361, -175,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged5_joint10[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, 110, 76, -69, -115, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 4, 0, -2, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamaged5_joint11[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 682, 551, 863, 65, 548,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1126, 266, 1415, 578, 613, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 977, -81, 1708, 149, 519, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 923, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 539, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1716, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1718, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1665, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 911, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 859, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 631, 25,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 871, 34, 1651, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1227, 476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1604, -223, 669, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1204, -185, 1035, 567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1881, 371, 1234, 17, 1805, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1970, 72, 1240, -5, 1828, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2027, 46, 1223, 0, 1845, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2063, 36, 1238, 14, 1877, 32,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged5_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 525,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamaged5_joint13[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 625, 179, 0, -92,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 924, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 70, 84, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, 8, -129, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 1009, -41, 171, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -129, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -208, -149,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 382, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 292, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -124, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, 732,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1274, 336, 80, -769,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1608, 124, 0, 277,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 249,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamaged5_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamaged5_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -71, -230, 128, 45, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 78, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -145, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 465, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -80, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 260, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -138, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -46, -88, -37, 248, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -287, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, -18, 59, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, 25, -325, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 193, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -53, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 60, -37, 16, 255, 22,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged5_joint18[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -299,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamaged5_joint20[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 171, -11, 47, -156, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, -23, 36, -122, -342, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -258, -106, -255, -150, 346, 345,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -245, 10, -274, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 124, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -232, 9, -282, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -412, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -29, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -15, 47, 104, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 88, -43, -296, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -390, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -135, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -22, -90, -158, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -183, -27, 346, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, 36, -36, 99, 461, 115,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged5_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -84, 187, 33, 35, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, 44, 220, -66, -97, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, -183, 54, -87, 209, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 187, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 21, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -249, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -433, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -414, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 174, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -28, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -97, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -400, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -24, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -17, -18, -41, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -57, 66, -504, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -137, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -163, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 102, 48, 198, -568, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 170, 15, 324, 59, -615, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, 9, 353, 29, -631, -15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged5_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 232,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -331,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 898, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, -11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDamaged5_joint24[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 42, -93, 77, -212, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, -441, -16, -152, 15, 461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -793, -230, -399, -27, 710, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -330, 356, -71, 231, 537, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 134, 63, 67, 455, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 50, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 485, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -46, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -159, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -224, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 559, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, 33, -248, -4, 545, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 41, 7, -178, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -232, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, -116, -138, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -247, -43, 14, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -30, -8, 1, 43, 28,
	ftAnimEnd(),
	0x0000, 0x0000,
};
