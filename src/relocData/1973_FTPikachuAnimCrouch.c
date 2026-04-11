/* AnimJoint data for relocData file 1973 (FTPikachuAnimCrouch) */
/* 1152 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCrouch_joint1[22];
extern u16 dFTPikachuAnimCrouch_joint2[30];
extern u16 dFTPikachuAnimCrouch_joint3[22];
extern u16 dFTPikachuAnimCrouch_joint5[16];
extern u16 dFTPikachuAnimCrouch_joint6[38];
extern u16 dFTPikachuAnimCrouch_joint7[22];
extern u16 dFTPikachuAnimCrouch_joint8[26];
extern u16 dFTPikachuAnimCrouch_joint9[10];
extern u16 dFTPikachuAnimCrouch_joint10[14];
extern u16 dFTPikachuAnimCrouch_joint11[14];
extern u16 dFTPikachuAnimCrouch_joint13[14];
extern u16 dFTPikachuAnimCrouch_joint14[38];
extern u16 dFTPikachuAnimCrouch_joint16[24];
extern u16 dFTPikachuAnimCrouch_joint17[40];
extern u16 dFTPikachuAnimCrouch_joint19[24];
extern u16 dFTPikachuAnimCrouch_joint21[40];
extern u16 dFTPikachuAnimCrouch_joint22[40];
extern u16 dFTPikachuAnimCrouch_joint24[24];
extern u16 dFTPikachuAnimCrouch_joint25[66];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimCrouch_joints[] = {
	(u32)dFTPikachuAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCrouch_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCrouch_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCrouch_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCrouch_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCrouch_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimCrouch_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimCrouch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimCrouch_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimCrouch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimCrouch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimCrouch_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimCrouch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimCrouch_joint25, /* [24] joint 25 */
	0xFFFF0113, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimCrouch_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 14, 33, 792, 117, -218, -773,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 16, 734, -278,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimCrouch_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 521, 391, 72, -64, 62, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 806, 113, 3, -31, 20, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 862, -22, 15,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimCrouch_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -146, -39, -7, -2, -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -171, -8, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimCrouch_joint5[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -12, -12, 37, 340, -18, 306,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCrouch_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -314, 236, 38, -202, -377,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 221, -176, -663, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -62, 11, -15, -473, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, -39, 77, 65, -554, -80,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCrouch_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, -39,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimCrouch_joint8[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -2, -163, 20, -1, 194, 148,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -305, -89, -12, 46, 30, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -361, 23, 32,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCrouch_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCrouch_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -386, -9, -11,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCrouch_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -424, -11, -12,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimCrouch_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -303, -48, 324,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCrouch_joint14[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 199, 1703, 40, -1905, -343,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1709, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2213, 279, -2249, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1853, 247, -2214, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1718, 90, -2064, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1673, 44, 1795, 86, -2183, -118,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimCrouch_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCrouch_joint17[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -126, -1609, 224, 1201, -549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1540, -249, -1385, 239, 652, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1168, -47, -1130, 90, 568, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1446, 174, -1204, -39, 323, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1517, 70, -1208, -4, 218, -104,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimCrouch_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimCrouch_joint21[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -26, 127, 123, -353, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 99, 250, 165, -170, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 36, 458, 18, 160, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -75, 287, -96, 61, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 2, 265, -22, 46, -14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCrouch_joint22[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, -57, -57, 251, -192, -620,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 437, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 71, 152, -812, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 433, 114, -933, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, -110, 436, 10, -1138, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, -88, 458, 21, -1274, -135,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimCrouch_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCrouch_joint25[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1615, 49, -1893, 226, 1124, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, -37, -1666, 349, 1269, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1689, -62, -1193, 214, 1618, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1689, -9, -1237, -31, 1660, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1708, -19, -1256, -18, 1657, -3,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0001, 0x0048, 0x0035, 0xFFA7, 0xFFE8, 0xFEA1, 0xFF47, 0x380F, 0x0003, 0x00C8, 0xFF9E, 0xFD15, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
