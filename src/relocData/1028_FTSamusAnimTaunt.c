/* AnimJoint data for relocData file 1028 (FTSamusAnimTaunt) */
/* 2480 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTaunt_joint1[10];
extern u16 dFTSamusAnimTaunt_joint2[46];
extern u16 dFTSamusAnimTaunt_joint4[34];
extern u16 dFTSamusAnimTaunt_joint5[110];
extern u16 dFTSamusAnimTaunt_joint6[28];
extern u16 dFTSamusAnimTaunt_joint7[46];
extern u16 dFTSamusAnimTaunt_joint8[10];
extern u16 dFTSamusAnimTaunt_joint11[40];
extern u16 dFTSamusAnimTaunt_joint12[196];
extern u16 dFTSamusAnimTaunt_joint14[136];
extern u16 dFTSamusAnimTaunt_joint15[118];
extern u16 dFTSamusAnimTaunt_joint17[64];
extern u16 dFTSamusAnimTaunt_joint19[122];
extern u16 dFTSamusAnimTaunt_joint20[76];
extern u16 dFTSamusAnimTaunt_joint22[50];
extern u16 dFTSamusAnimTaunt_joint23[108];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimTaunt_joints[] = {
	(AObjEvent32 *)dFTSamusAnimTaunt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimTaunt_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimTaunt_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 1600, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimTaunt_joint2[46] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 73, -250,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 10), -4, 126,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -5, 148,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 86, -274,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), -5, 86, 148, -274,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -4, 71, 126, -239,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimTaunt_joint4[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -6, 0, 12, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -89, 0, 192, 0, -72, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -89, 192, -72,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 7, 0, -19, 0, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimTaunt_joint5[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 9, -1722, 37, 1377, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1265, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1075, -25, 1608, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1104, -30, 1672, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1165, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1743, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1271, -2, 1816, 36,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), -1271,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1165, 1816,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 33), -1165,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1816,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 32), 1816,
	ftAnimBlock(0, 18),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1271,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1271, 2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1165, 23, 1816, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1073, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1265, -3, 1704, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1665, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1603, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1040, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1117, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, -15, -1722, -57, 1377, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimTaunt_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), -1028,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1028,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), -1028,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -761, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 22,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimTaunt_joint7[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 459, -308,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -223, 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), -223, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 442, 308,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -118, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 701, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimTaunt_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimTaunt_joint11[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -11, 0, -13, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -165, 0, -199, 0, 38, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -200, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 7, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 26), 7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0, 20, 0, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimTaunt_joint12[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -12, -128, 16, -215, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 166, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 34, 3, -484, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 36, 0, -536, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -800, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 8, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 139, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -624, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 51, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 116, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -593, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 0, -603, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 116, 5, -593, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 0, -603, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 116, 5, -593, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 50, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 0, -603, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 116, 5, -593, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 0, -603, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 116, 5, -593, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, 0, -603, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 118, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -594, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -556, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -114, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, -5, -490, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 36, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -186, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 22, -128, -13, -215, -25,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimTaunt_joint14[136] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -815, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -643, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -981, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -991, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1003, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1063, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -719, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 123,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimTaunt_joint15[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -15, -27, -12, -389, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -160, -15, -137, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -216, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -8, -123, 7, -146, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -177, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -123, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -146, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -177, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), -123, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, 8, -123, -6, -146, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -54, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -90, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -230, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -392, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 63, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -45, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 23, -27, 18, -389, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimTaunt_joint17[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 400, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 256, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 335, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 460, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimTaunt_joint19[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 7, -28, 8, -41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 88, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -34, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 22, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 88, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -2, 22, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 8, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 15, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 23, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -64, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -13, -7, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -11, -28, -11, -41, -34,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimTaunt_joint20[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 0, 160, 0, -49, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 115, -3, -41, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 237, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 193,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 115, -41,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 115, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 32), 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, 10, 115, 4, -41, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 160, 0, -57, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 237, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 0, 160, 0, -49, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTSamusAnimTaunt_joint22[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 263, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 175,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 227, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 384, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimTaunt_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -6, 193, -7, -213, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 98, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -59, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 105,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 70, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 105, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 105,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -2, -1, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 117, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -194, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 132, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 182, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 9, 193, 11, -213, -18,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
