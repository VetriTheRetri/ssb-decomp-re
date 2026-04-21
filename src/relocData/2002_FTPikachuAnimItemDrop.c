/* AnimJoint data for relocData file 2002 (FTPikachuAnimItemDrop) */
/* 1904 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimItemDrop_joint1[34];
extern u16 dFTPikachuAnimItemDrop_joint2[22];
extern u16 dFTPikachuAnimItemDrop_joint3[60];
extern u16 dFTPikachuAnimItemDrop_joint5[30];
extern u16 dFTPikachuAnimItemDrop_joint6[122];
extern u16 dFTPikachuAnimItemDrop_joint7[16];
extern u16 dFTPikachuAnimItemDrop_joint8[36];
extern u16 dFTPikachuAnimItemDrop_joint9[10];
extern u16 dFTPikachuAnimItemDrop_joint10[38];
extern u16 dFTPikachuAnimItemDrop_joint11[38];
extern u16 dFTPikachuAnimItemDrop_joint13[38];
extern u16 dFTPikachuAnimItemDrop_joint14[122];
extern u16 dFTPikachuAnimItemDrop_joint16[22];
extern u16 dFTPikachuAnimItemDrop_joint17[54];
extern u16 dFTPikachuAnimItemDrop_joint19[32];
extern u16 dFTPikachuAnimItemDrop_joint21[54];
extern u16 dFTPikachuAnimItemDrop_joint22[56];
extern u16 dFTPikachuAnimItemDrop_joint24[32];
extern u16 dFTPikachuAnimItemDrop_joint25[46];
extern u16 dFTPikachuAnimItemDrop_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimItemDrop_joints[] = {
	(u32)dFTPikachuAnimItemDrop_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimItemDrop_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimItemDrop_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimItemDrop_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimItemDrop_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimItemDrop_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimItemDrop_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimItemDrop_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimItemDrop_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimItemDrop_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimItemDrop_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimItemDrop_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimItemDrop_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimItemDrop_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimItemDrop_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimItemDrop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimItemDrop_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimItemDrop_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimItemDrop_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimItemDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimItemDrop_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 191, 188,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 792,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 675, -93, 296, 84,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 296, -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 675,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimItemDrop_joint2[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), 23,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 133, 32, 0, -209, -111,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 187,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 187, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 23, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimItemDrop_joint3[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -76, -25, -1, 0, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -113, 12, -4, -1, 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -25, 78, -6, -1, 8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 201, 28, -8, 0, 11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -8, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, -20, -8, 0, 11, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimItemDrop_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 369, 25, -88, -14, 342, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 369, -22, -88, 12, 342, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimItemDrop_joint6[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -63, 236, -5, -202, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -15, -194, -326, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 551, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, -216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 133, 231,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -270, -249, -462, -200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -584, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1172, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 500, 371,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1041, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -584, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -441, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1093, 16, -1219, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 882, 21, -1035, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 918, 20, -1059, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 581, -382, -848, 213,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -365, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 189, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, -291, -570, 244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -217, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 190, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 567, 302, 223, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 794, 227, 236, 12, -203, 14,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimItemDrop_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimItemDrop_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -163, 20, -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -44, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -149, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -172, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 89, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 89, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimItemDrop_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimItemDrop_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -258, -18, 214, 15, 180, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -258, 25, 214, -25, 180, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 25, -67, -20, 80, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimItemDrop_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -381, -27, -131, -9, -137, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -381, 45, -131, 19, -137, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 120, 37, 80, 12, -77, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimItemDrop_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -548, -128, -131, -39, 122, -109,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -548, 65, -131, 26, 122, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -458, 174, -94, 53, 165, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimItemDrop_joint14[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 19, 1703, 0, -1905, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1370, -181, -1994, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1170, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1364, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1200, -244,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1157, -189, -2086, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2590, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 991, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 937, -178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1200, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2518, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2396, -157,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1070, -174, 997, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 713, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1363, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2588, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2514, 245,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 978, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1409, 189, -2199, 246,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1917, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1357, -170, 1568, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 876, -131, 1694, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 806, -69, 1702, 8, -1906, 11,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimItemDrop_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimItemDrop_joint17[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 3, -1609, 0, 1201, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1684, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1353, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1336, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1244, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1202, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1675, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1669, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -2, -1609, 0, 1201, -1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimItemDrop_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 616, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 901, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 948, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimItemDrop_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -9, 127, -3, -353, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -8, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 122, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -321, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -377, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -354, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4, 3, 126, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 1, 127, 1, -353, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimItemDrop_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1737, 7, 1665, -13, 1416, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1561, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1738, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 880, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1182, 71,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1581, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1661, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1401, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, -1, 1665, 3, 1416, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimItemDrop_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1029, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 863, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimItemDrop_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -15, 284, -26, -484, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -38, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 282, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -323, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -482, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 2, 284, 1, -484, -1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimItemDrop_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -455, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -455, 51, 0, 52, -3, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 107, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 572, 431,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -14, 0, -3,
	ftAnimEnd(),
};
