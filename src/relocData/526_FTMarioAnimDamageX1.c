/* AnimJoint data for relocData file 526 (FTMarioAnimDamageX1) */
/* 2048 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamageX1_joint1[74];
extern u16 dFTMarioAnimDamageX1_joint2[48];
extern u16 dFTMarioAnimDamageX1_joint4[54];
extern u16 dFTMarioAnimDamageX1_joint5[74];
extern u16 dFTMarioAnimDamageX1_joint6[44];
extern u16 dFTMarioAnimDamageX1_joint7[8];
extern u16 dFTMarioAnimDamageX1_joint8[60];
extern u16 dFTMarioAnimDamageX1_joint10[10];
extern u16 dFTMarioAnimDamageX1_joint11[92];
extern u16 dFTMarioAnimDamageX1_joint12[42];
extern u16 dFTMarioAnimDamageX1_joint13[54];
extern u16 dFTMarioAnimDamageX1_joint15[20];
extern u16 dFTMarioAnimDamageX1_joint16[78];
extern u16 dFTMarioAnimDamageX1_joint18[36];
extern u16 dFTMarioAnimDamageX1_joint20[88];
extern u16 dFTMarioAnimDamageX1_joint21[80];
extern u16 dFTMarioAnimDamageX1_joint23[114];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamageX1_joints[] = {
	(u32)dFTMarioAnimDamageX1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamageX1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamageX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamageX1_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamageX1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamageX1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamageX1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamageX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamageX1_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamageX1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamageX1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamageX1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamageX1_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamageX1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamageX1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamageX1_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamageX1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01D9, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimDamageX1_joint1[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 223, 540,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 2, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, -335, -16, -64, 453, -276, -184, -1619,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -446, -22, 471, 18, -404, -220,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -16,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 471, -47, -404, 228,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -446, 223, 423, 48, -176, 1517,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 223,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -16, 64, 483, 468, -25, 707,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 2, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 540,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDamageX1_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -790, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -71, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -590, -209, -249, 238, 69, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -489, 12, -313, -7, 29, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -489, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -313, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, 139, -313, -159, 29, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -790, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -71, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimDamageX1_joint4[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 0, 258, 0, 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 434, 132, 68, -86, -168, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 4, 86, 2, -143, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 473, 86, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, -141, 86, -39, -143, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -132, 7, 86, -81, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, 0, 258, 0, 110, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDamageX1_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 481, -300, -586, -272, -417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 615, 27, -886, -345, -689, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, -197, -990, -61, -198, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1043, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, 27, -220, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 244, 23, -236, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 266, -8, -224, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 248, 233, -197, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 732, 660, -691, -680,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1568, 504, -1103, -132, -1558, -594,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 173, -1308, -205, -1880, -322,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamageX1_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -295,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 418,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimDamageX1_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamageX1_joint8[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 0, -4, 0, 176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 501, 87, 179, 68, 55, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 375, -9, 132, 10, 92, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 423, -1, 262, 9, 97, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, 54, 210, -38, 132, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 531, -81, 185, -107, 52, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 0, -4, 0, 176, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamageX1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamageX1_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -1185, 551, 50, 65, -477,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -741, -280, 602, 215, -411, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -117, 506, 982, 206, -170, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 463, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1015, 30, 159, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1044, 18, 189, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 936, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 175, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 518, -28, 195, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 406, -94, 42, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 330, -163, 860, -252, -57, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -41, 432, -199, -237, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 246, 182, 460, 59, -84, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 196, 551, 91, 65, 150,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamageX1_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 368,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -109,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamageX1_joint13[54] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -64, -74, -36,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 338,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 514, 16, -128, -45, -72, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 469, -18, -280, -1, 41, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 366, 51, -139, 93, 221, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, 176, 0, 27, 0, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimDamageX1_joint15[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 827, -1389, 758,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDamageX1_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -420, -230, -145, 45, 492,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -794, -132, -357, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 756, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -820, -23, -339, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -819, 31, -316, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 723, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -779, 177, -312, -85, 698, -200,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -163, 164, 18, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -488, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -345, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 28, -230, 114, 45, 26,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamageX1_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -393,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -237,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamageX1_joint20[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 145, -11, -154, -156, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -11, -165, -2, 187, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, -77, -16, 74, 647, 234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -207, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -53, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 554, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -219, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -68, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -84, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, -232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -224, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -404, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -299, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 86, -11, 73, -156, 68,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamageX1_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -305, 187, 177, 35, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 86, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -105, -54, 364, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 90, 116, -160, -284,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 199, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -205, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -232, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -240, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 216, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 234, -124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, -165, -171, 130, -476, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, 109, 20, 179, -202, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 296, 187, 166, 35, 238,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamageX1_joint23[114] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 316, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -285,
	ftAnimEnd(),
	0x0000, 0x200E, 0x005E, 0x00B5, 0xFFA3, 0x0078, 0xFF2C, 0x0135, 0x2805, 0x0003, 0x008E, 0xFFFA, 0x200B, 0x0001, 0x0114, 0xFF5E, 0x0061, 0x0074, 0x200B, 0x0001, 0xFF1A, 0xFEDF, 0x0013, 0xFFE6, 0x2809, 0x0007, 0x004B, 0xFF8E, 0x2003, 0x0001, 0xFED1, 0xFFC0, 0x2007, 0x0001, 0xFE99, 0xFFD4, 0x0085, 0xFFF9, 0x2805, 0x0005, 0x008C, 0x003C, 0x2003, 0x0004, 0xFEA3, 0x001F, 0x2003, 0x0001, 0xFEC1, 0x00B2, 0x200F, 0x0001, 0x0007, 0x00C7, 0x00FB, 0x000D, 0xFF9A, 0xFF5C, 0x200F, 0x0001, 0x004F, 0x002B, 0x00A7, 0xFF54, 0xFF03, 0xFFC9, 0x200F, 0x0001, 0x005E, 0x000F, 0xFFA3, 0xFEFB, 0xFF2C, 0x0028, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
