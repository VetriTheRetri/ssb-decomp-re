/* AnimJoint data for relocData file 1292 (FTKirbyAnimDamaged3) */
/* 1424 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamaged3_joint1[66];
extern u16 dFTKirbyAnimDamaged3_joint2[10];
extern u16 dFTKirbyAnimDamaged3_joint3[34];
extern u16 dFTKirbyAnimDamaged3_joint5[28];
extern u16 dFTKirbyAnimDamaged3_joint6[96];
extern u16 dFTKirbyAnimDamaged3_joint7[16];
extern u16 dFTKirbyAnimDamaged3_joint9[38];
extern u16 dFTKirbyAnimDamaged3_joint10[86];
extern u16 dFTKirbyAnimDamaged3_joint11[16];
extern u16 dFTKirbyAnimDamaged3_joint13[10];
extern u16 dFTKirbyAnimDamaged3_joint14[62];
extern u16 dFTKirbyAnimDamaged3_joint16[14];
extern u16 dFTKirbyAnimDamaged3_joint18[50];
extern u16 dFTKirbyAnimDamaged3_joint19[42];
extern u16 dFTKirbyAnimDamaged3_joint21[100];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamaged3_joints[] = {
	(u32)dFTKirbyAnimDamaged3_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamaged3_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamaged3_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamaged3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamaged3_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamaged3_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamaged3_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamaged3_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamaged3_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamaged3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamaged3_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamaged3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamaged3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamaged3_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamaged3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0139, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDamaged3_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 660, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 540, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 5324,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 2867,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 5), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 4505, 2867,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 540, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 420, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDamaged3_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamaged3_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), 178, 33, -178, -22, 120, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 7), 268, -16, -178, 16, 120, -87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamaged3_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -60, -60, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -90, -180, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDamaged3_joint6[96] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -621, -217, -298, 0, 357,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, -377, -515, -88, 357, 232,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -94, -394, 28, 465, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 171, 272, 197, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -744, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -778, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -611, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 540, 254, -179, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 681, 196, -317, -187,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 932, 114, -554, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 839, -53, -174, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -270, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -35, -220, 49, 0, 174,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamaged3_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamaged3_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 268, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 89, 180, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 178, -24, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 210, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDamaged3_joint10[86] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -1473, 1391, -429, 1608, 1486,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -668, -695, 961, -155, 3095, 777,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -587, 23, 1080, 98, 3164, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -780, 3, 1187, -27, 2973, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -772, 100, 1166, -116, 2998, 132,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -579, -69, 954, -317, 3238, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -911, -119, 532, -321, 2905, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -817, 53, 311, -157, 3121, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 13, 217, -93, 3216, 95,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamaged3_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDamaged3_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamaged3_joint14[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, -56, -1305, -65, -1371, 130,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1159, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1338, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1442, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1518, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1506, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1345, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1328, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1551, 40, -1314, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1587, 35, -1305, 8, -1375, -30,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamaged3_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimDamaged3_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, 52, -176, -4, -96, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -254, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -307, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -134, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -224, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -158, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -108, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -2, -176, -18, -99, 8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamaged3_joint19[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 21, 302, 24, 233, 32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 335, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 161, 9, 358, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 153, -44, 345, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 71, -65, 275, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -47, 302, -33, 237, -38,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamaged3_joint21[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0135, 0xFF04, 0x00B0, 0x0092, 0xFF9D, 0x0332, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0002, 0x012E, 0xFFED, 0x200B, 0x0001, 0x0039, 0xFF8F, 0x02CE, 0x01B4, 0x200B, 0x0001, 0x0052, 0x0001, 0x0305, 0x0021, 0x2803, 0x0004, 0xFFCB, 0x0012, 0x2809, 0x0005, 0x02B2, 0xFFDA, 0x2005, 0x0001, 0x011B, 0xFFF0, 0x2805, 0x0007, 0x00FC, 0xFFD1, 0x0801, 0x0003, 0x2003, 0x0001, 0xFFEB, 0x001D, 0x2803, 0x0002, 0x0010, 0x0058, 0x2009, 0x0001, 0x027C, 0xFF8D, 0x2009, 0x0001, 0x01CC, 0xFEFE, 0x200B, 0x0001, 0x00B8, 0x00A8, 0x0077, 0xFEF9, 0x200F, 0x0001, 0x0161, 0x003E, 0x00C5, 0xFFDA, 0xFFBD, 0xFF95, 0x200F, 0x0001, 0x0135, 0xFFD5, 0x00B0, 0xFFEC, 0xFFA0, 0xFFE3, 0x0000, 0x0000, 0x0000,
};
