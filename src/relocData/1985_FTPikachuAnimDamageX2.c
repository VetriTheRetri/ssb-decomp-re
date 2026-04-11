/* AnimJoint data for relocData file 1985 (FTPikachuAnimDamageX2) */
/* 1808 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamageX2_joint1[38];
extern u16 dFTPikachuAnimDamageX2_joint2[46];
extern u16 dFTPikachuAnimDamageX2_joint3[46];
extern u16 dFTPikachuAnimDamageX2_joint5[38];
extern u16 dFTPikachuAnimDamageX2_joint6[52];
extern u16 dFTPikachuAnimDamageX2_joint7[16];
extern u16 dFTPikachuAnimDamageX2_joint8[46];
extern u16 dFTPikachuAnimDamageX2_joint9[10];
extern u16 dFTPikachuAnimDamageX2_joint10[68];
extern u16 dFTPikachuAnimDamageX2_joint11[68];
extern u16 dFTPikachuAnimDamageX2_joint13[38];
extern u16 dFTPikachuAnimDamageX2_joint14[44];
extern u16 dFTPikachuAnimDamageX2_joint16[16];
extern u16 dFTPikachuAnimDamageX2_joint17[48];
extern u16 dFTPikachuAnimDamageX2_joint19[20];
extern u16 dFTPikachuAnimDamageX2_joint21[58];
extern u16 dFTPikachuAnimDamageX2_joint22[44];
extern u16 dFTPikachuAnimDamageX2_joint24[28];
extern u16 dFTPikachuAnimDamageX2_joint25[128];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamageX2_joints[] = {
	(u32)dFTPikachuAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamageX2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamageX2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamageX2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamageX2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamageX2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamageX2_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamageX2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamageX2_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamageX2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamageX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamageX2_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamageX2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamageX2_joint25, /* [24] joint 25 */
	0xFFFF019B, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDamageX2_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 667, -12, 108, -119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 668, 3, 33, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 673, 3, 81, 42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 675, 2, 122, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimDamageX2_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -93, -92, -90, -14, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -257, -9, -138, -2, 71, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -257, 16, -138, 15, 71, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 23, 36, 133, 34, 32, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamageX2_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 113, -155, -30, -81, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 327, 18, -92, 4, -59, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 327, -8, -92, 4, -59, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 172, -35, -11, 9, -10, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamageX2_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 324, -157, -62, -237, 313, 377,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 264, 12, -151, -13, 455, 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 348, 22, -87, 33, 428, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamageX2_joint6[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 236, 34, -202, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 285, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -337, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -292, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -642, -21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 173, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 14, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -657, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 236, 74, -202, 151,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamageX2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamageX2_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, 107, 63, 24, 75, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 318, 24, -90, -10, -62, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 318, -6, -90, -2, -62, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 194, -41, -142, -9, -11, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamageX2_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamageX2_joint10[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, -7, -72, -23, 331, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -23, 155, -69, 12, 313, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 440, -35, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -23, -31, -69, 0, 313, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -34, 36, -32, 11, 138, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 151, 62, -16, 5, 20, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -50, -16, 5, 20, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimDamageX2_joint11[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 6, -1, 0, -306, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, 42, -1, 77, -290, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 230, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 19, -9, -1, -16, -290, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1, 29, -12, 4, -127, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 159, 52, 18, 10, -67, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, -53, 18, -6, -67, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimDamageX2_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -324, 407, -62, -113, 313, 435,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -171, 32, -105, -13, 476, 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -261, -58, -89, 16, 428, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamageX2_joint14[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -811, -9, -94, -112, -297, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -834, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -431, -67, -472, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -497, -11, -428, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -163, 75, -610, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 78, 11, -608, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -811, 7, -94, -57, -297, 103,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamageX2_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDamageX2_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -23, -1609, -1, 1201, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1584, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1387, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1403, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1498, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1585, 17, 1280, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1688, 13, 1193, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1666, -7, -1609, 0, 1201, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamageX2_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 923, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 947, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 946, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamageX2_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -59, 127, -135, -353, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -63, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -85, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -278, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -293, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -161, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -122, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -353, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 5, 33, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -54, 1, 132, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 6, 20, 127, -1, -353, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamageX2_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1479, -26, 1665, -154, 1416, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1441, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1202, -74, 1146, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1218, 10, 1134, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1553, 37, 1476, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1656, 18, 1439, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1479, -12, 1665, 2, 1416, -7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamageX2_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 958, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 934, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 874, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 774, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 807, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamageX2_joint25[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1615, 22, 1323, 94, 1124, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1546, -2, 1607, 44, 1496, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1629, -13, 1591, -3, 1535, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1409, -30, 1120, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1627, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1766, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1615, 50, 1323, -28, 1124, 1,
	ftAnimEnd(),
	0x50E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x1700, 0x1000, 0x1000, 0x1000, 0x280F, 0x0001, 0xFF5E, 0x0020, 0x013B, 0x0044, 0xFF9F, 0x0022, 0x1701, 0x0001, 0x1000, 0x1000, 0x1000, 0x280F, 0x0003, 0x0074, 0x000E, 0x0112, 0x0001, 0x0087, 0xFFFD, 0x3F01, 0x0001, 0x1800, 0x1800, 0x1800, 0x3F01, 0x0002, 0x1000, 0x1000, 0x1000, 0x1F01, 0x0014, 0x1000, 0x1000, 0x1000, 0x200F, 0x000C, 0x0037, 0xFFEF, 0x014F, 0x0007, 0xFF6F, 0xFFEA, 0x200F, 0x0003, 0xFF70, 0xFFDF, 0x0188, 0x0007, 0xFF2F, 0x0019, 0x200F, 0x0003, 0xFF74, 0x0019, 0x017B, 0xFFB2, 0x0002, 0x0029, 0x380F, 0x0002, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
