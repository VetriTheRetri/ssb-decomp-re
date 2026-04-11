/* AnimJoint data for relocData file 608 (FTMarioAnimJab3) */
/* 2992 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimJab3_joint1[28];
extern u16 dFTMarioAnimJab3_joint2[18];
extern u16 dFTMarioAnimJab3_joint4[54];
extern u16 dFTMarioAnimJab3_joint5[154];
extern u16 dFTMarioAnimJab3_joint6[64];
extern u16 dFTMarioAnimJab3_joint7[14];
extern u16 dFTMarioAnimJab3_joint8[22];
extern u16 dFTMarioAnimJab3_joint10[10];
extern u16 dFTMarioAnimJab3_joint11[164];
extern u16 dFTMarioAnimJab3_joint12[72];
extern u16 dFTMarioAnimJab3_joint13[20];
extern u16 dFTMarioAnimJab3_joint15[12];
extern u16 dFTMarioAnimJab3_joint16[140];
extern u16 dFTMarioAnimJab3_joint18[68];
extern u16 dFTMarioAnimJab3_joint20[138];
extern u16 dFTMarioAnimJab3_joint21[170];
extern u16 dFTMarioAnimJab3_joint23[300];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimJab3_joints[] = {
	(u32)dFTMarioAnimJab3_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimJab3_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimJab3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimJab3_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimJab3_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimJab3_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimJab3_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimJab3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimJab3_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimJab3_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimJab3_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimJab3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimJab3_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimJab3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimJab3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimJab3_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimJab3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0290, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimJab3_joint1[28] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 534, 273, 31, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 223, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 18), 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1113, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 14), 540, -208,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimJab3_joint2[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 3, -790, 35, -95, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimJab3_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 257, -102, 321, -62, 110, -26,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -266, 0, 0, -7, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 245, 47, 178, 13, 77, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 14), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 539, -4, 222, 10, 95, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimJab3_joint5[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 542, -361, -176, 2, -569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 522, 287, -537, -22, -566, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 555, -57, -406, 222, -711, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 406, -111, -91, 253, -678, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, -34, 100, 104, -721, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 364, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -914, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 109, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 32, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 407, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 543, -54,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -123, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -478, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 471, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 234, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -147, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 246, -3, -180, -80, -481, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 115, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -307, -106, -361, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, -41, -255, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -245, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -390, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -312, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 10, -300, 12, -272, -27,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimJab3_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -638, 638,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -246, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimJab3_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 143, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimJab3_joint8[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 185, 7, 7, -33, 164, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 123, 0, -412, 0, 105, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimJab3_joint10[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	_FT_ANIM_CMD(11, 0, 1), 18,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimJab3_joint11[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 247, 277, 197, -665, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, 210, 475, 63, -249, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -108, 404, -171, 328, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -149, -158, 133, -203, 581, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 38, -3, -72, 684, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -77, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 752, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -11, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 201, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -102, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 405, -62,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 12, 130, 234, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 419, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 186, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 373, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 477, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 492, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 227, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 510, 79, 449, -34, 207, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 652, 117, 349, -78, 322, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 745, 59, 293, -5, 370, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 532, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 707, -112, 316, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 546, -132, 166, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, -103, 551, 19, 65, -100,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimJab3_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, -128,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -857, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimJab3_joint13[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 143, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY), 1, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 442, 99,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 625, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimJab3_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	_FT_ANIM_CMD(11, 0, 1), 34,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimJab3_joint16[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -172, -46, -215, 1, 47, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -218, -56, -214, 26, -17, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -285, -26, -163, 53, 50, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -270, 43, -106, -6, 228, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, 45, -176, -46, 254, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -183, 21, -201, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 365, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, 33, -233, -20, 252, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -238, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -90, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -58, -47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -270, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -271, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -36, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, 3, -237, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -236, 8, 20, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -124, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -11, -230, 5, 45, 24,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimJab3_joint18[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 463, 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 909, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1076, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 544, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimJab3_joint20[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1791, 113, 1593, -194, -1831, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1677, 186, 1399, -202, -1774, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1417, 237, 1188, -142, -1488, 346,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1105, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1202, 95, -1081, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1226, -70, -1100, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1343, -86, 1108, 1, -1239, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1124, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1400, -36, -1319, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1422, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1480, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1574, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1998, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1437, -69, 1148, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1679, -61, 1364, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1685, -4, 1386, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1550, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1725, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1750, -24, -1972, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1814, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1820, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1574, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1616, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1780, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, 0, 1619, 2, -1764, 15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimJab3_joint21[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 154, 85, 202, 4, 51, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, -116, 207, -154, -336, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, -159, -107, -99, -776, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, -10, 8, 56, -678, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -100, -21, 6, 85, -1234, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, 18, 178, 77, -992, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 73, 160, -24, -1027, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1120, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 47, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 137, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 294, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1076, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 48, -911, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 275, 39, 143, 18, -738, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, 90, 82, -65, -367, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, 75, 13, 12, -166, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 579, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 82, -107, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 208, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, 0, 204, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 500, -78, 209, 37, 159, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 205, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, 10, 115, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 190, -6, 34, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -5, 187, -3, 35, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimJab3_joint23[300] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 422, 434,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -42,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6144, 10922, 6144, 5461, 6144, 5461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 772, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, -477, 20480, -819, 12288, -819, 12288, -819,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 491, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 450, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -11,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06C8, 0xFF00, 0x0680, 0x000B, 0x0574, 0x001F, 0x200F, 0x0001, 0x05C7, 0xFFEC, 0x068B, 0xFFD0, 0x0593, 0x010A, 0x200F, 0x0001, 0x069F, 0x005F, 0x061E, 0xFFC3, 0x0789, 0x0085, 0x2803, 0x0002, 0x063B, 0xFFD6, 0x200D, 0x0001, 0x0610, 0xFFB4, 0x069E, 0xFFDA, 0x200D, 0x0001, 0x0586, 0x000A, 0x073D, 0xFFB6, 0x200F, 0x0001, 0x0632, 0x0005, 0x0625, 0x006F, 0x0609, 0xFF78, 0x2803, 0x0003, 0x062C, 0xFFD6, 0x200D, 0x0001, 0x0666, 0x004A, 0x062B, 0x0032, 0x2805, 0x0003, 0x075B, 0x0024, 0x2009, 0x0002, 0x06D1, 0x0065, 0x200B, 0x0001, 0x05F4, 0xFFDE, 0x073A, 0x0044, 0x200F, 0x0001, 0x05E7, 0x003D, 0x0760, 0xFFFC, 0x075A, 0x000B, 0x200F, 0x0001, 0x066F, 0x002A, 0x0752, 0x0011, 0x0750, 0xFFC5, 0x200F, 0x0001, 0x063D, 0xFFF5, 0x0783, 0x0052, 0x06E3, 0xFFB2, 0x200F, 0x0001, 0x0659, 0x003D, 0x07F8, 0x005A, 0x06B2, 0xFFA1, 0x200F, 0x0001, 0x06B8, 0x003F, 0x0837, 0x0015, 0x0625, 0xFF39, 0x200F, 0x0001, 0x06D9, 0xFFFF, 0x0822, 0xFFBE, 0x0522, 0xFF58, 0x2809, 0x0002, 0x0503, 0x004C, 0x2007, 0x0001, 0x06B5, 0xFFF4, 0x07B2, 0xFF89, 0x2007, 0x0001, 0x06C0, 0x001D, 0x0734, 0xFFA5, 0x200F, 0x0001, 0x06F0, 0x0014, 0x06FB, 0xFFDC, 0x056C, 0x0018, 0x2805, 0x0002, 0x06D8, 0xFFF0, 0x200B, 0x0001, 0x06E9, 0xFFF7, 0x0533, 0xFFD9, 0x2803, 0x0006, 0x06A4, 0xFFFC, 0x2009, 0x0001, 0x051D, 0xFFF5, 0x2809, 0x0005, 0x056B, 0x000D, 0x2005, 0x0001, 0x06C8, 0xFFF2, 0x2005, 0x0004, 0x06A7, 0xFFFE, 0x200F, 0x0001, 0x06A1, 0xFFFE, 0x06A6, 0xFFFF, 0x0573, 0x0008, 0x0000, 0x0000, 0x0000,
};
