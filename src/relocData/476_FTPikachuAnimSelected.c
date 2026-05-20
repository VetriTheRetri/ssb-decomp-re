/* AnimJoint data for relocData file 476 (FTPikachuAnimSelected) */
/* 4880 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimSelected_joint1[74];
extern u16 dFTPikachuAnimSelected_joint2[24];
extern u16 dFTPikachuAnimSelected_joint3[102];
extern u16 dFTPikachuAnimSelected_joint4[94];
extern u16 dFTPikachuAnimSelected_joint6[76];
extern u16 dFTPikachuAnimSelected_joint7[196];
extern u16 dFTPikachuAnimSelected_joint8[8];
extern u16 dFTPikachuAnimSelected_joint9[128];
extern u16 dFTPikachuAnimSelected_joint10[10];
extern u16 dFTPikachuAnimSelected_joint11[180];
extern u16 dFTPikachuAnimSelected_joint12[184];
extern u16 dFTPikachuAnimSelected_joint14[76];
extern u16 dFTPikachuAnimSelected_joint15[170];
extern u16 dFTPikachuAnimSelected_joint17[8];
extern u16 dFTPikachuAnimSelected_joint18[168];
extern u16 dFTPikachuAnimSelected_joint20[88];
extern u16 dFTPikachuAnimSelected_joint22[176];
extern u16 dFTPikachuAnimSelected_joint23[184];
extern u16 dFTPikachuAnimSelected_joint25[96];
extern u16 dFTPikachuAnimSelected_joint26[214];
extern u16 dFTPikachuAnimSelected_joint27[130];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimSelected_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimSelected_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimSelected_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimSelected_joint1[74] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -804, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 0, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1655,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 1201, 73,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 30), 1200, -46,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -133,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), -3, -1553,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 4), -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -3, -1553,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 0, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 0, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 493,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 0, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 493,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 328, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 0, -763,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 32), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimSelected_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -1254,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1280, 759, 0, 675, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1254, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 8415, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 64), 8415,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimSelected_joint3[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, -39, 22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 185, -3, -38, 0, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -6, -40, -39, 0, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -489, -34, -41, 0, 27, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -126, 12, -41, 0, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -68, 14, -40, 0, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 24, 35, -39, -9, 22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 217, 1, -110, -17, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 34, -11, -187, 4, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 24, 0, -39, 70, 22, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 307,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 3651, 86,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 42, 74,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 42, 3651, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPikachuAnimSelected_joint4[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 7, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 144, -16, 9, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -91, 2, 6, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 191, 6, 10, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 191, -9, 10, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -99, -1, 6, 2, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 158, 12, 54, -26, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 89, -5, -393, 4, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -48, 0, 231, 12, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 53, 0, 117, -37, -1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -39, -9, -336, -45, -27, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -39, -336, -27,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimSelected_joint6[76] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 303, -92, 375,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 303, -1, -92, 83, 375, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 302, 4, 425,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 303, 0, -92, -21, 375, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 306, 6, -102, 27, 369, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 335, -23, 46, -47, 413, -21,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 279, -39, -155, -138, 344, -49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 280, 3, -143, 9, 346, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 303, -2, -93, -1, 374, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 260, -150, 354,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimSelected_joint7[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 808, 0, 246, 6, -430, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 1178, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 185, -85, -507, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -248, -25, -979, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 398, 62, -312, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 407, 1, -278, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 325, -7, -339, -11,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1221, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1205, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 301, -31, -376, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 137, -89, -635, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1282, -1, -233, -39, -996, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1219, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -97, 42, -481, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 24, 44, -385, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 227, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -479, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1320, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1292, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 61, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 83, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -489, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -665, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1299, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 982, -27,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 98, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -81, -43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -631, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -296, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -195, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 90, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 909, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 734, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -269, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -225, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 482, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 480, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 497, 5, 174, 27, -224, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimSelected_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimSelected_joint9[128] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, -7, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 195, -6, -8, 0, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -60, 0, -6, 0, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 188, 6, -8, 0, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 188, -11, -8, 0, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -129, -35, -10, 0, -7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -129, 39, -10, 27, -7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 261, 21, 262, 47, -32, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 66, -14, 420, 0, 18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 101, -1, 271, -16, -22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 45, -1, 225, -11, 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 84, 17, 134, -10, -41, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 273, 9, 82, -1, -14, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 244, -3, 104, -9, 102, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 188, -3, -137, -22, -11, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 188, -137, -11,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -122,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimSelected_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimSelected_joint11[180] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 74, 0, -21, 0, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 296, -86, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -62, 0, 17, 0, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 37, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 207, -36, -1, 29, -1, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -233, -12, 178, 5, 124, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -233, 178, 124,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -4, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -14, 16, 0, -34, 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -64, -15, -162, 20, 342, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -124, -10, 145, 51, -21, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -124, 17, 145, -20, -21, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 80, 0, -8, 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 441, 3, 84, 13, 135, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 19, -51, 81, 5, 106, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 30, -2, 131, -9, 172, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -1, 0, -5, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -2, 0, -11, 15, -14, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -11, 1, 381, 5, 27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 8, 3, 18, -38, -24, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 19, -1, -2, -31, -5, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -6, -3, -293, 0, 134, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimSelected_joint12[184] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 79, 0, 18, 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 317, 72, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -66, 0, -14, 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, 41, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 229, -25, -1, -36, -1, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -168, -11, -216, -6, -112, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -112, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), -168, -216,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 4, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -15, 41, 0, 10, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 242, -33, -115, -21, -224, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -250, -82, -147, -5, 23, 41,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -250, -147, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 21, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 103, 0, 41, 0, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 475, 40, 142, 6, -216, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 242, -10, 39, -9, 107, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 390, -26, 63, -4, 174, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -16, 0, -2, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -33, 0, -5, 11, -14, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -22, 3, 285, 5, -137, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, 3, 25, -28, -35, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 9, 0, 0, -33, -4, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, -1, -313, 0, 256, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimSelected_joint14[76] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -291, -99, 370,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -291, -1, -99, 91, 370, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -293, 6, 421,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -291, 0, -99, -25, 370, -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), -294, -10, -120, 25, 349, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -341, -1, 27, 0, 373, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -295, 32, -121, -67, 344, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -297, 0, -64, 2, 378, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -300, 1, -107, -8, 344, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -287, -126, 344,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimSelected_joint15[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 823, 0, 1922, 6, 1242, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), 775, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1848, -108, 1147, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1289, -68, 581, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1436, 117, 698, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1997, 97, 1288, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2018, 4, 1342, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2025, 1, 1375, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 1978, -5, 1315, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1960, -31, 1278, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1790, -97, 1016, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 752, 0, 1376, -37, 634, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 60), 863, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1567, 49, 1058, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1675, 19, 1222, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1116, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1598, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1376, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1203, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1074, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 807, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1185, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1350, 52,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 822, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1192, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1544, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1820, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1238, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1383, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 856, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 834, -7, 1829, 2, 1405, 7,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimSelected_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimSelected_joint18[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1653, 7, -1601, -11, 1256, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1610, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 1370, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 976, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1232, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 971, -26,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1607, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1353, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 901, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1015, 33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1324, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1588, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1451, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1633, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1116, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1103, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1170, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 928, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1660, 33, -1653, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1788, 8, -1769, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1710, -19, -1664, 22, 1111, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1634, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1674, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1267, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1211, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1305, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1622, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1472, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1263, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1184, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1665, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1644, 4,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1441, 6, 1126, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1653, 3, -1430, 3, 1101, -8,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimSelected_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 926, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1023, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 668, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 278, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 434, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 988, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 842, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 485, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 656, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1025, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1032, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 898, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 910, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 947, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 779, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 676, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 893, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 935, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 927, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 958, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 951, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimSelected_joint22[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1782, 23, -1367, -12, 1305, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1680, 13, -1533, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1343, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1743, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1661, 5, -1531, 0, 1742, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 1404, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), -1340, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), -1371, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1362, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1463, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1534, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1793, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1323, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1427, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1351, -5, 1361, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1401, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1318, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1762, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1776, -48,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1367, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2035, -72, -1111, 22, 1505, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2211, 4, -1230, -57, 1822, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2007, 55, -1454, -24, 1836, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1721, 21, 1223, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1376, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1392, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1746, -7, 1281, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), -1667, 13, 1331, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1365, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1824, -25,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1632, 7, 1372, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1622, 3, -1865, -13, 1390, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimSelected_joint23[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, -4, 8, -7, -369, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 195, 9, 121, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -653, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -354, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -544, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -631, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -805, 14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 217, 3, 152, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -118, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -56, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -730, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -466, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -129, -2, -478, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -169, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -35, 1, -452, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -46, -27, -623, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -201, -10, -366, -3, -762, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -111, 13, -189, 38, -557, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -120, -1, -132, 9, -316, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -101, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -32, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -367, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -208, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -345, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -100, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -22, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -349, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -244, 38,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -15, 17, 8, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 503, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 557, 24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -106, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 535, 6, -15, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 592, 11, 542, 2, 14, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimSelected_joint25[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1024, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 618, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 264, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 434, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1059, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1011, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 645, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 470, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1037, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 988, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1010, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 907, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 941, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 950, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 680, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 695, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 926, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 980, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 937, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimSelected_joint26[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1784, -22, -1862, 5, 1342, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1658, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1846, 24, 1399, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1713, 22, 1776, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1721, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1777, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1632, -5, 1775, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1411, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 1420, -25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1727, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1829, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1414, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1494, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1527, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1718, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1825, -17, 1337, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2022, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1459, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1889, 7, 1662, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1648, -22, 1271, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1954, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1871, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1628, -1, 1235, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1666, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1430, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1897, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1837, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1789, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1702, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1674, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1687, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1927, -10, 1301, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1886, -14, 1308, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1626, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1755, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1964, -3, 1319, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1624, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1391, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1722, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1771, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1565, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1531, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1751, -6, -1519, 3, 1392, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimSelected_joint27[130] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -14, 0, -3, -1, -180, -354,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 115), -1, -5, -180, 0, -354, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -156, -22, -2, -7, -2, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -119, -27, -33, -2, 76, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -358, 10, -24, -10, 195, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -19, 8, -130, -2, 135, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -19, 0, -130, 1, 135, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -10, 1, -61, 8, 61, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -23, -61, -5, 61, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -202, -16, -101, 3, -208, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -308, 15, 7, -1, 29, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 10, 10, -122, 0, -290, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -14, 1, 0, 19, -3, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 62, -20, 518, -13, 648, 37,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -376, -247, 671,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -86, -177, -443,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
