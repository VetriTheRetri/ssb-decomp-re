/* AnimJoint data for relocData file 760 (FTFoxAnimFTiltMidLow) */
/* 3504 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFTiltMidLow_joint1[66];
extern u16 dFTFoxAnimFTiltMidLow_joint2[42];
extern u16 dFTFoxAnimFTiltMidLow_joint4[46];
extern u16 dFTFoxAnimFTiltMidLow_joint5[176];
extern u16 dFTFoxAnimFTiltMidLow_joint6[80];
extern u16 dFTFoxAnimFTiltMidLow_joint7[10];
extern u16 dFTFoxAnimFTiltMidLow_joint8[68];
extern u16 dFTFoxAnimFTiltMidLow_joint10[10];
extern u16 dFTFoxAnimFTiltMidLow_joint11[164];
extern u16 dFTFoxAnimFTiltMidLow_joint12[78];
extern u16 dFTFoxAnimFTiltMidLow_joint13[38];
extern u16 dFTFoxAnimFTiltMidLow_joint15[10];
extern u16 dFTFoxAnimFTiltMidLow_joint16[164];
extern u16 dFTFoxAnimFTiltMidLow_joint18[66];
extern u16 dFTFoxAnimFTiltMidLow_joint20[128];
extern u16 dFTFoxAnimFTiltMidLow_joint21[198];
extern u16 dFTFoxAnimFTiltMidLow_joint23[72];
extern u16 dFTFoxAnimFTiltMidLow_joint24[162];
extern u16 dFTFoxAnimFTiltMidLow_joint25[122];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFTiltMidLow_joints[] = {
	(u32)dFTFoxAnimFTiltMidLow_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFTiltMidLow_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFTiltMidLow_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFTiltMidLow_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFTiltMidLow_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFTiltMidLow_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFTiltMidLow_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFTiltMidLow_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFTiltMidLow_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFTiltMidLow_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFTiltMidLow_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFTiltMidLow_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFTiltMidLow_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFTiltMidLow_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFTiltMidLow_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFTiltMidLow_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFTiltMidLow_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFTiltMidLow_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFTiltMidLow_joint25, /* [24] joint 25 */
	0xFFFF034D, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimFTiltMidLow_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -97, 600, -625, -360, -678,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 600, 720, -360, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 960, 1920, 120, 3840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1080, 137, 600, 548,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1080, -39, 600, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 26, 1020, -288, 240, -331,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 9), 48, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 720, -95,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 912,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimFTiltMidLow_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -446, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -446, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -804, 402, -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -804, 402, -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -135, 44, 17, -49, -258, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimFTiltMidLow_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -55, -268, 94, 178, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, -35, 536, -89, 0, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -11, -714, -156, -89, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 14, -714, 41, -89, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFTiltMidLow_joint5[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 295, -1442, 373, 1867, -708,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1423, -182, -1069, 10, 1158, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2083, -297, -1421, -318, 1998, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2019, 2, -1706, -40, 2093, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2078, -225, -1503, 255, 1958, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2470, -300, -1194, 670, 2867, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2678, -98, -161, 470, 2956, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2650, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2917, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -252, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -262, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -161, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2634, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2641, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2678, -152, 2956, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2946, -461, -417, -69, 3328, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3600, -467, -301, 51, 3967, 305,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4008, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -315, -11, 3939, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -323, 136, 3983, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3542, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, 198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -87, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3997, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3453, 105,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -154, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3525, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3488, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3362, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3326, 35, -165, -11, 3475, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFTiltMidLow_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 141,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -477, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -555, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimFTiltMidLow_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimFTiltMidLow_joint8[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 5, 446, -56, -357, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, 111, -89, -78, -178, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 268, 312, 134, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, 55, 178, 33, -178, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 491, 268, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 536, -32, 178, 0, -178, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 194, -43, 271, -2, 71, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimFTiltMidLow_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFTiltMidLow_joint11[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 428, 271, 163, 336, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 425, 435, 594, 223, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 983, 100, 1461, 557, 734, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 762, -94, 1550, 84, 697, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 793, -263, 1631, -758, 753, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 757, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 235, -94, 32, -767,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 605, 186, 96, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 586, -3, 378, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 828, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 599, 12, 350, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 538, -88, 137, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 404, -290, 290, 135, 646, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -374, 407, -16, 65, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -345, -241, 256, -106, -356, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -725, -137, 187, 138, -695, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -800, 11, 470, 207, -751, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 448, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -212, 199, -115, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -13, 154, 115, 194,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 129, 4, 343, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 359, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 296, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 3, 271, -24, 336, -6,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFTiltMidLow_joint12[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -210,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -682, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -610, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -700, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -635, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 40,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFTiltMidLow_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 268, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 536,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -134, 268, 402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -134, 268, 402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimFTiltMidLow_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFTiltMidLow_joint16[164] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 242, -1385, 302, -1635, -791,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1445, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1082, 157, -2426, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1071, 4, -2609, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1082, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2620, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2426, 767,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1009, 162, -1161, 97, -1085, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1770, 359, -887, 143, -1467, -165,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1728, -40, -873, 11, -1417, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1725, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1142, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1373, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1467, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1770, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1395, -32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1387, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1131, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1412, 13, -1212, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1931, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1252, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1259, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1261, -34,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1897, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1670, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1305, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1217, -24, -1356, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -14, -1385, -28, -1635, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimFTiltMidLow_joint18[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 602,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 586, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -80,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimFTiltMidLow_joint20[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 6, 1482, 87, 1552, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1576, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1661, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1400, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1487, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1397, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1508, -88, 1349, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1460, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1422, 55, 1635, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1486, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1712, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1465, 6, 1695, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1566, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1651, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1530, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1452, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1580, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1252, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1677, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1652, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1510, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1478, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 2, 1482, 4, 1552, 41,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFTiltMidLow_joint21[198] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -620, 1470, -214, -1473, -770,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1873, -336, 1256, -85, -2244, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1925, -27, 1300, 25, -2330, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1873, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1307, -21, -2340, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1256, 149, -2244, 593,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5324, 4300, 4300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1467, 201, 1605, 91, -1154, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1470, -13, 1439, -95, -1473, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1598, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1416, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 5324, 4300, 4300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1493, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1446, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1641, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1701, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1427, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1323, -48,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1672, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1785, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1466, -60, -1811, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1887, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1926, 210,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1281, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1349, 112,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1735, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1444, 201, -1659, 205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1529, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1333, 68, 1470, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1286, 21, 1425, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1263, 16, 1452, 22, -1495, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 10, 1470, 18, -1473, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTFoxAnimFTiltMidLow_joint23[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 582,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1135, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 661, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 405, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimFTiltMidLow_joint24[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1592, 288, -1505, -3, 1381, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1132, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1509, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1303, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1306, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1303, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1135, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, -219, 1177, 607,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1527, -225, -1949, -34, 2351, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1754, -103, -1579, 186, 1710, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, 9, -1576, 4, 1836, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1896, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1895, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1571, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1608, -26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1849, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1975, -40, 1633, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1755, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, 7, 1616, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1367, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1593, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1606, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1627, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1124, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1652, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1517, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1561, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1572, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1338, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, -19, -1505, 11, 1381, 43,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFTiltMidLow_joint25[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -357, -134, 178, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -536, 67, 0, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -357, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -89, 14, 357, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -89, -17, 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -268, -16, 536, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -268, 29, 357, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 219,
	ftAnimEnd(),
	0x4006, 0xFF4E, 0xFF86, 0x48E8, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2007, 0x0001, 0x010C, 0x0059, 0x0165, 0x001E, 0x2007, 0x0003, 0x00B2, 0xFF83, 0x0000, 0xFF83, 0x2007, 0x0002, 0xFE9B, 0xFFD4, 0xFEF4, 0xFF7A, 0x2007, 0x0002, 0x0000, 0x003B, 0xFDE8, 0x0086, 0x2007, 0x0004, 0x0000, 0x0011, 0x0218, 0x0059, 0x2007, 0x0006, 0x00B2, 0x0010, 0x0165, 0xFFF0, 0x2007, 0x0005, 0x00B2, 0xFFD9, 0x0165, 0xFFCB, 0x3807, 0x0004, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
