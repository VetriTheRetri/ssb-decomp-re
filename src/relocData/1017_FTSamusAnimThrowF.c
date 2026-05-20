/* AnimJoint data for relocData file 1017 (FTSamusAnimThrowF) */
/* 4416 bytes: 132-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrowF_joint1[54];
extern u16 dFTSamusAnimThrowF_joint2[8];
extern u16 dFTSamusAnimThrowF_joint4[82];
extern u16 dFTSamusAnimThrowF_joint5[164];
extern u16 dFTSamusAnimThrowF_joint6[64];
extern u16 dFTSamusAnimThrowF_joint7[22];
extern u16 dFTSamusAnimThrowF_joint8[10];
extern u16 dFTSamusAnimThrowF_joint11[40];
extern u16 dFTSamusAnimThrowF_joint12[204];
extern u16 dFTSamusAnimThrowF_joint13[88];
extern u16 dFTSamusAnimThrowF_joint14[258];
extern u16 dFTSamusAnimThrowF_joint15[90];
extern u16 dFTSamusAnimThrowF_joint16[90];
extern u16 dFTSamusAnimThrowF_joint17[92];
extern u16 dFTSamusAnimThrowF_joint18[96];
extern u16 dFTSamusAnimThrowF_joint19[78];
extern u16 dFTSamusAnimThrowF_joint20[8];
extern u16 dFTSamusAnimThrowF_joint21[40];
extern u16 dFTSamusAnimThrowF_joint23[62];
extern u16 dFTSamusAnimThrowF_joint24[64];
extern u16 dFTSamusAnimThrowF_joint26[40];
extern u16 dFTSamusAnimThrowF_joint28[72];
extern u16 dFTSamusAnimThrowF_joint29[112];
extern u16 dFTSamusAnimThrowF_joint31[62];
extern u16 dFTSamusAnimThrowF_joint32[108];
extern u16 dFTSamusAnimThrowF_joint33[134];

/* Joint pointer table (33 entries, 132 bytes) */
AObjEvent32 * dFTSamusAnimThrowF_joints[] = {
	(AObjEvent32 *)dFTSamusAnimThrowF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint29, /* [28] joint 29 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint31, /* [29] joint 31 */
	NULL, /* [30] NULL */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint32, /* [31] joint 32 */
	(AObjEvent32 *)dFTSamusAnimThrowF_joint33, /* [32] joint 33 */
};

