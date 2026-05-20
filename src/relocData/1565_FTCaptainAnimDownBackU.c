/* AnimJoint data for relocData file 1565 (FTCaptainAnimDownBackU) */
/* 2800 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDownBackU_joint1[46];
extern u16 dFTCaptainAnimDownBackU_joint2[52];
extern u16 dFTCaptainAnimDownBackU_joint3[28];
extern u16 dFTCaptainAnimDownBackU_joint5[52];
extern u16 dFTCaptainAnimDownBackU_joint6[168];
extern u16 dFTCaptainAnimDownBackU_joint7[72];
extern u16 dFTCaptainAnimDownBackU_joint8[28];
extern u16 dFTCaptainAnimDownBackU_joint9[26];
extern u16 dFTCaptainAnimDownBackU_joint11[10];
extern u16 dFTCaptainAnimDownBackU_joint12[182];
extern u16 dFTCaptainAnimDownBackU_joint13[96];
extern u16 dFTCaptainAnimDownBackU_joint14[66];
extern u16 dFTCaptainAnimDownBackU_joint15[14];
extern u16 dFTCaptainAnimDownBackU_joint17[38];
extern u16 dFTCaptainAnimDownBackU_joint18[114];
extern u16 dFTCaptainAnimDownBackU_joint20[32];
extern u16 dFTCaptainAnimDownBackU_joint22[96];
extern u16 dFTCaptainAnimDownBackU_joint23[92];
extern u16 dFTCaptainAnimDownBackU_joint25[32];
extern u16 dFTCaptainAnimDownBackU_joint26[104];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimDownBackU_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimDownBackU_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 108, -240, -560,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 135, 136, -1628, -2043,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 170, -113, -2793, -1704,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -5, -170, -3758, -1286,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 4, -4080, -320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDownBackU_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 17, 420, -23,
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 187, 48,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 17, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -3216, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 480, 329,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, 185,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 17, -6, 827, 381, -23, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimDownBackU_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 0, 0, -17, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDownBackU_joint5[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -72, 0, -74,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 205, 5, 39, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 268, 22, 0, 23, -33, -32, 82, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 20), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -102, 0, 113, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 189, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimDownBackU_joint6[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -65, 143, -39, 480, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -41, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -263, -226, 466, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -489, -156, 484, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 367, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -203, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 191, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 241, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 310, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 236, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 581, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -166, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -691, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 992, 123, -371, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 827, -129, -619, 219, -528, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 733, -62, -253, 197, -651, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -597, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 552, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -223, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -149, 121,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -810, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 545, -23, 5, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 6, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 253, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -533, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -13, 5, 6, -524, 9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDownBackU_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -920, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -199, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1081, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -836, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -378, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -786, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDownBackU_joint8[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 406, 68, 69,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -446, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -924, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 62, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -781,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimDownBackU_joint9[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 60,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 402, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 0, 0,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDownBackU_joint11[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -357, 104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 36), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDownBackU_joint12[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2803, 42, 223, 86, -185, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2986, 157, 517, 177, 123, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3161, 49, 664, 72, 459, 175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2835, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 256, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 342, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 335, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2790, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2409, -292,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 202, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 211, 373, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 647, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2032, 50, -506, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2510, 259, -428, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2552, 23, 244, -181, -602, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -554, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2520, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 285, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 371, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 225, -212,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -408, 221,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2468, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2733, 138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -7, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 185, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 194, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2876, 118, -161, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 3064, 16, 574, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3083, 18, 148, -22, 590, 16,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDownBackU_joint13[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1185, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1018, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -277, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1067, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -857, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -799, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1153, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDownBackU_joint14[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 449, 44, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 830, 43, 88, -25, 18, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1010, -83, -287, -128, 191, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 412, -187, -555, 26, 398, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 71, -51, -156, 121, 124, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 156, 22, 49, 45, 48, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 226, 11, 161, 9, 202, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, 3, 144, 10, 304, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimDownBackU_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDownBackU_joint17[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, 62, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 383, -17, 51, -1, -171, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -202, -46, 27, -4, -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -313, 27, -19, -1, -165, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimDownBackU_joint18[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -765, 42, 9, -144, 88, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -367, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -532, 301, -67, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -120, 379, -383, -234,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -599, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 591, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -188, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1011, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -148, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 87, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 533, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 193, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 179, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -799, 69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 68, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -482, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 11, 70, 1, -472, 10,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimDownBackU_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 111, 269,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1243, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1255, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1234, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 472, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimDownBackU_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1568, 84, 1686, -35, 1926, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1462, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1396, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1983, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1656, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1555, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1400, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1626, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1447, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1429, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1446, 16, 1470, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1485, -2, 1677, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1617, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1648, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -4, 1650, 2, 1688, 10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimDownBackU_joint23[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1414, -25, 1695, 21, -2065, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1254, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2529, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1540, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1427, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1608, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1170, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1378, 11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2581, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1984, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1590, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1416, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1389, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1765, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1929, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1685, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1441, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1495, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1768, 3, 1498, 3, -1685, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDownBackU_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 964, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1304, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 804, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 557, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimDownBackU_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 244, -25, 196, -40, 260, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -180, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -502, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -82, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 63, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 188, 17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 28, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, 15, -519, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -390, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 362, 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 175, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 150, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -287, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 12, 367, 5, -278, 8,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
