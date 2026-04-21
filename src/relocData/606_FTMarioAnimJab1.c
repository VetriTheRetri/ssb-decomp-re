/* AnimJoint data for relocData file 606 (FTMarioAnimJab1) */
/* 2080 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimJab1_joint1[32];
extern u16 dFTMarioAnimJab1_joint2[8];
extern u16 dFTMarioAnimJab1_joint4[42];
extern u16 dFTMarioAnimJab1_joint5[134];
extern u16 dFTMarioAnimJab1_joint6[82];
extern u16 dFTMarioAnimJab1_joint7[14];
extern u16 dFTMarioAnimJab1_joint8[34];
extern u16 dFTMarioAnimJab1_joint10[8];
extern u16 dFTMarioAnimJab1_joint11[140];
extern u16 dFTMarioAnimJab1_joint12[72];
extern u16 dFTMarioAnimJab1_joint13[8];
extern u16 dFTMarioAnimJab1_joint15[10];
extern u16 dFTMarioAnimJab1_joint16[70];
extern u16 dFTMarioAnimJab1_joint18[40];
extern u16 dFTMarioAnimJab1_joint20[70];
extern u16 dFTMarioAnimJab1_joint21[92];
extern u16 dFTMarioAnimJab1_joint23[46];
extern u16 dFTMarioAnimJab1_joint24[90];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimJab1_joints[] = {
	(u32)dFTMarioAnimJab1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimJab1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimJab1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimJab1_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimJab1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimJab1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimJab1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimJab1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimJab1_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimJab1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimJab1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimJab1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimJab1_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimJab1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimJab1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimJab1_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimJab1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimJab1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimJab1_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 223, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 464, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -96, 2009,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 502, 63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 537, 38, 22, -251,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimJab1_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimJab1_joint4[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 84, 495, -11, 231, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, 60, 234, -149, -205, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 385, -11, -102, 0, -566, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 217, -13, 235, 27, 72, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimJab1_joint5[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -65, -300, -869, -272, -471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 82, -1169, -12, -744, -504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, 132, -324, 454, -1281, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 332, -73, -261, 110, -1351, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, -88, -104, 122, -996, 291,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 76, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 155, 10, -769, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 171, 13, -731, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 108, -68, -630, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 129, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 262, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, -68, -598, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, -4, -472, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 2, 218, -92, -172, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, -27, 77, -168, -79, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 9, -118, -165, -48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -300, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, 59, -79, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 78, 69, -190, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 54, -300, 0, -272, -82,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimJab1_joint6[82] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 91, 4915, 6143, 4915, 3891, 4915, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, -4, 10240, -234, 7987, -234, 7987, -234,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -9, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -325, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 142,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimJab1_joint7[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -625, 0, 0, 143, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimJab1_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, -88, -271, 142, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -17, 281, 18, 179, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 190, 11, 11, -17, 179, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimJab1_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimJab1_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, -125, 1056, -1, -1542, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1290, 93, 1055, 56, -1644, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -978, 52, 1169, 27, -1268, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1186, 17, 1111, 44, -1400, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -943, 211, 1258, 100, -1076, 246,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1022, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -763, 111, 1312, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -719, -6, 1350, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -953, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1288, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1215, -30, -1119, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1096, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -938, 46, 1227, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -803, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1327, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1384, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1253, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -776, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -894, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1295, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1098, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1022, -114, -1389, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1124, -71, 1064, -21, -1500, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, -40, 1056, -7, -1542, -42,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimJab1_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1054, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -844, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimJab1_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimJab1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimJab1_joint16[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 195, -230, -47, 45, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -40, -277, 13, -52, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -216, -142, -203, 40, 23, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -193, 2, 37, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -225, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -229, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -137, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 0, 40, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 37, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -133, 1, 43, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -1, -230, 0, 45, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimJab1_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 465, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimJab1_joint20[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -114, -11, -101, -156, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -326, 38, -113, 31, -78, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 97, 51, 84, -455, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 3, 55, 2, -459, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 1, 57, 1, -457, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -207, -7, -7, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -207, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -2, -11, -1, -156, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, 0, -156, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimJab1_joint21[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 114, 187, 8, 35, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, -61, 195, 127, -71, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -115, 441, 122, 525, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, 0, 441, -1, 531, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -2, 438, -5, 520, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 83, 13, 306, -34, 382, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, 0, 269, -28, 354, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 92, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 188, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 37, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 195, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 4, 187, -1, 35, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimJab1_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 212,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 436, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimJab1_joint24[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -121, -93, -106, -212, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 214, -200, 172, -292, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 518, 275, 251, 226, 232, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 519, -3, 251, 0, 238, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 511, -11, 250, -1, 226, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 279, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 63, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 241, -40, -123, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 93, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -44, -179, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, -13, -212, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -4, -93, -4, -212, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
