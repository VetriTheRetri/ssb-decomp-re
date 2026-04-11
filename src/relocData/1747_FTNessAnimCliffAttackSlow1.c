/* AnimJoint data for relocData file 1747 (FTNessAnimCliffAttackSlow1) */
/* 1360 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffAttackSlow1_joint1[14];
extern u16 dFTNessAnimCliffAttackSlow1_joint2[32];
extern u16 dFTNessAnimCliffAttackSlow1_joint3[20];
extern u16 dFTNessAnimCliffAttackSlow1_joint5[28];
extern u16 dFTNessAnimCliffAttackSlow1_joint6[52];
extern u16 dFTNessAnimCliffAttackSlow1_joint7[24];
extern u16 dFTNessAnimCliffAttackSlow1_joint8[18];
extern u16 dFTNessAnimCliffAttackSlow1_joint9[28];
extern u16 dFTNessAnimCliffAttackSlow1_joint11[30];
extern u16 dFTNessAnimCliffAttackSlow1_joint12[38];
extern u16 dFTNessAnimCliffAttackSlow1_joint13[20];
extern u16 dFTNessAnimCliffAttackSlow1_joint14[20];
extern u16 dFTNessAnimCliffAttackSlow1_joint16[10];
extern u16 dFTNessAnimCliffAttackSlow1_joint17[72];
extern u16 dFTNessAnimCliffAttackSlow1_joint19[30];
extern u16 dFTNessAnimCliffAttackSlow1_joint20[70];
extern u16 dFTNessAnimCliffAttackSlow1_joint22[28];
extern u16 dFTNessAnimCliffAttackSlow1_joint23[24];
extern u16 dFTNessAnimCliffAttackSlow1_joint25[18];
extern u16 dFTNessAnimCliffAttackSlow1_joint26[50];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffAttackSlow1_joints[] = {
	(u32)dFTNessAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffAttackSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffAttackSlow1_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffAttackSlow1_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffAttackSlow1_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffAttackSlow1_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffAttackSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffAttackSlow1_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffAttackSlow1_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffAttackSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffAttackSlow1_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffAttackSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffAttackSlow1_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffAttackSlow1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffAttackSlow1_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffAttackSlow1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffAttackSlow1_joint26, /* [25] joint 26 */
	0xFFFF0149, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffAttackSlow1_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -327, 262, -109, 92,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 244, 0, -9,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffAttackSlow1_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -317, -60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, -300, -156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 17, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffAttackSlow1_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), 0, 1, 0, 101, 0, -2, 600, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffAttackSlow1_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 223, 44, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 759, 32, 0, 6, 0, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffAttackSlow1_joint6[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, 21, -159, 55, -242, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -607, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 97, 136, -150, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 261, 105, -273, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -560, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 220, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4, -169, -340, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -117, -9, -211, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 94, -653, -93, -313, -102,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffAttackSlow1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -437, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -203,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffAttackSlow1_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), 0, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 30,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimCliffAttackSlow1_joint9[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 92, 8, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 6, -10, 288,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 288, 2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -1, 0, -4, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffAttackSlow1_joint11[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -172, -9, 165, 15, -129, -5, 0, 0, 54, -6, -17, 2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -368, -40, 309, 0, -239, 74,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffAttackSlow1_joint12[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1659, -9, 1448, 12, -1851, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2464, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1759, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1864, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1934, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1946, -90, -2506, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1753, -193, 1749, -9, -2298, 207,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffAttackSlow1_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -469,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffAttackSlow1_joint14[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 706, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 625, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 608, 135,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimCliffAttackSlow1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffAttackSlow1_joint17[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -18, -56, 1, 125, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 16, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 345, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 121, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -710, -560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1144, -235, 84, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1176, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -231, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1168, 273, 915, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -629, 520, -475, -141, 627, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 501, -514, -38, 85, -541,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffAttackSlow1_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 850, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 39,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimCliffAttackSlow1_joint20[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 133, -291, 29, 742, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 418, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 221, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -338, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 148, 279, 460, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 196, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 318, 76, 568, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 198, -125, 414, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -273, 275, -138, 146, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, -234, 138, -191, 102, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -418, -69, -107, -246, 20, -82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffAttackSlow1_joint22[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 146, 16, 66, 1, 94, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 499, 32, 62, -30, 88, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 468, -66, -241, -48, 236, 70,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffAttackSlow1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1554, 2, 1560, 0, -1487, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1571, -8, 1577, -9, -1493, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1581, -10, 1560, -17, -1487, 5,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffAttackSlow1_joint25[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCliffAttackSlow1_joint26[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 289, 4, 211, 0, 525, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 165, -49, 187, 13, 554, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, -58, 211, 23, 525, -29,
	ftAnimEnd(),
	0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200E, 0x00D8, 0x0003, 0x001D, 0x0000, 0xFFC5, 0xFFFF, 0x200F, 0x000A, 0x00B7, 0xFFF5, 0x0017, 0x0007, 0xFFD1, 0xFFCE, 0x0000, 0x0000, 0x0000,
};
