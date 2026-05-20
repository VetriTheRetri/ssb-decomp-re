/* AnimJoint data for relocData file 680 (FTFoxAnimDamage2) */
/* 3024 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamage2_joint1[98];
extern u16 dFTFoxAnimDamage2_joint2[20];
extern u16 dFTFoxAnimDamage2_joint4[86];
extern u16 dFTFoxAnimDamage2_joint5[156];
extern u16 dFTFoxAnimDamage2_joint6[80];
extern u16 dFTFoxAnimDamage2_joint7[10];
extern u16 dFTFoxAnimDamage2_joint8[86];
extern u16 dFTFoxAnimDamage2_joint10[10];
extern u16 dFTFoxAnimDamage2_joint11[162];
extern u16 dFTFoxAnimDamage2_joint12[64];
extern u16 dFTFoxAnimDamage2_joint13[38];
extern u16 dFTFoxAnimDamage2_joint15[10];
extern u16 dFTFoxAnimDamage2_joint16[110];
extern u16 dFTFoxAnimDamage2_joint18[48];
extern u16 dFTFoxAnimDamage2_joint20[100];
extern u16 dFTFoxAnimDamage2_joint21[138];
extern u16 dFTFoxAnimDamage2_joint23[64];
extern u16 dFTFoxAnimDamage2_joint24[92];
extern u16 dFTFoxAnimDamage2_joint25[56];
extern u16 dFTFoxAnimDamage2_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDamage2_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDamage2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDamage2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamage2_joint1[98] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 0, 912, 2, -20, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6433, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -5767, 411, 0, -23, 0, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 48, 0, 1007, 37, -20, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 48, -11, 1007, -115, -20, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5200, 689, -71, 0, -78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4387, 730, 0, 35, 0, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3738, 280, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2703, 182, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2094, 186, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1210, 104, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -520, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 9, 603, 2,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamage2_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -338,
	ftAnimSetValRate(FT_ANIM_ROTZ), -3, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 0, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -748, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDamage2_joint4[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 618, -39, 153, -4, 79, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, -368, 148, -4, 77, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -259, 144, -1, 77, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -289, -74, 145, 19, 81, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -269, 16, 183, 4, 144, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -188, 30, 171, 6, 68, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1, 47, 240, 0, 47, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 189, 18, 166, 0, 26, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 153, 34, 233, 14, 71, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 565, 323, 312,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamage2_joint5[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -26, -1442, 86, 1867, -514,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1395, 647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1356, -27, 1352, -747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1498, 141, 372, -806,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -450, 553, -1073, 146, -259, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -289, 56, -1205, -68, -98, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1233, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 33, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1254, -242,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1199, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1319, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1468, -118, 373, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1517, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 477, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1382, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1271, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1525, -36, 549, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1624, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1053, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1754, 135,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1622, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2069, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1162, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -976, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1882, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2049, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2074, -5, -973, 2, 2055, 6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamage2_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -306,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -90, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -759, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -612, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamage2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamage2_joint8[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -72,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -113, 0, 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -59, 9, 3, 100, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, -114, 143, 47, -4, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -453, -78, 152, 0, -70, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -467, 24, 142, -24, -65, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -304, 10, 6, -21, -17, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -375, 42, -47, -1, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 38, 66, -7, 0, -19, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 288, 17, -53, -37, -2, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 225, -37, -423, -129,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 133,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDamage2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamage2_joint11[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 211, 1336, 316, 1945, -870,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1953, 10, 1653, 42, 1075, -813,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1762, -100, 1422, -160, 318, -341,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1175, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1752, -200, 393, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1360, -228, -61, -240,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1265, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 288, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1244, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 892, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1132, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1231, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 890, 2, 1336, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1368, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1128, 222,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1184, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1199, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 967, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1381, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1648, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1791, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2034, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1283, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 926, 11, 1514, 340,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1325, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2398, 245, 1964, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2517, -17, 2380, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2501, -11, 1325, -2, 2399, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2495, -6, 1319, -5, 2406, 6,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamage2_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -400, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -547, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamage2_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 331, 68, 116, -4, -169, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 827, 11, -57, -11, -189, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 465, -46, -20, 3, -17, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 44, 0, 44,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamage2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamage2_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 99, -1385, 59, 1581, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1247, -38, -1421, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1572, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1699, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1795, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1225, 96, -1572, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1440, 117, -1407, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1460, 13, -1396, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1396, 0, -1346, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1811, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1666, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1650, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1055, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1400, 46, -1307, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1705, 25, -1487, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1704, -6, -1496, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1611, -4, -1530, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1140, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -2, -1531, -1, 1145, 4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamage2_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 550,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 904, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 160, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 406, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 691, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamage2_joint20[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -21, 125, -10, -56, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 359, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 55, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -148, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -171, -18, 360, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 43, 40, 89, -56,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -2, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, 7, 17, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -233, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -103, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 10, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 74, 34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 5, 25, 5, 98, 24,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamage2_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -146, 1470, 173, -1473, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1399, -244, 1644, 24, -1675, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, -244, 1520, -172, -1339, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1461, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1889, 82, 1298, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1578, 181, 1489, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1515, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1496, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1457, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1473, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1530, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1723, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1488, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1449, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1446, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1893, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1753, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1443, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1851, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1613, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1460, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1541, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1597, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1538, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1440, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1447, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, -30, 1500, -40, -1585, -46,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamage2_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 259, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 323, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 579, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 292, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 288,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamage2_joint24[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -154, -102, -3, -226, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 224, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -28, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -168, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -367, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -411, -25, 222, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 210, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 0, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -113, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -50, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -8, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 515, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -172, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 21, -8, 0, 498, -6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamage2_joint25[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 225, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -240, -42, 219, -2, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -246, 8, 189, -1, -92, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -131, 0, 201, 2, -56, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -251, 11, 209, 1, -31, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDamage2_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -19, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -407, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -251, 50, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 446, 0,
	ftAnimEnd(),
};
