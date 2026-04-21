/* AnimJoint data for relocData file 1323 (FTKirbyAnimRollB) */
/* 2912 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimRollB_joint1[28];
extern u16 dFTKirbyAnimRollB_joint2[106];
extern u16 dFTKirbyAnimRollB_joint3[24];
extern u16 dFTKirbyAnimRollB_joint4[22];
extern u16 dFTKirbyAnimRollB_joint6[54];
extern u16 dFTKirbyAnimRollB_joint7[182];
extern u16 dFTKirbyAnimRollB_joint8[14];
extern u16 dFTKirbyAnimRollB_joint10[54];
extern u16 dFTKirbyAnimRollB_joint11[174];
extern u16 dFTKirbyAnimRollB_joint12[32];
extern u16 dFTKirbyAnimRollB_joint14[10];
extern u16 dFTKirbyAnimRollB_joint15[136];
extern u16 dFTKirbyAnimRollB_joint17[14];
extern u16 dFTKirbyAnimRollB_joint19[172];
extern u16 dFTKirbyAnimRollB_joint20[146];
extern u16 dFTKirbyAnimRollB_joint22[46];
extern u16 dFTKirbyAnimRollB_joint23[196];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimRollB_joints[] = {
	(u32)dFTKirbyAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimRollB_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimRollB_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimRollB_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimRollB_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimRollB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimRollB_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimRollB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimRollB_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimRollB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimRollB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimRollB_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimRollB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimRollB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimRollB_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -960, -1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -2100, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -3240, -1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimRollB_joint2[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -268, 0, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1072, -335,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -240, 660,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1608, -122,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -2055, -59, -720, -799, 1320, 746,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), -1200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2412, -59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1440, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 1140, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1440, 240,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 6), -2770, -59, -720, 800,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1320, -1013,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -3216, -71,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -3485, 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimRollB_joint3[24] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -1608,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -3216,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), -3216,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimRollB_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimRollB_joint6[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 357, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 14), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 26), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), 89,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 60, 160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimRollB_joint7[182] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -981, -217, -393, 0, 200,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -1167, -610, -204, 200, 652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1531, -951, -626, 76, 1304, 685,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -350, 60,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2079, -440, 1572, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2412, -165, 1608, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2404, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1608, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -336, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -782, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2394, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2412, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2465, -2, 1661, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2412, -1, 1608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -753, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -297, -231,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2414, -2, 1609, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1594, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2431, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2412, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2210, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1824, 295, -546, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -845, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1620, 229, 1595, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1365, 68, 1504, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1482, -67, 1632, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1608, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1500, 55, -1039, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -884, 148, -1367, -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 80, -1387, -20, 1608, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimRollB_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimRollB_joint10[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 178, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 26), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), -89,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, 360,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 60, -159,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimRollB_joint11[174] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1230, 1391, -184, 1608, 545,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1092, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2034, 1177, 2154, 693,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3159, 813, 2996, 513,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3662, 430, 1194, 82, 3180, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1322, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4021, 179, 3216, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 3216, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4021, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4021, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 4015, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1412, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1612, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1516, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 829, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3215, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3262, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4025, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4021, -138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 839, 0, 3216, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 563, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3788, -108, 3057, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3805, -146, 3310, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3495, -286, 3260, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3110, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3243, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3217, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3116, -64, 569, -67,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2493, -149, 244, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -80, 220, -23, 3216, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimRollB_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimRollB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimRollB_joint15[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, -257, -1305, 193, 1845, 284,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1889, -311, -1112, 85, 2130, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2255, 25, -1134, -23, 2480, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1839, 311, -1158, -85, 2090, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 99, -1305, -88, 1845, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1621, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1217, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1867, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1833, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1797, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1610, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1599, 6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1320, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1483, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1781, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1832, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1499, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1264, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1591, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1665, 22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, -20, 1845, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1305, 1841,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1640, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 8, -1305, 0, 1845, 4,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimRollB_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimRollB_joint19[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 25, -1431, 76, -1704, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1716, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1380, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1893, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1590, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1848, -163, -1842, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 51, -1431, -32, -1704, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1486, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1641, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1789, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1286, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1508, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1887, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1226, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1336, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1828, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1916, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1314, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1293, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1871, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1757, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1642, -8, -1217, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1757, -22, -1159, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1791, -85, -1770, 85, -1200, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1603, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1928, -47, -1586, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1886, -8, -1515, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1929, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1441, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1701, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1709, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1921, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 3, -1431, 9, -1704, 4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimRollB_joint20[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1587, 29, -1911, 64, -1375, 74,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1567, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1916, -53, -1258, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1954, 2, -1349, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1450, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1792, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1587, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1628, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1459, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1439, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1747, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1844, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1881, -52, -1427, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1451, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1904, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1628, 3, -1843, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1671, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1851, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1408, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1584, 115,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1671, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1523, 70, -1911, -29, -1375, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1371, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1911, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1530, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1574, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1371, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -13, -1911, 0, -1375, -4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimRollB_joint22[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimRollB_joint23[196] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -59, 176, -13, -99, -50,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 326, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 100, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -99, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 349, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 364, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, 177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 452, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 339, -105, -34, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -36, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 266, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 282, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 69, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 286, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 307, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 393, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 326, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 221, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 84, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -235, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 50, -365, -368,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -535, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 144, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 336, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 331, -7, -93, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 313, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 16, -95, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -3, 176, 10, -99, -4,
	ftAnimEnd(),
	0x0000, 0x0000,
};
