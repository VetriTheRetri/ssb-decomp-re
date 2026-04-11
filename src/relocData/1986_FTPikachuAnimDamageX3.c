/* AnimJoint data for relocData file 1986 (FTPikachuAnimDamageX3) */
/* 2304 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamageX3_joint1[10];
extern u16 dFTPikachuAnimDamageX3_joint2[134];
extern u16 dFTPikachuAnimDamageX3_joint3[62];
extern u16 dFTPikachuAnimDamageX3_joint5[32];
extern u16 dFTPikachuAnimDamageX3_joint6[66];
extern u16 dFTPikachuAnimDamageX3_joint7[16];
extern u16 dFTPikachuAnimDamageX3_joint8[70];
extern u16 dFTPikachuAnimDamageX3_joint9[10];
extern u16 dFTPikachuAnimDamageX3_joint10[62];
extern u16 dFTPikachuAnimDamageX3_joint11[70];
extern u16 dFTPikachuAnimDamageX3_joint13[32];
extern u16 dFTPikachuAnimDamageX3_joint14[86];
extern u16 dFTPikachuAnimDamageX3_joint16[14];
extern u16 dFTPikachuAnimDamageX3_joint17[76];
extern u16 dFTPikachuAnimDamageX3_joint19[32];
extern u16 dFTPikachuAnimDamageX3_joint21[60];
extern u16 dFTPikachuAnimDamageX3_joint22[70];
extern u16 dFTPikachuAnimDamageX3_joint24[40];
extern u16 dFTPikachuAnimDamageX3_joint25[158];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamageX3_joints[] = {
	(u32)dFTPikachuAnimDamageX3_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamageX3_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamageX3_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamageX3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamageX3_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamageX3_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamageX3_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamageX3_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamageX3_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamageX3_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamageX3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamageX3_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamageX3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamageX3_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamageX3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamageX3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamageX3_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamageX3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamageX3_joint25, /* [24] joint 25 */
	0xFFFF0217, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDamageX3_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 667, 108,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDamageX3_joint2[134] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 23, 133, 32, 0, -209, -111,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -209, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 170, -343, -10, -39, -34,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 183, 19, -356, 0, -81, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, -42, -209, 748, -111, 36, 4096, -1638, 4096, 2047, 4096, -1638,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -10, 11, -22, -198, -102, -9, 2457, 1638, 6144, -819, 2457, 1638,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2, 42, -259, -748, -114, -36, 5734, 1638, 3276, -2048, 5734, 1638,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -1, -209, 26, -111, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, -3, -205, -2, -111, 51,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 183, -6, -356, 19, -81, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 23, 133, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -8, 0, -215, -3, 24, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -209, -111,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamageX3_joint3[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 66, -135, -114, -92, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 281, 6, -314, -12, -212, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 281, -13, -314, 25, -212, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 111, -13, 5, 29, -196, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 138, -11, -9, 0, 25, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, -39, 0, 2, -2, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamageX3_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 324, -62, 313,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 324, 57, -62, 14, 313, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 381, -48, 338,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamageX3_joint6[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -24, 236, -180, -202, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 729, 0, -305, -94, -284, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 12, -328, 16, -932, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -171, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -495, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -487, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -657, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -147, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 66, 46,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -550, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 236, 56, -202, 115,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamageX3_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamageX3_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 107, -84, 126, 28, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 212, 96, 89, 81, 35, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 305, 6, 239, 10, 146, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 305, 6, 239, 6, 146, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 405, 0, 346, -54, 301, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 307, -34, -178, -69, -79, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 139, -54, -181, 2, -23, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamageX3_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamageX3_joint10[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 81, -72, -28, 331, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 407, 26, -143, -4, 148, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 407, -27, -143, 5, 148, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -22, -142, -65, 42, 296, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -276, 67, 59, 1, 224, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 367, 36, -59, -7, 116, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamageX3_joint11[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 79, -1, 30, -306, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 396, 22, 151, 9, -29, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 396, -24, 151, -9, -29, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 18, -45, -1, -16, -274, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 179, 23, 73, -59, -165, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 154, 10, -342, -33, -261, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 237, -40, -118, 89, -182, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamageX3_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -324, -62, 313,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -324, -50, -62, -60, 313, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -374, -123, 393,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamageX3_joint14[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -848, -34, -94, 33, -297, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 149, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -951, -7, -358, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -893, 8, -606, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -723, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -895, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 80, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 119, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -635, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -789, 1, 353, -21, -17, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -887, -18, -10, -67, -565, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -562, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -898, 0, -51, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -889, 8, -78, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -848, 13, -94, -5, -297, 88,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamageX3_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDamageX3_joint17[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1667, 18, -1610, 145, 1193, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1781, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1174, 65, 737, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1216, -9, 543, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1177, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 776, 90,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1796, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1474, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1066, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1448, -58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1530, 28, 1094, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1642, 22, -1557, -26, 1314, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1667, 8, -1610, -17, 1193, -40,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamageX3_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 964, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1017, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 935, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 921, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1042, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 910, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 964, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamageX3_joint21[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -2, 127, 29, -363, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 204, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1, 18, -36, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 117, 18, -19, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 189, 42, 151, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 365, 4, 304, 19, 184, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 160, -19, -447, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 53, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 5, 0, 127, -10, -363, 28,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamageX3_joint22[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1477, 88, 1665, -122, 1410, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 936, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1213, 44, 1296, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1209, 19, 1228, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1040, -40, 1324, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 955, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 985, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1275, -51, 1251, 5, 985, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1700, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1337, -16, 1823, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1450, -23, 1737, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1477, -8, 1665, -11, 1410, -108,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamageX3_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 824, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1002, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 855, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 730, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 938, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 887, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 459, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 520, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 824, 101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamageX3_joint25[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, -56, 1325, 173, 1111, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1430, -26, 1845, 82, 1272, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1438, -7, 1822, 1, 1640, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1360, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1736, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1781, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1775, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1180, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1554, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1754, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1577, -59, 1263, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1684, -25, 1376, -41, 1225, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1600, -28, 1325, -17, 1111, -38,
	ftAnimEnd(),
	0x50E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x1700, 0x1000, 0x1000, 0x1000, 0x280F, 0x0001, 0xFFF9, 0xFFFE, 0x024D, 0x0058, 0x005E, 0x000C, 0x1701, 0x0001, 0x1000, 0x1000, 0x1000, 0x400F, 0x0005, 0xFFE0, 0x0211, 0x0045, 0x3F01, 0x0001, 0x1800, 0x1800, 0x1800, 0x3F01, 0x0002, 0x1000, 0x1000, 0x1000, 0x1F01, 0x001A, 0x1000, 0x1000, 0x1000, 0x0801, 0x0002, 0x200F, 0x000B, 0xFFF9, 0xFFE1, 0x024D, 0xFFF7, 0x005E, 0xFFE7, 0x200F, 0x0003, 0xFE19, 0xFFC3, 0x0184, 0xFFE8, 0xFED7, 0xFFBA, 0x200F, 0x0005, 0xFDE5, 0x0031, 0x0177, 0xFFD8, 0xFDFF, 0x001E, 0x380F, 0x0005, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
