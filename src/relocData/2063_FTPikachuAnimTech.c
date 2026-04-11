/* AnimJoint data for relocData file 2063 (FTPikachuAnimTech) */
/* 3472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTech_joint1[76];
extern u16 dFTPikachuAnimTech_joint2[52];
extern u16 dFTPikachuAnimTech_joint3[62];
extern u16 dFTPikachuAnimTech_joint5[30];
extern u16 dFTPikachuAnimTech_joint6[126];
extern u16 dFTPikachuAnimTech_joint7[62];
extern u16 dFTPikachuAnimTech_joint8[68];
extern u16 dFTPikachuAnimTech_joint9[10];
extern u16 dFTPikachuAnimTech_joint10[42];
extern u16 dFTPikachuAnimTech_joint11[42];
extern u16 dFTPikachuAnimTech_joint13[50];
extern u16 dFTPikachuAnimTech_joint14[164];
extern u16 dFTPikachuAnimTech_joint16[92];
extern u16 dFTPikachuAnimTech_joint17[148];
extern u16 dFTPikachuAnimTech_joint19[84];
extern u16 dFTPikachuAnimTech_joint21[138];
extern u16 dFTPikachuAnimTech_joint22[150];
extern u16 dFTPikachuAnimTech_joint24[78];
extern u16 dFTPikachuAnimTech_joint25[210];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimTech_joints[] = {
	(u32)dFTPikachuAnimTech_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimTech_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimTech_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimTech_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimTech_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimTech_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimTech_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimTech_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimTech_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimTech_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimTech_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimTech_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimTech_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimTech_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimTech_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimTech_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimTech_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimTech_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimTech_joint25, /* [24] joint 25 */
	0xFFFF0342, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimTech_joint1[76] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 725, -86,
	ftAnimSetValBlock(FT_ANIM_ROTX), -1876,
	ftAnimSetValT(FT_ANIM_ROTX, 6), -1876,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 570, -108,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 725, 903, -86, 120,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 1, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1360, 24, -2, 109,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 762, -2801, 22, 71,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -680,
	ftAnimSetValT(FT_ANIM_ROTX, 12), -26,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 595, -4, 59, 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 595, -4, 59, 43,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 675, 162,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimTech_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 14, 223, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 3, 291, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 168, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 168, -16, 291, -17, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimTech_joint3[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -236, 35, 355, 38, -158, -34,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -271, 384, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -236, 35, 355, 38, -158, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -368, 29, 0, -44, 0, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 261, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 261, -30, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimTech_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 290, -39, 406,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 290, 184, -39, 47, 406, -236,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 522, 13, 19, -9, 111, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimTech_joint6[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1015, 0, -1662, -11, 768, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1015, 3, -1662, 102, 768, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1007, 77, -1513, 229, 677, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -972, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -860, 279, 369, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -448, 252, -171, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -355, -72, -1006, -83, -300, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1528, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -592, -202, -21, 250,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1057, -95, 517, 164,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1575, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1305, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1150, -55, 721, 175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -979, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 735, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1288, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -968, 39, -1276, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -815, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1745, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1814, -52, 1372, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 10, -1849, -35, 1406, 33,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimTech_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -798, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -798, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1180, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1032, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -391, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimTech_joint8[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -458, -322, -255,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -553, -326, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -458, 15, -322, 46, -255, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -445, 57, 0, 40, 0, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 103, 0, -5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 278, 34, -41, -5, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 278, -6, -41, -14, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 230, -70, -145, -30, 18, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimTech_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimTech_joint10[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 34, 0, -7, 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 214, -28, -99, -5, 265, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -671, -17, -71, 8, 88, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimTech_joint11[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 34, 0, 0, 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 209, -27, 0, 7, -317, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -474, -17, 108, 0, 79, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimTech_joint13[50] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 1, 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -368, 280, 54,
	ftAnimSetValBlock(FT_ANIM_SCAY), 5324,
	ftAnimSetValT(FT_ANIM_SCAY, 6), 5324,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -362, 106, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -368, -113, 280, -84, 54, 132,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -461, 17, 32, -137, 87, 103,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 19), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimTech_joint14[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 841, -59, 1242, 34, 557, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 568, -191, 344, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1277, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1184, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 2, 1225, 7, 213, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 793, 134, 524, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1198, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1291, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 841, -13, 1242, -49, 557, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1047, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 551, -298, 287, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 168, -255, -134, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 208, 232, -133, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 506, 200, 1234, 189, 203, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1500, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 789, 114, 513, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 908, 77, 699, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 681, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 831, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1470, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1232, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1123, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1092, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1122, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 846, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 807, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, 280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1697, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1259, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1302, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -3, 1707, 10, 1313, 11,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimTech_joint16[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -436, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -410, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 292,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimTech_joint17[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, 0, -16, -33, 34, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 146, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 402, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -27, 378, -217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -392, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, -86, 11, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -384, -78, 603, 130,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -158, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -378, 21, 607, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -310, -13, 286, -403,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -369, 45, -326, -107, -293, -381,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 37, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -361, -16, -476, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 122, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -861, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 71, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -477, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 8, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -13, 0, -7, -406, 70,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimTech_joint19[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 582, -172,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -207,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1109, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1015, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -68,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimTech_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 0, 5, -5, 70, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -20, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 119, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 282, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 128, 29, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 298, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 413, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, 43, 89, -90, 668, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 306, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 4, 625, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 255, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 349, -371,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 435, -97, 625, 146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 355, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 110, -159, -162, -330,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -346, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -93, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, -135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -41, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -373, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 50, 69, 84, -371, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 38, 127, 58, -353, 17,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimTech_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 10, 106, -73, -119, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 67, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 302, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 118, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, 82, -108, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 227, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 369, 6, -44, -130, 231, 224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 292, 1, 419, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 317, -57, -61, 177, 215, -446,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 95, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 292, 184, -474, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 308, 42, -648, -191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -975, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 54, -22, 376, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -3, -25, 196, -125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -772, 209,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -18, 8, 88, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 48, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 150, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, -53, -297, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -21, -57, -27, -192, 104,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimTech_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 412, -192,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 145, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1141, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1146, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 905, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -97,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimTech_joint25[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1455, 1, 1659, 3, 2023, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1676, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1462, 16, 2012, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1489, 90, 1763, -240,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1487, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1676, -148,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1617, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1736, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1751, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1406, -79, 2146, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1517, 342, 2148, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2238, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2091, 125, 1637, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1501, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1769, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1621, -89, 1620, -375,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1492, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1486, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1431, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1478, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1408, -40, 1572, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1619, -42, 1244, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1522, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1108, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1554, -32, 1295, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1582, 23, 1324, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, 19, 1323, 0, 1124, 15,
	ftAnimEnd(),
	0x400E, 0xFDF5, 0xFE83, 0xFCA2, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0006, 0xFDF5, 0x0008, 0xFE83, 0x0041, 0xFCA2, 0x003B, 0x200F, 0x0002, 0xFE36, 0x0035, 0x008B, 0x0046, 0xFE7D, 0x0057, 0x200F, 0x0002, 0xFEC9, 0x0039, 0xFF9D, 0xFFE7, 0xFE01, 0x0023, 0x200F, 0x0004, 0xFF90, 0x003D, 0xFFF5, 0x0016, 0xFF55, 0x00A1, 0x200F, 0x0002, 0x003C, 0x0000, 0x0024, 0x0007, 0x01C6, 0xFFF8, 0x200F, 0x0005, 0xFF90, 0xFFF9, 0x0025, 0xFFFD, 0xFF1C, 0xFFD3, 0x380F, 0x0005, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
