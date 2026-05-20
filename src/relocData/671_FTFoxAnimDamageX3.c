/* AnimJoint data for relocData file 671 (FTFoxAnimDamageX3) */
/* 2688 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamageX3_joint1[60];
extern u16 dFTFoxAnimDamageX3_joint2[48];
extern u16 dFTFoxAnimDamageX3_joint4[46];
extern u16 dFTFoxAnimDamageX3_joint5[132];
extern u16 dFTFoxAnimDamageX3_joint6[58];
extern u16 dFTFoxAnimDamageX3_joint7[10];
extern u16 dFTFoxAnimDamageX3_joint8[76];
extern u16 dFTFoxAnimDamageX3_joint10[10];
extern u16 dFTFoxAnimDamageX3_joint11[124];
extern u16 dFTFoxAnimDamageX3_joint12[48];
extern u16 dFTFoxAnimDamageX3_joint13[10];
extern u16 dFTFoxAnimDamageX3_joint15[10];
extern u16 dFTFoxAnimDamageX3_joint16[136];
extern u16 dFTFoxAnimDamageX3_joint18[48];
extern u16 dFTFoxAnimDamageX3_joint20[104];
extern u16 dFTFoxAnimDamageX3_joint21[102];
extern u16 dFTFoxAnimDamageX3_joint23[48];
extern u16 dFTFoxAnimDamageX3_joint24[108];
extern u16 dFTFoxAnimDamageX3_joint25[56];
extern u16 dFTFoxAnimDamageX3_joint26[58];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDamageX3_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDamageX3_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamageX3_joint1[60] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 0, 912, 2, -20, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 957, -247, -494, -2754,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 48,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 27), 48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 850, -482, -709, -1351,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 837, -7, -832, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 837, -46, -832, 92,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 727, -35, -613, 445,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 785, 185, -181, 592,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamageX3_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -338,
	ftAnimSetValRate(FT_ANIM_ROTZ), -3, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 222, 179,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 217, 10, -338, -28, -3, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 381, 4, -338, -15, -3, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 321, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -672, -257,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamageX3_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 45, 313, -212, 403, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 401, 0, -268, -39, -106, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 271, 1, -290, 3, -107, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 441, 2, -202, 32, -117, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamageX3_joint5[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1711, 344, -1443, -62, 1847, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1367, 412, -1505, 154, 1329, -747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -887, 316, -1134, 194, 351, -570,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1129, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -733, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 462, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1145, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1357, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -736, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -699, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1378, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1091, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -702, -26, 484, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -941, -236, 778, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1224, -231, -1167, -114, 1084, 249,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1593, -94, 1640, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1430, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1366, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1283, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1700, -64, -1401, -80, 1842, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1723, -5, -1445, -20, 1902, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1711, 11, -1443, 1, 1847, -55,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamageX3_joint6[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -530, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -649, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -534, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -880, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -942, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, 197,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamageX3_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamageX3_joint8[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -72,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -113, 0, 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 213, 56, 253, 160, 84, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -10, 457, -69, -66, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 8, 114, -34, 27, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 131, -11, -98, -14, -22, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -45, -69, -180, 82, -44, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -406, 2, 544, 85, -474, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -34, 73, 246, -102, -129, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -113, 136,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamageX3_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamageX3_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1729, 155, 1336, 363, 1924, -1119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1845, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1700, 211, 804, -578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1759, 36, 766, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1554, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1617, -187, 1773, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1509, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1604, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1558, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1609, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1891, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1523, 14, 1559, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1826, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1816, 36,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1916, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1957, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1880, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1376, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1844, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1724, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1861, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1518, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1666, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1752, 2, 1867, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1729, -23, 1336, -39, 1924, 56,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamageX3_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -569, 379,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -963, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -757, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -650, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamageX3_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamageX3_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamageX3_joint16[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 599, -223, 65, -26, -691,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, 86, -157, -10, -718, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -231, -216, -243, -46, -569, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -589, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -179, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -258, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -209, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -663, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -168, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -383, -70,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -135, 111, -628, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -682, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 85, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -443, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -313, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -403, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -15, -122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -331, 143,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -173, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -343, -115, -143, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -61, -223, 90, -26, 116,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamageX3_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -348,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 473, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 500, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -146,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamageX3_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -17, 125, -64, -55, 344,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 72, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 7, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 347, 21,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 45, -21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -61, 366, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 241, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -219, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -101, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -110, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 73, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 18, -66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 36, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 10, 125, 52, -55, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamageX3_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 99, 137, -336, 134, -603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 454, -118, -199, -136, -469, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, -166, -135, 41, -619, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -781, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -18, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 233, 30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -467, 87,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -14, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 115, 61,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 254, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 256, 68,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 61, -364, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 189, -49, 54, 84,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 323, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 31, 137, -52, 134, 80,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamageX3_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -332,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 461, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 720, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 712, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 517, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamageX3_joint24[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -71, -102, -61, -226, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -163, -164, 165, -14, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, -115, 227, 214, -43, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -163, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -270, 15, 286, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -255, 13, 297, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -220, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 238, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -60, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -203, 22, -198, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -364, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -82, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 13, -102, -20, -226, 66,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamageX3_joint25[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -45, 0, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 383, 49, 128, -11, -61, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 613, -1, 71, -25, -442, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 359, -39, -397, 1, -144, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 75, -51, 91, 88, -6, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDamageX3_joint26[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -122, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -1, -122, 140, 0, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, 27, 157, -5, -101, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 158, -4, -193, -28, 63, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -276, -18, -435, 19, 172, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -115, 13, 84, 44, -81, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
