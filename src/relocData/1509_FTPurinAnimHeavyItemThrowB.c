/* AnimJoint data for relocData file 1509 (FTPurinAnimHeavyItemThrowB) */
/* 3872 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimHeavyItemThrowB_joint1[70];
extern u16 dFTPurinAnimHeavyItemThrowB_joint2[38];
extern u16 dFTPurinAnimHeavyItemThrowB_joint3[66];
extern u16 dFTPurinAnimHeavyItemThrowB_joint5[100];
extern u16 dFTPurinAnimHeavyItemThrowB_joint6[210];
extern u16 dFTPurinAnimHeavyItemThrowB_joint7[48];
extern u16 dFTPurinAnimHeavyItemThrowB_joint9[84];
extern u16 dFTPurinAnimHeavyItemThrowB_joint10[204];
extern u16 dFTPurinAnimHeavyItemThrowB_joint11[38];
extern u16 dFTPurinAnimHeavyItemThrowB_joint13[40];
extern u16 dFTPurinAnimHeavyItemThrowB_joint14[216];
extern u16 dFTPurinAnimHeavyItemThrowB_joint16[78];
extern u16 dFTPurinAnimHeavyItemThrowB_joint18[200];
extern u16 dFTPurinAnimHeavyItemThrowB_joint19[160];
extern u16 dFTPurinAnimHeavyItemThrowB_joint21[54];
extern u16 dFTPurinAnimHeavyItemThrowB_joint22[182];
extern u16 dFTPurinAnimHeavyItemThrowB_joint23[102];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTPurinAnimHeavyItemThrowB_joints[] = {
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPurinAnimHeavyItemThrowB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimHeavyItemThrowB_joint1[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY), 0, 0, 2323,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ), 360, -2, 4931, -5, 4943, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 630, 0, 4096, -1, 4096, -2, 4096, -1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 600, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 2, 4096, 2, 4096, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 660, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 590, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimHeavyItemThrowB_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -268, 0, 0, -312,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -600, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -600, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 600, 640,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), 0, 0, 600, -240,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -46, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimHeavyItemThrowB_joint3[66] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 0, 312, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, -20, 4096, 40, 4096, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -357, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 536, 0, 312, -1, 4096, 20, 4096, -40, 4096, 20,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 312, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimHeavyItemThrowB_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 268, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 16,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 35), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 15,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -120, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 10), 446, 55, -89, -20, 357, 0, -120, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 580, 0, -268, 0, 0, -95,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -287,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), -160, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), 268, -82, -178, 38, 31, 260,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), -312, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -76, -169, 99, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimHeavyItemThrowB_joint6[210] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -377, 1, -1330, 9, -109, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -72, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -530, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1262, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1266, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1213, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 33, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -548, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -517, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -444, 67, -44, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -363, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -154, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -360, 4, -1203, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -314, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1252, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -257, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -277, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -246, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1236, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1098, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -296, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, 68, -1094, -22, -396, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -99, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -209, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1142, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1217, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -109, -41, -1202, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, -51, -1193, -2, 181, 330,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1187, 41, 649, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -264, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -355, -166, -1125, 16, 815, 222,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1218, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -596, -332, 1094, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1019, -313, 1415, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1222, -202, -1241, -22, 1564, 148,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimHeavyItemThrowB_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimHeavyItemThrowB_joint9[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, -120, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -1, 0, 0, 0, -268, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 10), 446, 50, 89, 20, -357, 0, -120, -110,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 580, 0, 268, 0, 0, 95,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 270,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 151, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), 268, -82, 178, -38, -60, 343,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 312, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -96, 0, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimHeavyItemThrowB_joint10[204] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, 1, 1236, 5, -206, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -87, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 473, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1258, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1240, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1232, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 10, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 501, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 497, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 428, -64, -62, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 351, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -130, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -149, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 352, -2, 1239, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 237, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1116, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -307, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 241, 9, -305, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 269, -31, -267, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1089, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1077, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 227, -55, -318, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 130, 1, -434, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1090, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1204, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 161, 51, -376, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, 88, 1167, -21, -163, 287,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1137, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 338, 67, 199, 292,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 517, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 599, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1039, -27, 857, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 777, 200, 1082, 80, 1238, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 918, 102, 1200, 79, 1451, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 981, 63, 1241, 40, 1545, 94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimHeavyItemThrowB_joint11[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimHeavyItemThrowB_joint13[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, 0, 0, -1072, 0, 204, 0, -120, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 91), -804, 0, 0, 0, -1072, 0, 204, 0, -120, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 56,
	ftAnimBlock(0, 35),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -501, -271, -1055, 106, -21, 16,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimHeavyItemThrowB_joint14[216] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -4, -303, -11, 233, -12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -68, 38, 1, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -384, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -425, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -390, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -17, 45, -149, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -574, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -69, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -625, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -401, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -340, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -28, 2, -401, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 54, -328, 117, -85, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 40, -165, 132, -186, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -4, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, -33, -100, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -6, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 7, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -63, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -73, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 48, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -85, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -209, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, -26, 173, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -19, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 234, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -302, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, -7, 242, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, -4, 255, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 0, -308, -6, 255, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimHeavyItemThrowB_joint16[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 541, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 611, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 64, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimHeavyItemThrowB_joint18[200] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1943, -8, 1729, 2, -1705, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1951, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1778, 20, -1656, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1798, 12, -1599, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1434, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1742, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1890, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1683, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1415, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1431, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1747, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1746, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1424, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1434, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1712, -52, 1734, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1569, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1789, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1886, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1904, 55, 1541, 44, -1497, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1776, 120, 1657, 66, -1948, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1663, 77, 1674, 1, -2076, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1648, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1621, 33, -2099, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1663, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2105, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2084, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1647, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1750, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2076, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1976, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1686, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1929, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1795, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1708, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1698, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1688, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1756, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1937, -7, 1758, 2, -1692, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimHeavyItemThrowB_joint19[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, 0, 303, -6, 233, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 45, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 373, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 137, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 45, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 15, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 364, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 38, 46, 17, 370, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 176, 28, 585, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 228, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 200, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, 15, 626, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 651, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 210, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 206, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 622, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 209, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 273, 18,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 202, -7, 599, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 76, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 411, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, 15, 338, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -19, 304, 8, 280, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -10, 308, 4, 259, -20,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimHeavyItemThrowB_joint21[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimHeavyItemThrowB_joint22[182] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1272, -4, -1729, 0, 1511, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1682, 4, 1295, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1418, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1454, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1525, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1680, 1, 1302, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1680, 7, 1308, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1525, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1443, 98, -1665, 1, 1305, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -5, -1677, -53, 1428, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1455, -132, -1772, -60, 1793, 328,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1784, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1592, -81, 2084, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1617, -14, 2179, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2227, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1622, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1617, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1780, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1795, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2232, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2179, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1596, 28, 2150, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1499, 77, 1984, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1808, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1820, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1406, 88, 1834, -150,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1286, 20, 1576, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1801, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1761, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1281, 2, 1520, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1280, 1, 1516, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, 1, -1758, 2, 1527, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPurinAnimHeavyItemThrowB_joint23[102] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 1, -23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 25), 122,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 15,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 720, -1, 0, -2,
	ftAnimSetValBlock(FT_ANIM_ROTX), -804,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 712,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -937, 452,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -889,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -982,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -32,
	ftAnimSetValT(FT_ANIM_TRAX, 5), 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1081, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -559, 53,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 724, 2669,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 900, 144, 962, 2885,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), -120,
	ftAnimSetValT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1914,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), 3930, 1163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -7, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 1219, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 300, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_TRAX, 10), 0,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 949,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 4200, 295,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
