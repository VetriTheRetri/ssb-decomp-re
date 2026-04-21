/* AnimJoint data for relocData file 988 (FTSamusAnimDamaged7) */
/* 3136 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamaged7_joint1[120];
extern u16 dFTSamusAnimDamaged7_joint2[60];
extern u16 dFTSamusAnimDamaged7_joint4[98];
extern u16 dFTSamusAnimDamaged7_joint5[170];
extern u16 dFTSamusAnimDamaged7_joint6[72];
extern u16 dFTSamusAnimDamaged7_joint7[20];
extern u16 dFTSamusAnimDamaged7_joint8[10];
extern u16 dFTSamusAnimDamaged7_joint9[102];
extern u16 dFTSamusAnimDamaged7_joint11[10];
extern u16 dFTSamusAnimDamaged7_joint12[142];
extern u16 dFTSamusAnimDamaged7_joint14[56];
extern u16 dFTSamusAnimDamaged7_joint15[170];
extern u16 dFTSamusAnimDamaged7_joint17[56];
extern u16 dFTSamusAnimDamaged7_joint19[122];
extern u16 dFTSamusAnimDamaged7_joint20[148];
extern u16 dFTSamusAnimDamaged7_joint22[56];
extern u16 dFTSamusAnimDamaged7_joint23[110];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamaged7_joints[] = {
	(u32)dFTSamusAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamaged7_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamaged7_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamaged7_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamaged7_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamaged7_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamaged7_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamaged7_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamaged7_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamaged7_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamaged7_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamaged7_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamaged7_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamaged7_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamaged7_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimDamaged7_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamaged7_joint1[120] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1618, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 979, -1417, -1219, -79, -885, 1212,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1618, -99,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -23, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1601, -860, -1340, -40, 1460, 782, 1612, -47, -104, -305,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1601, -1340, 1460,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1606, -23, -175, -384,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -200, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 1606,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1606, -21, -200, 72,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1601, -1340, 1460,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, 51, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -496, 100, -415, 78, 452, -85,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 9), -37,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1575, -74,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 1486, 24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 4), -112, 70, -171, 59, 186, -64, 128, 37,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1618, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 28, 0, 42, 0, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDamaged7_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 83, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, 138, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 415, 24, 0, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 415, -25, 0, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -12, 0, 3, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 37, -103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimDamaged7_joint4[98] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 184, 98, -166, -132, -174, -86, 0, -102, 0, -3, 0, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 395, 20, -528, -35, -346, -16, -51, -40, -1, -1, 23, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 395, -22, -528, 56, -346, 19, -51, 63, -1, 10, 23, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 30, -13, 375, 38, -37, 5, 75, 98, 20, -43, 12, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 176, -3, 81, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -268, -8, 119, -46, -77, -83, 16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -93, 53, 34, -190, -52, 124, 10, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamaged7_joint5[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, -713, -218, 255, 508, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -565, -268, 37, -448, 424, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -388, -142, -1116, -648, -27, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -851, -162, -1259, -200, 500, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -712, -35, -1517, -213, 528, 186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1669, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -922, -91, 872, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -895, 24, 942, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 829, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -779, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1667, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1383, 102,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1496, 434,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -839, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1209, -351,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1257, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1322, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1659, -332, 2038, 338,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1964, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1652, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1258, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1326, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1736, -218,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1555, 173,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1652, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1543, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1298, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1413, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1794, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2038, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1460, 83, -1390, 22, 2116, 78,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamaged7_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1171, 136,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -801, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -794, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -819, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1135, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1042, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -986, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1003, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1162, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1200, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamaged7_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -268, -242,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -994,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDamaged7_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamaged7_joint9[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 401, 117, 550, 254, 514, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 235, -555, 508, 181, 371, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -709, -929, 913, 274, -581, -957,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1624, -164, 1057, 20, -1544, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1625, 1, 1026, 9, -1548, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1601, 29, 1169, 0, -1455, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1350, 529, 1035, -200, -1244, 534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 675, 568, -377, 149, 658,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 40, 280, -135, 73, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 147, -24, 26, -48, 4, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -145, -21, -11, -3, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamaged7_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamaged7_joint12[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -730, 11, 110, 38, -444, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -596, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, -92, -388, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, 78, -763, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, 287, 306, 226, -233, 283,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -162, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 378, 80, -195, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -270, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 441, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -166, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -221, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 76, 61,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 448, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 390, -112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -271, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 6, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 146, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -230, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 213, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -124, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -217, -141, 198, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -632, -161, 148, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -730, -97, 110, -38, -444, -55,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamaged7_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -876, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -986, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -783, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -857, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamaged7_joint15[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1598, -321, -1582, 200, 775, 545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1920, 60, -1381, 162, 1320, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, 349, -1257, -139, 627, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1220, -265, -1659, -101, 697, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2008, -397, -1460, 106, 777, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1429, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 738, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2015, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2020, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1777, 137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1426, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1363, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 772, 184,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1313, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1286, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1646, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2124, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, 260,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1653, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1369, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1286, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2118, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1915, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1541, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 980, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1920, 29, 904, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1603, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 750, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1286, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1574, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1581, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, -16, -1582, -7, 775, 24,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamaged7_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1063, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, -529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, 579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 882, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 655, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1052, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamaged7_joint19[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, -29, -11, 0, 329, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -58, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, 35, 329, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, -45, 581, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 353, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -52, 15, -113, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -34, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -106, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 272, -20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -195, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -216, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, 6, -214, -4, 258, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -17, 11, 327, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 32, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -159, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 78, -11, 6, 329, 2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamaged7_joint20[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, -301, 5, 72, 2805, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, -81, 78, -107, 2973, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 24, -209, 52, 2353, -358,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2344, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -262, 107, 183, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 44, 157, -8, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 57, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2328, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2275, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 61, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -220, -80,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2263, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2844, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 18, -73, -301, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -590, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -176, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 68, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -572, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -264, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2706, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2782, 32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -9, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 0, 5, 4, 2805, 22,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamaged7_joint22[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 782, -782,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 644, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 740, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 746, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 805, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDamaged7_joint23[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, -87, 86, -105, -16, 319,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 22, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, 19, 302, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, 127, 363, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -85, 72, -35, 362, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, -148, -48, -60, 71, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -136, 0, 71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 82, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, 0, 71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -2, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -135, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -176, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 23, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 34, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -92, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 84, 86, 3, -16, -14,
	ftAnimEnd(),
};
