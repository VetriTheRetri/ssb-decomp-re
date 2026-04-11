/* AnimJoint data for relocData file 677 (FTFoxAnimDamaged7) */
/* 2416 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged7_joint1[58];
extern u16 dFTFoxAnimDamaged7_joint2[20];
extern u16 dFTFoxAnimDamaged7_joint4[54];
extern u16 dFTFoxAnimDamaged7_joint5[152];
extern u16 dFTFoxAnimDamaged7_joint6[56];
extern u16 dFTFoxAnimDamaged7_joint7[10];
extern u16 dFTFoxAnimDamaged7_joint8[66];
extern u16 dFTFoxAnimDamaged7_joint10[10];
extern u16 dFTFoxAnimDamaged7_joint11[132];
extern u16 dFTFoxAnimDamaged7_joint12[58];
extern u16 dFTFoxAnimDamaged7_joint13[10];
extern u16 dFTFoxAnimDamaged7_joint15[10];
extern u16 dFTFoxAnimDamaged7_joint16[84];
extern u16 dFTFoxAnimDamaged7_joint18[56];
extern u16 dFTFoxAnimDamaged7_joint20[100];
extern u16 dFTFoxAnimDamaged7_joint21[76];
extern u16 dFTFoxAnimDamaged7_joint23[48];
extern u16 dFTFoxAnimDamaged7_joint24[82];
extern u16 dFTFoxAnimDamaged7_joint25[74];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamaged7_joints[] = {
	(u32)dFTFoxAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamaged7_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamaged7_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamaged7_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamaged7_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamaged7_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamaged7_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamaged7_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamaged7_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamaged7_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamaged7_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamaged7_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamaged7_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamaged7_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamaged7_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamaged7_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamaged7_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamaged7_joint25, /* [24] joint 25 */
	0xFFFF0249, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged7_joint1[58] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 3216,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 960, 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 960, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3321, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3007, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2864, -37,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 53, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 2362, -71, 1086, 90, 111, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1502, -241, 1175, 128, 256, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 431, -214, 1214, -246, -94, -293,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 960, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamaged7_joint2[20] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 28), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDamaged7_joint4[54] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 454, 173, 283,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -256, -268, -118, 0, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -313, -13, -180, 3, 157, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -231, 33, -211, -2, 155, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 313, 21, -220, -5, -13, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDamaged7_joint5[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 555, -610, -341, 37, -728, 821,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -303, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -54, -249, 93, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, 398, -125, -519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 743, -26, -460, -585, -946, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -347, -1474, -458, -698, 182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -566, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 47, 14, -1377, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1371, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -95, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -559, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1372, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1355, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 166, -1340, 70, -546, -217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1143, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1159, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, -417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1380, -282,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1789, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1313, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1235, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1378, 164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1800, 202,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1941, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2317, -101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2019, 182, -1272, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2165, 146, -1270, 2, -2340, -22,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged7_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -620,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -534, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamaged7_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged7_joint8[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -425, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 630, -414,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 69, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 318, -303, 164, 227, 40, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -279, -34, 268, 6, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -265, 21, 268, -2, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 130, 68, 218, -1, -170, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 353, 6, 258, 7, -33, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 268, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamaged7_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged7_joint11[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2336, 775, 1040, -540, 2059, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 119, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3111, 502, 2223, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3340, 59, 2856, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3231, 316, 148, 508, 2445, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3974, 342, 1137, 502, 2710, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2652, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3916, -52, 1152, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1021, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3868, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 3503, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2629, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 2356, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3488, 282, 1009, -89, 2345, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4068, -2, 842, -486, 2807, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3483, -305, 36, -485, 2595, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2627, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3456, -113, -129, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3257, -93, -118, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 3717, 232, 422, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2775, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 3203, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3944, 226, 567, 144, 3668, 465,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged7_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -389, 128,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -585, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 132,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDamaged7_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged7_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged7_joint16[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 31, -6, -40, 25, -325,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -20, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -29, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 39, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 193, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 101, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -7, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -680, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -397, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -2, -6, 0, 25, 158,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged7_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 674,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 417, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 241, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 982, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 881, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -279,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamaged7_joint20[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, -7, -94, 52, 493, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -71, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 30, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 82, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 397, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -61, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 102, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 133, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 134, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 108, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 98, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -10, 349, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -37, -94, -3, 493, 144,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged7_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 10, 1, 5, -763, 393,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 90, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -77, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -477, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -593, -26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -17, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -766, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 1, 1, 0, -763, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged7_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1013, -877,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 689, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 392, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 935, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1014, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamaged7_joint24[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -31, 121, -179, -202, 411,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -111, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -57, -32, 208, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 59, 243, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 80, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 5, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -107, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 0, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 121, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -200, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 31, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -8, 121, 0, -202, -2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged7_joint25[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 427, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 318, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -14, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -51, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -221, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 286, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 178,
	ftAnimEnd(),
	0x4002, 0x0138, 0x48EC, 0x0000, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2003, 0x0001, 0x0000, 0xFFDB, 0x2003, 0x0003, 0x00A0, 0x000C, 0x2003, 0x000F, 0x00E3, 0x0008, 0x2003, 0x0004, 0x0144, 0x001B, 0x2003, 0x0004, 0x01C0, 0xFFFF, 0x3803, 0x0003, 0x0138, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
