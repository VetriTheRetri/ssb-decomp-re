/* AnimJoint data for relocData file 1300 (FTKirbyAnimDamage2) */
/* 2128 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamage2_joint1[104];
extern u16 dFTKirbyAnimDamage2_joint2[18];
extern u16 dFTKirbyAnimDamage2_joint3[22];
extern u16 dFTKirbyAnimDamage2_joint5[34];
extern u16 dFTKirbyAnimDamage2_joint6[128];
extern u16 dFTKirbyAnimDamage2_joint7[16];
extern u16 dFTKirbyAnimDamage2_joint9[38];
extern u16 dFTKirbyAnimDamage2_joint10[134];
extern u16 dFTKirbyAnimDamage2_joint11[14];
extern u16 dFTKirbyAnimDamage2_joint13[10];
extern u16 dFTKirbyAnimDamage2_joint14[104];
extern u16 dFTKirbyAnimDamage2_joint16[14];
extern u16 dFTKirbyAnimDamage2_joint18[154];
extern u16 dFTKirbyAnimDamage2_joint19[84];
extern u16 dFTKirbyAnimDamage2_joint21[146];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamage2_joints[] = {
	(u32)dFTKirbyAnimDamage2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamage2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamage2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamage2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamage2_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamage2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamage2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamage2_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamage2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamage2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamage2_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamage2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamage2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamage2_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamage2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01D2, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDamage2_joint1[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2048,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3276, 3276,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 2867,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 5324,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3891, 3891,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 7), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -536,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDamage2_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 804,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamage2_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamage2_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), -120, -120,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), 178,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -210, -150,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamage2_joint6[128] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -751, -217, -774, 0, -29,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -991, -423, -29, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -360, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 29), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1065, -57, 191, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -981, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -152, 117, 17, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -183, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -40, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -133, 40, -1045, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1002, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -127, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1036, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1034, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 39, 111,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1041, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1062, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 182, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 782, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 21, -1062, 0, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDamage2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamage2_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), -178,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), 120, -120,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), -178,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 210, -150, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamage2_joint10[134] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 813, 1391, -773, 1608, -30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 617, -424, 1578, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1194, 139,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 29), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 542, -47, 1799, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 634, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1318, -121, 1662, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1539, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1557, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1576, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1473, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1423, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 559, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 597, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1562, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1568, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 565, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 556, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1416, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1509, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1594, -120, 554, -1, 1577, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 545, 0, 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2324, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2392, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -20, 548, 2, 1608, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDamage2_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamage2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamage2_joint14[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, -95, -1305, -85, -1371, 253,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -1453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1489, -22, -1118, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1539, 13, -1041, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1505, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -836, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -836,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -850, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1531, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1503, 16,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1453,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1283, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1516, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1440, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1464, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1445, 13, -1245, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1513, 11, -1214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1520, 6, -1214, 0, -1483, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimDamage2_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamage2_joint18[154] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 275, -1431, -475, -1704, 821,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1642, 109, -1906, -228, -883, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, 70, -1889, 48, -839, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -576, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1732, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1502, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1447, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1440, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -576, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1751, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1747, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1444, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1441, -17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1748, 13, -577, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -948, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1394, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1475, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1866, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1929, -26, -1050, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2035, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -982, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1430, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1167, 114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2158, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1940, 166, -1099, 19, -1362, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1826, 114, -1127, -28, -1525, -163,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamage2_joint19[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -4, 302, -18, 233, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 176, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 122, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -100, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 7, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 64, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 325, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 24, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 84, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 353, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 389, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 0, 394, 5, 120, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamage2_joint21[146] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0135, 0xFFF0, 0x00B0, 0xFFD2, 0xFF9D, 0x0044, 0x3F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0003, 0xFFA9, 0xFF91, 0x4701, 0x0014, 0x1000, 0x1000, 0x1000, 0x200B, 0x0002, 0x0113, 0xFFA3, 0x00D8, 0x0110, 0x200B, 0x0001, 0x006A, 0xFF8C, 0x0201, 0x00DC, 0x2809, 0x0005, 0x026E, 0xFFF7, 0x2803, 0x0006, 0x002E, 0xFFFF, 0x2005, 0x0001, 0xFF5A, 0xFFCF, 0x2805, 0x0006, 0xFF5D, 0xFFED, 0x0801, 0x0004, 0x2009, 0x0001, 0x0276, 0x000F, 0x2809, 0x000D, 0x0284, 0xFFF5, 0x2003, 0x0001, 0x0029, 0xFFFA, 0x2803, 0x000D, 0xFFD7, 0xFFE2, 0x2005, 0x0001, 0xFF50, 0xFFFB, 0x2805, 0x000B, 0xFF5F, 0x0002, 0x0801, 0x0009, 0x4701, 0x000A, 0x0E66, 0x0E66, 0x0E66, 0x0801, 0x0002, 0x200D, 0x0001, 0xFF67, 0x0017, 0x0276, 0xFFE5, 0x2805, 0x0003, 0x00B1, 0x00B3, 0x2809, 0x0006, 0x0060, 0xFFDC, 0x2003, 0x0001, 0xFFC1, 0x0016, 0x2803, 0x0003, 0x00EF, 0x001F, 0x0801, 0x0002, 0x2005, 0x0001, 0x015C, 0x0081, 0x2805, 0x0002, 0x01D7, 0x0016, 0x2003, 0x0001, 0x00E9, 0xFFF7, 0x2003, 0x0001, 0x00DD, 0xFFF9, 0x200F, 0x0001, 0x00D9, 0xFFFD, 0x01E1, 0x0009, 0x004F, 0xFFEF, 0x0000,
};
