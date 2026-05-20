/* AnimJoint data for relocData file 375 (FTFoxAnimDollFall) */
/* 3904 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDollFall_joint1[46];
extern u16 dFTFoxAnimDollFall_joint2[52];
extern u16 dFTFoxAnimDollFall_joint3[70];
extern u16 dFTFoxAnimDollFall_joint5[68];
extern u16 dFTFoxAnimDollFall_joint6[250];
extern u16 dFTFoxAnimDollFall_joint7[110];
extern u16 dFTFoxAnimDollFall_joint8[10];
extern u16 dFTFoxAnimDollFall_joint9[92];
extern u16 dFTFoxAnimDollFall_joint11[10];
extern u16 dFTFoxAnimDollFall_joint12[304];
extern u16 dFTFoxAnimDollFall_joint13[110];
extern u16 dFTFoxAnimDollFall_joint16[10];
extern u16 dFTFoxAnimDollFall_joint17[170];
extern u16 dFTFoxAnimDollFall_joint19[80];
extern u16 dFTFoxAnimDollFall_joint21[66];
extern u16 dFTFoxAnimDollFall_joint22[202];
extern u16 dFTFoxAnimDollFall_joint24[70];
extern u16 dFTFoxAnimDollFall_joint25[108];
extern u16 dFTFoxAnimDollFall_joint26[70];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDollFall_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDollFall_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDollFall_joint26, /* [25] joint 26 */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimDollFall_pad[1] = { 0 };

/* Joint 1 */
u16 dFTFoxAnimDollFall_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 205, -106, -698, 334, -168, 82, 204, 0, 7821, 308, -345, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -2, 0, 8, 0, 2, 204, -81, 5692, 2, -345, 138,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, -20, 0, -4985, 0, 35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDollFall_joint2[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 718, 0, 489, 7, -2, -1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 768, 2, -195, -36, 3, 0, 2034, -313,
	ftAnimSetValRateT(FT_ANIM_TRAY, 19), 1202, -289,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 768, -195, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 61), 768, -195, 3,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2530,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 2696, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 1117, -2609,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 30), 1117,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimDollFall_joint3[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -151, 39, 839,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 307, 16,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -151, 5, 39, -2, 839, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 307, -37, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -23, 135, 0, -43, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 140, 0, 813, 0, -116, 4, 24, -1, 852, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 231, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 231, 140, 813, -116, 24, 852,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDollFall_joint5[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 440, -4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -49, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, 135, 0, -51, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 492, -18, -204, -13, 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -325, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -204, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -204, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -325, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -130, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), -130,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDollFall_joint6[250] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 20, -23, -5, -1413, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1695, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 784, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -181, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -286, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 90, -1929, -191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2458, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 873, 73, -106, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1081, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -51, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2492, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2650, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1089, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1100, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, -185, -2685, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1275, 614, -423, 76, -3020, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2329, 981, 100, -51, -3711, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3238, 677, -526, -184, -3820, -327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3724, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, 181, -4365, -322,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -236, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4484, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3729, -3, -4508, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 3682, 127, -4704, -189,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -334, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -336, 144,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3841, 148, -4924, -205,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 4115, 0, -5343, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -139, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4114, -1, -134, 4, -5342, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3865, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -174, -29, -5201, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -134, -5105, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4544, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -443, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3721, -99, -506, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -473, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 3765,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4539, -24,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), -4727,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -473, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -473, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3765, 0, -4727, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 3765, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), -4727,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -473, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3765, -4727,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDollFall_joint7[110] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 188,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -722,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1444, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, 613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 437,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -444, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -458, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 142,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -408, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -384, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimDollFall_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimDollFall_joint9[92] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 105), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 105), -244, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 95,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -38, 12, 0, 0, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 17, -5, -6, -28, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 31, -13, -27, -1, -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -403, -18, -27, 13, -25, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -474, -8, 332, 12, -446, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -42, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -565, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 291, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -474, 40, 332, 23, -446, 28,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), -474,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 332, -446,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimDollFall_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDollFall_joint12[304] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -693, 10, 29, 181, -1244, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 701, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -517, 108, -1288, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -415, -83, -1375, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -684, -192, 657, -194, -1836, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -800, -70, 312, -180, -2093, -182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2379, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -873, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 295, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 96, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2413, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2598, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -879, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -923, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 418, 456, -2612, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -885, 137, 993, -7, -2049, 671,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, 95, 403, -497, -1269, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -693, -22, -2, -201, -1317, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -604, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 4, -1320, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1467, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 183, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 322, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 491, -90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1512, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2105, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -621, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -814, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, -130, -2134, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 236, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2160, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -817, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -818, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 345, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 418, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 915, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -795, -52, -2089, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -923, -101, -2107, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -997, -156, 987, 11, -1964, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1484, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 854, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1958, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2170, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2254, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1338, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1206, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1251, -22, -2376, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2376, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 854, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 854, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2376, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2376, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1251, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 854, 0, -2376, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1251,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDollFall_joint13[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -249,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -738, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 289,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1292, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 340,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -445, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -570, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -454, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -174, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -137, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimDollFall_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimDollFall_joint17[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 324, -16, 46, 34, -686, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 269, -12, -89, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -367, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 212, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 22, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 254, -21, -89, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -33, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -196, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, -189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -236, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -392, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -146, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -241, -45, -113, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -69, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -374, 68,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -439, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -806, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -281, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -67, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -121, -41, -854, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -863, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -439, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -439, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -151, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -863, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -151, 0, -439, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -863,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTFoxAnimDollFall_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 230, 129,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 641, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 331, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 333, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 465, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 250, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 471, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 782, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 731, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 729, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDollFall_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -116, 14, 0, 1, 349, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 11, 0, 350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -69, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -139, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -547, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -435, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -18, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -68, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, 0, 11, 0, 350, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimDollFall_joint22[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 214, -25, 99, 25, -616, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 287, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 353, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -48, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 49, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 205, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 412, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 309, -198,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -547, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 354, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 244, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 70, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 47, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -244, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 245, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 300, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 232, 60,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 388, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 292, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 439, -37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 255, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 268, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 96, -77,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 301, 42,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 500,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 392, -54,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 245,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -8, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 500, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 500, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -8, 0,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 245, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 500, 0, -8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 245,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimDollFall_joint24[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 226, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 472, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 125, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 72, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 764, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 244, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimDollFall_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -338, -6, -215, -1, 591, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 79), -229,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 79), 606, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -585, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -655, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -769, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -541, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -250, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -376, -519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1290, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -937, 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -465, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -338, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -461, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -531, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1421, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1465, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1530, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1497, 722,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, 712,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 76, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 97, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, 0, -229, 0, 606, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDollFall_joint26[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -296, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -296, -49, 0, 24, 0, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -934, -146, 319, 51, -264, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1028, 30, 259, -14, -125, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -423, 21, 75, -5, 265, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -499, -55, 128, 12, 192, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1252, -25, 259, 4, -470, -22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -1252, 259, -470,
	ftAnimEnd(),
};
