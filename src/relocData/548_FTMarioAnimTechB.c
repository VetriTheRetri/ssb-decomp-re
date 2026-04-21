/* AnimJoint data for relocData file 548 (FTMarioAnimTechB) */
/* 4320 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimTechB_joint1[44];
extern u16 dFTMarioAnimTechB_joint2[132];
extern u16 dFTMarioAnimTechB_joint3[20];
extern u16 dFTMarioAnimTechB_joint5[56];
extern u16 dFTMarioAnimTechB_joint6[192];
extern u16 dFTMarioAnimTechB_joint7[86];
extern u16 dFTMarioAnimTechB_joint8[24];
extern u16 dFTMarioAnimTechB_joint9[72];
extern u16 dFTMarioAnimTechB_joint11[80];
extern u16 dFTMarioAnimTechB_joint12[208];
extern u16 dFTMarioAnimTechB_joint13[88];
extern u16 dFTMarioAnimTechB_joint14[54];
extern u16 dFTMarioAnimTechB_joint16[72];
extern u16 dFTMarioAnimTechB_joint17[240];
extern u16 dFTMarioAnimTechB_joint19[102];
extern u16 dFTMarioAnimTechB_joint21[158];
extern u16 dFTMarioAnimTechB_joint22[204];
extern u16 dFTMarioAnimTechB_joint24[108];
extern u16 dFTMarioAnimTechB_joint25[170];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimTechB_joints[] = {
	(u32)dFTMarioAnimTechB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimTechB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimTechB_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimTechB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimTechB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimTechB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimTechB_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimTechB_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimTechB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimTechB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimTechB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimTechB_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimTechB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimTechB_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimTechB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimTechB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimTechB_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimTechB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimTechB_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimTechB_joint1[44] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3520,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), -4800,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 13), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2880,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 480,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 0, -720,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), -4800,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimTechB_joint2[132] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 7854, 0, 0, 0, 780, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 7854, -262, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 756, 192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 8, 780, -721, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 5227, -874, 0, 0, 5, 9, 214, 192, 180, -12,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 900, 820, -8, -1440,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2010, -714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 13), 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 420, -1826, -180, 501,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 214, 1279, 180, 458,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1206, -321, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 900, 1540, -8, -1440,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 600, -1370, -180, 376,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 214, 399, 180, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -2814, -95, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 900, 1096, -8, -300,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 900, -342,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, -2, 600, -179, -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 223, 0, 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimTechB_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimTechB_joint5[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 18, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 187, 23, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 187, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 187, 14, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimTechB_joint6[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 815, 3, -50, 11, -1410, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1472, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 831, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -93, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -136, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1485, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1410, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 815, -41, -46, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 748, -162, -131, -75, -1305, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1146, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 490, -382, -198, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -237, -110, -1114, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -1119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -235, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -183, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -243, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1081, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -765, 65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -107, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -212, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -105, 25, -691, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -8, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -220, -8, -644, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -491, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -281, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 169, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -35, -300, -19, -272, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimTechB_joint7[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimTechB_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1072,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1072, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimTechB_joint9[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -375, 0, 0, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -375, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 402, 97, 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 402, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 402, -10, 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, -9, 0, 0, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimTechB_joint11[80] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -221, 24, 139, -15, -209, 23, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 22, 30, -13, -19, 20, 28, 0, 0, 54, 0, -18, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 22, -13, 20, 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 22, -1, -13, 0, 20, -1, 0, 0, 54, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -11, 0, 7, 0, -10, 0, 0, 54, 0, -18, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -221, 139, -209, 0, 54, -17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimTechB_joint12[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2347, -8, 46, 42, 1790, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1731, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2347, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 180, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1691, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1698, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 173, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -21, 1790, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2009, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2430, 82, 129, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 229, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2605, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2070, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2099, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 242, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 246, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2745, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2099, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2135, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 220, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2159, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2451, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2785, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2939, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2995, 27, 206, 1, 2524, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2993, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 272, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2516, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2511, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2990, -5, 2509, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2982, 52, 301, 58, 2502, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3096, 100, 388, 69, 2685, 147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3382, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 439, 45, 2798, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 539, 18, 3141, 134,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3511, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, 149, 551, 12, 3282, 141,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimTechB_joint13[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -414, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -764, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimTechB_joint14[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1072, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1072, -146, 0, 61, 0, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -391, -31, 611, 6, -1554, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 508, 42, 117, -26, -761, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 507, -1, 47, -10, -699, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 487, 13, 0, -5, 0, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 625, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimTechB_joint16[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1251, -71, -829, -6, 186, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1251, 140, -834, -2, 250, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1672, -141, -836, -171, 385, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 827, 192, -1349, 16, 1529, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2056, 74, -804, 73, 447, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 2013, -4, 18, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1938, -25, -804, -38, 329, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTMarioAnimTechB_joint17[240] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1743, -1, -1377, -5, 1653, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1764, -35, -1402, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1699, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1825, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1815, -25, -1456, -28, 2032, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1816, 1, -1459, 0, 2059, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1812, 36, -1454, 40, 1980, -202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1551, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1377, 71, 1653, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1311, 59, 1353, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1258, -40, 999, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, 46, -1392, -141, 651, -277,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1477, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, -88, 445, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 389, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1569, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1542, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1474, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1438, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 453, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1540, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1564, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1440, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1531, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, -10, 468, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 678, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1575, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1542, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1578, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1578, -7, -1578, 7, 940, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1594, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1342, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1602, 19, 1198, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1555, 28, 1121, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1545, -4, 1168, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1733, -20, 1632, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1329, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1369, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, -10, -1377, -7, 1653, 21,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimTechB_joint19[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 273, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1203, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1203, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1248, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1260, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 858, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 413, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimTechB_joint21[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, -10, 1619, 0, 1452, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1608, 1, 1443, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1840, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1820, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1836, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1800, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1745, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1758, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1791, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, 4, 1439, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1585, -26, 1476, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1788, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1664, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1556, -31, 1519, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1330, -16, 1968, 52,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1673, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1561, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1316, -20, 2016, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1931, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1288, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1714, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1861, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1766, -50, 1328, 43, 1668, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1857, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1609, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1578, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1451, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1839, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, 18, 1619, 10, 1452, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimTechB_joint22[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1808, 4, 1421, 7, 1644, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1470, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1808, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1705, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1759, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1435, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1485, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1346, -71,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1750, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, -134, 1277, 27, 1096, -374,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1542, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1481, -84, 687, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1459, -11, 445, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1459, 0, 1542, 0, 445, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1459, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1542, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 445,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1459, 32, 445, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1524, 58, 545, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1575, 47, 635, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1801, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1189, 131,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1545, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1598, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1864, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1923, 65, 1677, 43, 1326, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1697, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1995, 48, 1333, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2017, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1438, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1624, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1719, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1719, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1698, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2005, -21, 1626, -76, 1686, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1822, -22, 1425, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1696, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1650, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, -14, 1421, -3, 1644, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimTechB_joint24[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 334, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1222,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 1222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1076, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 656, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 201, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 433, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimTechB_joint25[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1519, 0, 1702, 1, 1395, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1657, -28, 1418, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1510, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1519, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1482, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1493, -1, 1628, -24, 1433, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1443, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1486, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1576, -32,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1443,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1565, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1486, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1518, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1543, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1313, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1520, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1612, -62,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1585, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1627, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1687, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1605, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1285, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1372, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1581, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1548, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1560, 40, 1428, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1503, -13, 1700, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1540, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1454, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1424, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1519, -15, 1702, 2, 1395, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
