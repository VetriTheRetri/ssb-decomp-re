/* AnimJoint data for relocData file 1987 (FTPikachuAnimDamaged3) */
/* 1328 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamaged3_joint1[32];
extern u16 dFTPikachuAnimDamaged3_joint2[38];
extern u16 dFTPikachuAnimDamaged3_joint3[28];
extern u16 dFTPikachuAnimDamaged3_joint5[10];
extern u16 dFTPikachuAnimDamaged3_joint6[38];
extern u16 dFTPikachuAnimDamaged3_joint7[16];
extern u16 dFTPikachuAnimDamaged3_joint8[38];
extern u16 dFTPikachuAnimDamaged3_joint9[10];
extern u16 dFTPikachuAnimDamaged3_joint10[38];
extern u16 dFTPikachuAnimDamaged3_joint11[38];
extern u16 dFTPikachuAnimDamaged3_joint13[10];
extern u16 dFTPikachuAnimDamaged3_joint14[38];
extern u16 dFTPikachuAnimDamaged3_joint16[16];
extern u16 dFTPikachuAnimDamaged3_joint17[38];
extern u16 dFTPikachuAnimDamaged3_joint19[24];
extern u16 dFTPikachuAnimDamaged3_joint21[40];
extern u16 dFTPikachuAnimDamaged3_joint22[34];
extern u16 dFTPikachuAnimDamaged3_joint24[20];
extern u16 dFTPikachuAnimDamaged3_joint25[40];
extern u16 dFTPikachuAnimDamaged3_joint26[66];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimDamaged3_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimDamaged3_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDamaged3_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 675, 230, 108, -46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 790, 157, 85, -31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 790, -115, 85, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimDamaged3_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 79, 291, 79, 41, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 339, 22, 451, 7, 319, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 176, -39, 341, -39, -34, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamaged3_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 9, 0, 0, -2, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 26, -2, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimDamaged3_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamaged3_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 236, -48, -202, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -463, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 91, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -268, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -404, 84, -573, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 236, 213, -202, 123,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamaged3_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamaged3_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -12, -163, -2, 20, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -63, -19, -177, 2, -44, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -167, 8, -141, 1, -2, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamaged3_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamaged3_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 44, 0, 14, 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 134, -24, 44, 2, 273, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -205, -14, 23, -4, -41, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamaged3_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 35, 0, -29, 0, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 106, -27, -87, 3, -236, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -235, -11, 25, 9, -48, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamaged3_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamaged3_joint14[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -806, 0, -94, 42, -297, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -393, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -835, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 33, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 397, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 578, -82, -487, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -806, 9, -94, -224, -297, 63,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamaged3_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDamaged3_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 38, -1609, 13, 1201, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1854, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1567, -30, 1320, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1789, -32, 962, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1764, 30, 938, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1666, -62, -1609, 51, 1201, 87,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamaged3_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -126,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 566, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1032, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 946, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 946, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamaged3_joint21[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -24, 127, 12, -353, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -13, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -66, -49, 166, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -292, -20, 23, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -188, 49, 85, 17, -201, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 6, 65, 127, 14, -353, -50,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamaged3_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1479, -16, 1665, -3, 1416, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1536, 17, 1653, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1474, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1670, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1493, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1479, 19, 1665, 3, 1416, -25,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamaged3_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 623, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 768, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 807, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamaged3_joint25[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -24, 284, 93, -484, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -80, 0, 564, -38, -589, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -12, 55, -110, -427, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -153, 0, -98, 38, -309, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -6, 49, 284, 127, -484, -58,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDamaged3_joint26[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -14, 0, -3, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -14, 17, 0, 2, -3, -33, 4096, 1228, 4096, 1228, 4096, 1228,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 56, -10, 10, -1, -138, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 5324, 5324,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -245, 4096, -245, 4096, -245,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -93, -8, -11, -1, 172, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 0, -3,
	ftAnimEnd(),
	0x0000,
};
