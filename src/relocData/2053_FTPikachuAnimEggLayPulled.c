/* AnimJoint data for relocData file 2053 (FTPikachuAnimEggLayPulled) */
/* 880 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimEggLayPulled_joint1[10];
extern u16 dFTPikachuAnimEggLayPulled_joint2[12];
extern u16 dFTPikachuAnimEggLayPulled_joint3[14];
extern u16 dFTPikachuAnimEggLayPulled_joint4[22];
extern u16 dFTPikachuAnimEggLayPulled_joint6[14];
extern u16 dFTPikachuAnimEggLayPulled_joint7[32];
extern u16 dFTPikachuAnimEggLayPulled_joint8[20];
extern u16 dFTPikachuAnimEggLayPulled_joint9[22];
extern u16 dFTPikachuAnimEggLayPulled_joint10[10];
extern u16 dFTPikachuAnimEggLayPulled_joint11[10];
extern u16 dFTPikachuAnimEggLayPulled_joint12[14];
extern u16 dFTPikachuAnimEggLayPulled_joint14[14];
extern u16 dFTPikachuAnimEggLayPulled_joint15[32];
extern u16 dFTPikachuAnimEggLayPulled_joint17[16];
extern u16 dFTPikachuAnimEggLayPulled_joint18[24];
extern u16 dFTPikachuAnimEggLayPulled_joint20[16];
extern u16 dFTPikachuAnimEggLayPulled_joint22[24];
extern u16 dFTPikachuAnimEggLayPulled_joint23[24];
extern u16 dFTPikachuAnimEggLayPulled_joint25[16];
extern u16 dFTPikachuAnimEggLayPulled_joint26[40];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimEggLayPulled_joints[] = {
	(u32)dFTPikachuAnimEggLayPulled_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimEggLayPulled_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimEggLayPulled_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimEggLayPulled_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimEggLayPulled_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimEggLayPulled_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimEggLayPulled_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimEggLayPulled_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimEggLayPulled_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimEggLayPulled_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimEggLayPulled_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimEggLayPulled_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimEggLayPulled_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimEggLayPulled_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimEggLayPulled_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimEggLayPulled_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimEggLayPulled_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimEggLayPulled_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimEggLayPulled_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimEggLayPulled_joint26, /* [25] joint 26 */
	0xFFFF00D4, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimEggLayPulled_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 900, 600,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimEggLayPulled_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 33, -28, 0, -224, -491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -26,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimEggLayPulled_joint3[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 181, -30, 24,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimEggLayPulled_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, -126, 56, 72, -9, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -392, 217, -31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimEggLayPulled_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 494, -86, -53,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimEggLayPulled_joint7[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -414, -1845, 720, 1406, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1214, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1125, 486, 1450, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -872, 315, 1379, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -724, 490, -493, 378, 542, -836,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimEggLayPulled_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, -803,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimEggLayPulled_joint9[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 30, 99, 177, -10, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, 367, 71,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimEggLayPulled_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimEggLayPulled_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 254, 357, 37,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimEggLayPulled_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 296, -440, -322,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimEggLayPulled_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -439, -24, 180,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimEggLayPulled_joint15[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 45, 1703, -600, -1905, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2367, -407, 1102, -391, -2264, -587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3228, -682, 919, -97, -3079, -681,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3732, -503, 907, -12, -3626, -546,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimEggLayPulled_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimEggLayPulled_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 24, -1609, 66, 1201, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1755, 49, -1409, 102, 1262, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1791, 35, -1337, 72, 1294, 31,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimEggLayPulled_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1015, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimEggLayPulled_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -88, -1736, 6, 1255, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1847, -113, -1716, 10, 1333, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1917, -69, -1708, 7, 1361, 28,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimEggLayPulled_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, -63, -57, 43, -192, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 9, -18, 94, 81, 91, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, 19, 150, 56, 233, 141,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimEggLayPulled_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 608, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimEggLayPulled_joint26[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1601, 113, -1893, 42, 1124, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1786, 23, -1752, 69, 1537, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, -23, -1712, 40, 1609, 71,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x380F, 0x0003, 0xFE45, 0x01C4, 0xFE84, 0x0000, 0x0000, 0x0000,
};