/* Joint 1 */
u16 dFTSamusAnimThrowF_joint1[54] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1063, 0, 253, 1,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, 1074, -56, -1176,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -258, 255,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 1600,
	ftAnimSetValT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 1600,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 321, 232,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 1619,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 321, -92,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 0, 1619,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 0, 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimThrowF_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimThrowF_joint4[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 284, 0, 405, 0, 213, 0, 40, 0, -6, 0, 58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -71, -178, 0, 0, -53, -29, -65, 0, 13, 2, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -178, 0, -45, 0, 0, 21, 2, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), -484, 63, -57, 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 38), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 446, 44, 48, 40, 0, -4, 2, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 446, -16, 48, -14, 0, 0, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimThrowF_joint5[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1236, -426, -1194, -120, 1630, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1663, -170, -1314, -213, 1675, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 34, -1620, -139, 1260, -272,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1671, -133, 1310, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1594, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1570, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1403, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1863, -147, 1579, 176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1800, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1932, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1404, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1383, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1836, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1905, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1356, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1164, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1943, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1833, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1942, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1810, -184,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1696, 156, -1122, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1175, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1637, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1604, -187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1110, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1153, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1148, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -27, 1133, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1718, -7, 1290, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 16, -1722, -4, 1377, 86,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimThrowF_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -444,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -520, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1112, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -916, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -928, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -921, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -454, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimThrowF_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -518, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 138, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimThrowF_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimThrowF_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0, -440, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -352, 43,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 221, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -446, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -446, 16, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimThrowF_joint12[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 216, 473, -210, -461, 344,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 128, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 307, 27, 263, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 145, -90, 287, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -57, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 127, 1, -121, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -91, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, 245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 796, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 178, 281,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 590, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, -550, -739, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -305, -107, 188, -291, -957, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 208, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -331, -11, -1136, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -212, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -210, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 202, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -133, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -111, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 198, 52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, 55, -113, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 200, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 117, 262, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 210, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 433, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 143, -47, 409, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 170, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 52, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -206, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -123, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 5, -128, -5, -215, -9,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimThrowF_joint13[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -424, -607,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1250, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1096, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1340, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1212, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1194, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -944, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -605, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimThrowF_joint14[258] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 16,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -900, 47, -622, -1, -694, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 808, 14, 11, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAZ, 4), -1000, -47, -589, 117, 81, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -622, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -595, -15,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 313,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2345, 2795,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 4), 1214, 758,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1921, 130,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 320,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 726, -144, 577, 422,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -2002,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 1493,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 4), 4096, 586,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2421, 524, 758, 7, -2577, -2576,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 2671, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 765, 1598, 592, -894, -2388, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 774, 788, -1030, -552, -2221, -747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2342, 87, -513, 731, -3883, -40,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), -249,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 19), 16, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 949, -721, 433, 446, -2301, 2404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 899, -828, 379, 418, 924, 806,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -706, -4, 1270, -42, -688, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 890, 1453, 295, -760, 868, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2201, -1010, -250, -267, -738, -827,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1130, -1684, -238, -11, -787, 1578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1168, 700, -273, -548, 2418, 781,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 271, -496, -1335, 236, 775, -2428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2161, -1393, 200, 759, -2438, -1645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2516, -67, 183, 26, -2515, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2296, 978, 254, 543, -2445, 793,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -559, 695, 1269, -394, -928, 750,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -904, -1852, -534, -928, -944, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4263, -1707, -587, 102, -741, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -226, -14, -804, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4319, 1542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1178, 243,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 751,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3253, 29, -661, -26, 1663, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ, 11), -784, -601, -819, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimThrowF_joint15[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -22, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -211, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 137, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -106, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 35,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -180, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -534, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -251, 456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 377, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -277, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 260, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -31, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTSamusAnimThrowF_joint16[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 91,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -12, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -322, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 218, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 47,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -278, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -282, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, 609,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 857,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -174, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 525, 70,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTSamusAnimThrowF_joint17[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -145, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -339, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 296, 472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 495, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 315, -463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -431, -68,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 167,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 240, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 159, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 291, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 56, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrowF_joint18[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -3525, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2968, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2890, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2951, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3566, 1273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -403, 1783,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 273,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, 145,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -217, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 212, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 170, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -442, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 318, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -312, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 440, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimThrowF_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -137, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 84, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -200, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 209, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 160, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -365, -58,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 180, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -550, -17,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimThrowF_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3216, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimThrowF_joint21[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 458, 13, 5, 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 27), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 8), 471,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 1), 0,
	ftAnimBlock(0, 19),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 16, -8853, 16, -8940, 16, -9019,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 16, 16, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimThrowF_joint23[62] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 776, 17, 6, 2048, 2048, 2048,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 776, 17, 6, 2048, 2048, 2048,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 16, 16, 16,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 742, 15, 3,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 891, 28, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 16, 16, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimThrowF_joint24[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 125, -21, -10, 0, -630, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 115, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -378, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -252, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 86, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -388, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 0, -27, 0, -389, -1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTSamusAnimThrowF_joint26[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1076, -215,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 298, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 530, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 478, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTSamusAnimThrowF_joint28[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -116, 22, -14, -5, -409, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -82, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -31, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 176, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -205, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -75, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -28, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -43, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, 0, -41, 1,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTSamusAnimThrowF_joint29[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, 46, 212, -5, -55, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -148, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 380, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 262, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 44, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 209, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 317, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 177, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 285, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 153, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 222, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 154, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -51, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 0, 162, 1, -54, -2,
	ftAnimEnd(),
};

/* Joint 31 */
u16 dFTSamusAnimThrowF_joint31[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 873, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 269, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, -132,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 241, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 449, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 3,
	ftAnimEnd(),
};

/* Joint 32 */
u16 dFTSamusAnimThrowF_joint32[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -353, 375, 490, -171, -426, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 71, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, 240, -400, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 126, 28, -212, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 18, -7, -180, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 13, -180, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -124, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 205, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 282, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -77, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 202, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 145, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 281, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 195, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -208, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 0, 193, -1, -214, 0,
	ftAnimEnd(),
};

/* Joint 33 */
u16 dFTSamusAnimThrowF_joint33[134] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -98, 4043, 1650, -6800,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 1608, 0, -233,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 241, 172, 1533, -73, -69, -55,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 665, 2121, 275, 1146,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -734, -1428,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -590, -113,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -776, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 888, -235, 1633, -418, 214, -1535,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 738,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), -2109,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -485, -13160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 1), -229, 30, -82, 116, 490, 1809,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 559,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 339, 1, -41, -8,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1451, -4234,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -462, 161,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -949,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -630, 653,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 56, 2362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1400, 1594,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, 139, 1310, -890, -140, 57,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1821, 8, 2076, -358, 84, 264,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -12,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), -230, -154, -96, -2997, 902, 280,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 34), 1608,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
