/* AnimJoint data for relocData file 982 (FTSamusAnimDamageX3) */
/* 3456 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamageX3_joint1[44];
extern u16 dFTSamusAnimDamageX3_joint2[46];
extern u16 dFTSamusAnimDamageX3_joint4[110];
extern u16 dFTSamusAnimDamageX3_joint5[170];
extern u16 dFTSamusAnimDamageX3_joint6[72];
extern u16 dFTSamusAnimDamageX3_joint7[60];
extern u16 dFTSamusAnimDamageX3_joint8[10];
extern u16 dFTSamusAnimDamageX3_joint9[24];
extern u16 dFTSamusAnimDamageX3_joint11[46];
extern u16 dFTSamusAnimDamageX3_joint12[170];
extern u16 dFTSamusAnimDamageX3_joint14[80];
extern u16 dFTSamusAnimDamageX3_joint15[154];
extern u16 dFTSamusAnimDamageX3_joint17[72];
extern u16 dFTSamusAnimDamageX3_joint19[196];
extern u16 dFTSamusAnimDamageX3_joint20[178];
extern u16 dFTSamusAnimDamageX3_joint22[68];
extern u16 dFTSamusAnimDamageX3_joint23[182];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimDamageX3_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX3_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamageX3_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1445, -884, -208, -2316,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 59, 1268, -868,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -158, 1265, -742,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -110, 1099, -550,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 52, 1432, 16,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDamageX3_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, 83, 78, 13, 3, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 249, 0, 40, -25, 40, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 234, -8, -305, -16, 243, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 94, -16, -276, 21, 260, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamageX3_joint4[110] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 55, 226, 257, -176, -141, -136, 96, 47, -13, -300, -54, 385,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 680, 9, -528, -52, -409, -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 11, -916, -75, -239, 96, 236,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -132, 8, -72, 80, 4, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 181, -52, -419, 18, -327, 8, 24, 123, 45, 27, 26, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -102, -52, -246, -6, -281, 53, 99, -42, -21, -82, -65, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -240, 43, -470, 25, 101, 24, -18, -73, -36, -28, -133, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 330, 30, 4, 58, -35, -12, 7, 18, -58, 36, 123, 133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamageX3_joint5[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 37, -1722, 191, 1377, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1094, 130, -1530, 106, 928, -561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -870, 159, -1509, 220, 253, -485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -776, -24, -1088, 290, -41, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -920, -142, -929, 87, 175, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1061, -148, -913, 5, 346, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1217, -133, -918, -15, 540, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1386, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1403, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 969, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1245, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1379, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1475, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1448, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1547, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1271, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1330, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1508, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1503, -84, -1458, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1759, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1543, -90, 1366, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1639, -46, 1366, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, 42, -1635, 1, 1382, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1405, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1673, 123, -1637, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1490, 205, -1564, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1261, 178, -1626, -79, 1383, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 129, -1722, -96, 1377, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamageX3_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1063, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -874, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -859, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -988, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 96,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamageX3_joint7[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, -325, 79, 5, -111, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -274, -2, 16, -5, 24, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -198, 24, -21, 0, -29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -5, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 268, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 48, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 511, 326, -82, 0, 108, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamageX3_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamageX3_joint9[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamageX3_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 16, 0, 6, 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 98, 8, 40, 3, -166, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 98, 4, 40, 31, -166, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 150, -5, 388, -2, 6, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamageX3_joint12[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 162, -128, 468, -215, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, -25, 339, 146, -233, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -188, 164, -214, -757, -349,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -287, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -157, -83, -932, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -159, -8, -1081, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -374, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -14, -1058, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -88, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -606, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -381, -3, -541, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -266, 85, -183, 124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 160, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, 91, -53, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 52, 183, -25, 45, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 16, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -59, 13, 66, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 73, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -101, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 14, 77, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -40, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 64, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -78, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -72, -147, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 136, -128, -82, -215, -68,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamageX3_joint14[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -630,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1225, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -804, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -969, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1123, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1049, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1089, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 138,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamageX3_joint15[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 26, -27, 21, -389, -325,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 121, 12, 7, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 1, 27, 3, -752, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 99, -11, -10, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -689, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 87, -11, -23, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -11, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -165, -18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, -18, -789, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -121, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -827, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -156, -5, -183, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -101, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -42, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -611, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -135, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 17, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 14, -534, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -18, -7, -440, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 22, -27, -8, -389, 51,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamageX3_joint17[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 527, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 685, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamageX3_joint19[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -26, -28, 59, -41, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, -10, 30, 15, 181, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -5, 1, -48, 521, 161,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -118, -36, 340, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -77, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -46, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -140, -22, 305, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 135, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -305, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -72, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 92, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 115, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -200, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -245, -19, 143, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, -1, -296, 19, 85, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -115, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -249, 0, 113, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -188, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 187, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 15, -62, 23, 236, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -164, 20, -73, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 36, -63, 12, 132, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -46, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 58, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -72, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, -24, -104, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -96, -6, -77, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 20, -28, -4, -41, 35,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamageX3_joint20[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -46, 160, 13, -49, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, -7, 174, 72, -545, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 40, 305, 149, -644, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, 27, 474, 95, -733, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 6, 496, 22, -743, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 544, 2, -761, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 289, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 222, -62, 525, -21, -818, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 296, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1004, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -88, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -114, -47, 268, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -253, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 137, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -867, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -313, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -383, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 230, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -495, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -329, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -151, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, 14, -384, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 116, 259, -15, -211, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 174, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, -33, -144, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -29, -89, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 52, 160, -30, -49, 40,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamageX3_joint22[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 224,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 819, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 979, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 966, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 816, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDamageX3_joint23[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, -82, -1802, -97, 1394, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1927, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1668, -22, 1367, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1706, 7, 1433, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1556, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1882, 60, 1452, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1731, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1413, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1394, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1510, -30, -1658, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1466, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1647, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1642, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1631, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1464, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1504, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1396, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1284, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1525, 40, -1634, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1775, 48, -1757, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1817, 34, -1773, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1848, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1851, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1246, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1337, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1804, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1751, -60, -1884, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1874, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1682, -7, 1383, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1372, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1735, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1747, -15, -1861, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1705, 1, -1826, 29, 1377, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, 45, -1802, 24, 1394, 17,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
