/* AnimJoint data for relocData file 663 (FTFoxAnimTeeter) */
/* 2128 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTeeter_joint1[30];
extern u16 dFTFoxAnimTeeter_joint2[30];
extern u16 dFTFoxAnimTeeter_joint4[22];
extern u16 dFTFoxAnimTeeter_joint5[154];
extern u16 dFTFoxAnimTeeter_joint6[68];
extern u16 dFTFoxAnimTeeter_joint7[14];
extern u16 dFTFoxAnimTeeter_joint8[26];
extern u16 dFTFoxAnimTeeter_joint10[14];
extern u16 dFTFoxAnimTeeter_joint11[180];
extern u16 dFTFoxAnimTeeter_joint12[72];
extern u16 dFTFoxAnimTeeter_joint13[12];
extern u16 dFTFoxAnimTeeter_joint15[12];
extern u16 dFTFoxAnimTeeter_joint16[58];
extern u16 dFTFoxAnimTeeter_joint18[46];
extern u16 dFTFoxAnimTeeter_joint20[62];
extern u16 dFTFoxAnimTeeter_joint21[66];
extern u16 dFTFoxAnimTeeter_joint23[38];
extern u16 dFTFoxAnimTeeter_joint24[68];
extern u16 dFTFoxAnimTeeter_joint25[20];
extern u16 dFTFoxAnimTeeter_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimTeeter_joints[] = {
	(AObjEvent32 *)dFTFoxAnimTeeter_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimTeeter_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimTeeter_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 720, 48, 360, 120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), 600, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 780,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 600, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 720, 48, 360, 120,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimTeeter_joint2[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 536, 37,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 446, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 536, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 536, 37,
	ftAnimLoop(0x6800, -58),
};

/* Joint 4 */
u16 dFTFoxAnimTeeter_joint4[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 357, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 357, 7,
	ftAnimLoop(0x6800, -42),
};

/* Joint 5 */
u16 dFTFoxAnimTeeter_joint5[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1672, 152, -460, -52, 1847, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -422, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1268, 286, 1390, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -947, 262, 1078, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 954, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1019, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -338, -117,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1803, 463,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1142, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1643, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -456, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -526, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2098, -293, -370, 92, 2343, 322,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -460, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2229, -142, 2448, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2383, -153, 2545, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2892, -287, 2974, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3246, -289, -489, 22, 3395, 357,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -121, -53, 4199, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -3924, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4135, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4928, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, -106, 4332, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -409, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5124, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5125, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4889, 38, -460, -51, 5064, -61,
	ftAnimLoop(0x6800, -304),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimTeeter_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -332, -177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -861, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -624, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 219,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -619, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -479, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, -150,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimTeeter_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 12,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimTeeter_joint8[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 178, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 178, 19,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimTeeter_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	_FT_ANIM_CMD(11, 0, 1), 12,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimTeeter_joint11[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, -148, 1145, -48, 211, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1192, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -352, -279, -231, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -664, -255, -533, -233,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -653, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -590, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1311, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1276, -117,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 170, 433,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -470, 147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 13, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1156, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1173, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 440, 304, 664, 335,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 775, 153, 936, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1271, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1262, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 928, 144, 1026, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1312, 296, 1401, 344,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1132, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1444, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1656, 280, 1809, 345,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2316, 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2589, 87,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1503, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1246, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2526, 210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3286, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2716, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3351, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1237, -26, 3480, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3290, -13, 1194, -45, 3475, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3259, -30, 1145, -48, 3428, -47,
	ftAnimLoop(0x6800, -356),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimTeeter_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -361, -167,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -870, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -639, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -466, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -638, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -255, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -231, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -130,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimTeeter_joint13[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 446,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -22),
};

/* Joint 15 */
u16 dFTFoxAnimTeeter_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimTeeter_joint16[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -3, -48, -2, -136, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -30, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -65, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 381, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 467, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 65, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, -4, 11, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -44, -4, -90, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -3, -48, -4, -136, -46,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimTeeter_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 887, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 336, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 452, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 883, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, 4,
	ftAnimLoop(0x6800, -90),
};

/* Joint 20 */
u16 dFTFoxAnimTeeter_joint20[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1651, 6, -1588, -4, 1116, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1657, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1584, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1488, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1552, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1734, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1755, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1795, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1732, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1119, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1656, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1643, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, 7, -1588, -4, 1116, -3,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimTeeter_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 6, -1590, 7, 1341, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1535, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -1560, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1509, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1546, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1565, -6,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1532, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1485, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1557, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1362, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1575, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1590, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 9, -1590, 0, 1341, -20,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimTeeter_joint23[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 280, -83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 277, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, -29,
	ftAnimLoop(0x6800, -74),
};

/* Joint 24 */
u16 dFTFoxAnimTeeter_joint24[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -12, 126, -5, -484, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 216, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 3, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -332, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -268, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -468, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 207, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 134, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -7, -507, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -10, 126, -8, -484, 22,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimTeeter_joint25[20] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 134,
	ftAnimSetValBlock(FT_ANIM_ROTY), 219,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), -134,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), 219,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 134,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), 219,
	ftAnimLoop(0x6800, -38),
};

/* Joint 26 */
u16 dFTFoxAnimTeeter_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), -368,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 368,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
