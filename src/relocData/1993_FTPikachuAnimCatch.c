/* AnimJoint data for relocData file 1993 (FTPikachuAnimCatch) */
/* 2528 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCatch_joint1[60];
extern u16 dFTPikachuAnimCatch_joint2[46];
extern u16 dFTPikachuAnimCatch_joint3[46];
extern u16 dFTPikachuAnimCatch_joint5[38];
extern u16 dFTPikachuAnimCatch_joint6[114];
extern u16 dFTPikachuAnimCatch_joint7[30];
extern u16 dFTPikachuAnimCatch_joint8[46];
extern u16 dFTPikachuAnimCatch_joint9[10];
extern u16 dFTPikachuAnimCatch_joint10[30];
extern u16 dFTPikachuAnimCatch_joint11[30];
extern u16 dFTPikachuAnimCatch_joint13[38];
extern u16 dFTPikachuAnimCatch_joint14[108];
extern u16 dFTPikachuAnimCatch_joint16[16];
extern u16 dFTPikachuAnimCatch_joint17[106];
extern u16 dFTPikachuAnimCatch_joint19[56];
extern u16 dFTPikachuAnimCatch_joint21[116];
extern u16 dFTPikachuAnimCatch_joint22[92];
extern u16 dFTPikachuAnimCatch_joint24[52];
extern u16 dFTPikachuAnimCatch_joint25[114];
extern u16 dFTPikachuAnimCatch_joint26[38];
extern u16 dFTPikachuAnimCatch_joint27[24];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCatch_joints[] = {
	(u32)dFTPikachuAnimCatch_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCatch_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCatch_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCatch_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimCatch_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimCatch_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCatch_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCatch_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCatch_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCatch_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCatch_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimCatch_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimCatch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimCatch_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimCatch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimCatch_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimCatch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimCatch_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimCatch_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimCatch_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCatch_joint1[60] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 2436, 108, -137,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1497, 367, 353, 553,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3276, 4505, 3276,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 950, -3787, 522, 222,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -950,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 784, -371, 520, -488,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 625, -124, 95, -471,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 675, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimCatch_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -135, 32, -20, -27, 26, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 217, 33, -30, 7, 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 67, -17, 22, 18, 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 93, -6, 101, 15, 30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimCatch_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -249, -19, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -127, 100, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 355, 51, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 229, -52, 0, 0, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimCatch_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 405, -10, 8, -11, 218, 75,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 315, -142, -71, -201, 370, 249,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 298, 6, -142, 6, 405, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCatch_joint6[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -93, -1849, 224, 1406, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1395, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -897, -148, 1517, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1101, 32, 1525, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -833, 138, -1116, 84, 910, -290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1461, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -824, 20, 944, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -793, 232, 959, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -359, 272, -1608, -147, 678, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1989, -12, 897, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -248, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -446, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1973, 17, 886, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1124, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1860, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -572, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -808, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1317, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 3, -1849, 11, 1406, 88,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCatch_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -362,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -26, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimCatch_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 272, -8, 0, 27, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -51, -9, 0, -8, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 213, 38, -53, -18, 6, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 220, -30, -132, -15, 16, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCatch_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCatch_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -491, -90, 172, 15, 513, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -815, 49, 135, -17, 402, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCatch_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -319, -44, -220, -19, -220, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -398, 31, -173, 22, -172, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimCatch_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -393, -23, 37, 30, 168, 93,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -341, 63, -39, -169, 383, 264,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -345, 14, -89, -18, 367, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCatch_joint14[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 32, 1703, -32, 1311, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1416, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 836, 63, 1670, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 931, -36, 1424, -221,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1250, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 762, -69, 795, -261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 991, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 792, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 867, -196, 1447, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1945, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 398, -268, 712, -151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 918, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 647, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 995, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 838, -97, 1912, -39, 866, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1033, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1714, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 800, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 822, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -18, 1703, -11, 1311, 89,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimCatch_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCatch_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -68, -1609, 73, 1201, 366,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1499, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1368, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1567, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1724, 203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2107, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1350, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1345, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1491, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1445, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2136, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2092, -338,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1400, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, 110, -1342, 36, 1555, -273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1554, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1604, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1622, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1686, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, -226,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1146, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1669, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -2, -1609, -4, 1201, 54,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimCatch_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -513,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 603, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 980, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimCatch_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 108, 127, -26, -353, 653,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 111, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 369, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 205, 40, 263, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 129, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 269, -51, 331, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 263, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 103, -181, 453, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, -63, 190, 49, -133, -270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 122, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 0, -87, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -137, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -478, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -101, 42, -441, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -10, 29, -368, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 130, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 17, 127, -2, -353, 15,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCatch_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1479, -55, 1665, -17, -1800, 219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1574, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1349, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1580, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1696, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1363, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1652, 36, -1078, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1647, -123, -1105, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1341, -41, 1406, -132, -1617, -404,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1570, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1421, 29, -2194, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1456, 37, -2307, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2161, 206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1626, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1514, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1479, 17, -1917, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, 0, 1665, 39, -1800, 116,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimCatch_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -500,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 299, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1026, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -93,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCatch_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 307, 284, -116, -484, 900,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 301, 105, 416, 500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 203, -105, 517, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 593, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -84, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 44, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 62, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, 190, 339, -537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, 73, -46, -39, -408, -269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 156, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, -120, -199, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 27, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -193, -114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 21, -10, 211, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -5, -6, 276, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -1, 284, 8, -484, -19,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCatch_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 110, -58, 115, 71, 182, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -363, -87, 427, -6, -244, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -416, 34, 75, -42, -521, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -14, 0, -3,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimCatch_joint27[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -57, 0, 848,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -25, -1643, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -51, -33, 792,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -51, -33, 792,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
