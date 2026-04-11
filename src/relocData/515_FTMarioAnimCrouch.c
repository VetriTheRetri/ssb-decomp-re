/* AnimJoint data for relocData file 515 (FTMarioAnimCrouch) */
/* 1200 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCrouch_joint1[26];
extern u16 dFTMarioAnimCrouch_joint2[30];
extern u16 dFTMarioAnimCrouch_joint4[30];
extern u16 dFTMarioAnimCrouch_joint5[58];
extern u16 dFTMarioAnimCrouch_joint6[28];
extern u16 dFTMarioAnimCrouch_joint7[14];
extern u16 dFTMarioAnimCrouch_joint8[30];
extern u16 dFTMarioAnimCrouch_joint10[30];
extern u16 dFTMarioAnimCrouch_joint11[48];
extern u16 dFTMarioAnimCrouch_joint12[28];
extern u16 dFTMarioAnimCrouch_joint13[14];
extern u16 dFTMarioAnimCrouch_joint15[10];
extern u16 dFTMarioAnimCrouch_joint16[44];
extern u16 dFTMarioAnimCrouch_joint18[24];
extern u16 dFTMarioAnimCrouch_joint20[24];
extern u16 dFTMarioAnimCrouch_joint21[44];
extern u16 dFTMarioAnimCrouch_joint23[70];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimCrouch_joints[] = {
	(u32)dFTMarioAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCrouch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimCrouch_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCrouch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCrouch_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCrouch_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimCrouch_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimCrouch_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimCrouch_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimCrouch_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimCrouch_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0115, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimCrouch_joint1[26] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 540, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 88, 342, -10,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 140, 223, -16,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 132), 140, 223, -16,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCrouch_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -392, -71, -754, 7, 70, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -568, -734, 161,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -568, -734, 161,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimCrouch_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 630, 93, 137, -26, 86, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 863, 71, 73,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 863, 71, 73,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCrouch_joint5[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -192, -300, -227, -272, 249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -264, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, -111, -22, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -523, -1, -425, -275,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -731, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -465, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -206, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 251, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1275, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, 0, -465, 0, -1275, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCrouch_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -519,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -405, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimCrouch_joint7[14] = {
	ftAnimSetVal(FT_ANIM_ROTX), -625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -134,
	ftAnimSetValT(FT_ANIM_ROTX, 23), -134,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCrouch_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 192, -1, -1, 0, 52, -26,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 187, 0, -6,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 132), 187, 0, -6,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimCrouch_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -78, 31, 49, -19, -74, 29,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCrouch_joint11[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2773, -22, 551, 115, -3151, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 469, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2795, -297, -3272, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3368, -308, -4075, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3412, -34, -4174, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3437, -20, -4256, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3495, -12, -4495, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3495, 469, -4495,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCrouch_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -323, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimCrouch_joint13[14] = {
	ftAnimSetVal(FT_ANIM_ROTX), 625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 134,
	ftAnimSetValT(FT_ANIM_ROTX, 23), 134,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimCrouch_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCrouch_joint16[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 148, -230, -37, 45, -219,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 189, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -191, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -388, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -650, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 220, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 275, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 3, -188, 2, -652, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimCrouch_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 398,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1059, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1110, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1274, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimCrouch_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1396, -20, 1619, -11, 1452, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1497, 16, 1488, -3, 1416, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, -5, 1496, 7, 1419, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCrouch_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1808, -144, 1421, -56, 1644, -187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1178, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1459, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1465, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1436, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1372, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 918, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1418, 46, 1438, -21, 893, -24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimCrouch_joint23[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 375,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1067, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1300, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1298, -2,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0059, 0x0020, 0xFFA3, 0x0025, 0xFF2C, 0xFF68, 0x2809, 0x0004, 0xFE22, 0xFFEE, 0x2805, 0x0007, 0xFFB1, 0x0015, 0x2003, 0x0003, 0x00B6, 0xFFF3, 0x2003, 0x0001, 0x00A8, 0xFFF5, 0x2803, 0x0003, 0x004C, 0xFFC6, 0x2009, 0x0001, 0xFE11, 0x0033, 0x2009, 0x0002, 0xFF17, 0x0071, 0x200F, 0x0001, 0x0009, 0xFFBE, 0xFFD2, 0x0021, 0xFF6C, 0x0054, 0x0000, 0x0000, 0x0000,
};
