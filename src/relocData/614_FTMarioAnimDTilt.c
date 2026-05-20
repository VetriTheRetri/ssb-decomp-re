/* AnimJoint data for relocData file 614 (FTMarioAnimDTilt) */
/* 3840 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDTilt_joint1[24];
extern u16 dFTMarioAnimDTilt_joint2[68];
extern u16 dFTMarioAnimDTilt_joint3[20];
extern u16 dFTMarioAnimDTilt_joint5[54];
extern u16 dFTMarioAnimDTilt_joint6[226];
extern u16 dFTMarioAnimDTilt_joint7[78];
extern u16 dFTMarioAnimDTilt_joint8[8];
extern u16 dFTMarioAnimDTilt_joint9[50];
extern u16 dFTMarioAnimDTilt_joint11[14];
extern u16 dFTMarioAnimDTilt_joint12[182];
extern u16 dFTMarioAnimDTilt_joint13[62];
extern u16 dFTMarioAnimDTilt_joint14[8];
extern u16 dFTMarioAnimDTilt_joint16[10];
extern u16 dFTMarioAnimDTilt_joint17[230];
extern u16 dFTMarioAnimDTilt_joint19[86];
extern u16 dFTMarioAnimDTilt_joint21[222];
extern u16 dFTMarioAnimDTilt_joint22[234];
extern u16 dFTMarioAnimDTilt_joint24[86];
extern u16 dFTMarioAnimDTilt_joint25[208];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimDTilt_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTMarioAnimDTilt_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimDTilt_joint1[24] = {
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), 693,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 693,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), 322,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), -126,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), -45,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 7), 30,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDTilt_joint2[68] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, -16,
	ftAnimSetValRate(FT_ANIM_ROTY), 223, 484,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 140, 223,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1608, 230,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -106, 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 1), 1608,
	ftAnimSetValT(FT_ANIM_TRAY, 11), 223,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -106,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 1608,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1608, 87,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 3092, 63,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 367,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 604, 223,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 32, 243,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 3440,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 32, 243,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 140, 223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimDTilt_joint3[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -734, 161,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -568, -734, 161,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -568, -734, 161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDTilt_joint5[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 863, 71, 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 398, -210, -192,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 393, 5, -221,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 373, 175, -349,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 393, 5, -221,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 403, -160, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 359, -25, 40,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 359, -25, 40,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 359, -25, 40,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 863, 71, 73,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDTilt_joint6[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1357, -360, -1143, 44, 333, 846,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1144, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1718, 18, 1179, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1320, 223, 1267, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1270, -8, 1246, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, 176, -1190, -152, 2018, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -916, 234, -1449, -87, 2010, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -869, 82, -1365, 83, 2054, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1282, -77, 2106, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -751, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -446, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -687, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -771, -57, -1361, -83, 2053, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1524, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1409, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1033, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1118, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1205, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1208, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1444, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1128, 51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1366, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1261, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2074, -210,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1125, -19, 1552, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1100, 80, 1446, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2241, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2137, 236,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1002, 63, 1463, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 996, -319,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -996, -91,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1832, 344,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1212, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 320, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1085, 39, -1110, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1137, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1227, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1272, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1316, -42, 327, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1357, -41, -1143, -6, 333, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDTilt_joint7[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -216, -555,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -497, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 248,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -433, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -540, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -385, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDTilt_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimDTilt_joint9[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 112, 30, -38,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 318, -744, -308,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 564, -744, -308,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 318, -744, -308,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 322, 19, 350,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 216, 645, 69,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 352, 484, 50,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 187, 0, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDTilt_joint11[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDTilt_joint12[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 435, 469, -52, -1278, 839,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 166, 417, -191, -438, 530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, -93, 86, -132, -217, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 91, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 43, -597, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 16, -585, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 312, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -398, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 307, -24, -279, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -497, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -129, -140, 249, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -413, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 214, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -491, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -394, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -575, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 439, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -345, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 122, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1087, -183,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 130, -7, 457, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 470, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -164, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -314, -71, -1284, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -288, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1280, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -283, 4, -1279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 4, 469, 0, -1278, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDTilt_joint13[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -217, -687,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -458, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -376, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -217, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -217,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimDTilt_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDTilt_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimDTilt_joint17[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, -562, -188, 363, -652, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -743, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -283, -227, 175, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -176, 167, 267, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 313, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 518, 103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -365, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 81, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 512, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 274, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -414, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -50, -60,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 285, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 26, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -311, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -375, -55, 343, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -531, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -84, -82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 380, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -605, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -442, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 344, -122, -132, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, -81, -503, 19, 104, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -258, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 181, -13, -34, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -168, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 201, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -198, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -161, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 22, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -538, -132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -233, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 246, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 32, -188, 45, -652, -114,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimDTilt_joint19[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1269, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1281, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1219, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1328, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1043, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1193, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1169, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1361, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1349, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1311, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1332, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, -62,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDTilt_joint21[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1491, 310, -1720, 348, -1797, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1801, 28, -1372, 94, -1804, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -235, -1532, -90, -1485, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1653, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1078, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1740, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1871, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1870, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1661, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1522, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1074, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1177, 138,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1869, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2045, -138,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1337, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1507, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2211, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1961, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1449, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1451, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1391, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1341, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, -17, -1872, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1490, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1763, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1580, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1626, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1464, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1182, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1593, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1609, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1353, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1688, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1732, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1938, -148,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1081, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1131, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2108, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2374, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1785, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1703, -99,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1276, -144, -2284, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1643, -88, -1936, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1600, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1520, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, -29, -1720, -77, -1797, 139,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimDTilt_joint22[234] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -189, 427, 170, 200, -714, 1163,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, 199, 370, -155, 449, 756,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, 117, -140, -29, 798, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 7, 311, 374, 806, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 222, 240, 607, 174, 503, 261,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 955, 366, 1330, 413,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 664, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -2047, 4096, -1023, 4096, -1023,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 955, 2, 1331, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 785, -99, 1143, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 661, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 563, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 679, -44, 1024, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 917, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 357, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 512, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 699, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, -362, 695, -41, 152, -390,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -348, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 226, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -13, 90, 9, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -167, -33, -373, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -80, 129, -635, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 319, 23, -589, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 312, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 276, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 294, -19, -601, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -152, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -723, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 141, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -232, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 42, 170, 28, -714, 9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDTilt_joint24[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1298, -195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 861, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1358, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 977, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 729, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1098, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1298, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimDTilt_joint25[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, 89, -46, 64, -148, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -23, 18, 208, -486, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, -60, 370, 105, 239, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -30, 228, -69, -2, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 195, 231, 57, 35, 167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 343, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 367, 233, 333, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 367, 0, 334, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 367, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 173, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 343, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 148, -183,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 276, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, 110, -89, -117, 54, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 401, 78, -83, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -598, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 449, 32, -80, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 116, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 396, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 123, -159, -755, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -268, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -520, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 180, 94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -497, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -5, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 0, 261, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 7, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -27, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 86, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -38, -84, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, -51, -46, -19, -148, -63,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
