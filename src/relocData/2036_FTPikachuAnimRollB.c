/* AnimJoint data for relocData file 2036 (FTPikachuAnimRollB) */
/* 1968 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimRollB_joint1[98];
extern u16 dFTPikachuAnimRollB_joint2[60];
extern u16 dFTPikachuAnimRollB_joint3[30];
extern u16 dFTPikachuAnimRollB_joint4[38];
extern u16 dFTPikachuAnimRollB_joint6[30];
extern u16 dFTPikachuAnimRollB_joint7[64];
extern u16 dFTPikachuAnimRollB_joint8[22];
extern u16 dFTPikachuAnimRollB_joint9[30];
extern u16 dFTPikachuAnimRollB_joint10[10];
extern u16 dFTPikachuAnimRollB_joint11[30];
extern u16 dFTPikachuAnimRollB_joint12[30];
extern u16 dFTPikachuAnimRollB_joint14[30];
extern u16 dFTPikachuAnimRollB_joint15[74];
extern u16 dFTPikachuAnimRollB_joint17[22];
extern u16 dFTPikachuAnimRollB_joint18[62];
extern u16 dFTPikachuAnimRollB_joint20[16];
extern u16 dFTPikachuAnimRollB_joint22[66];
extern u16 dFTPikachuAnimRollB_joint23[78];
extern u16 dFTPikachuAnimRollB_joint25[32];
extern u16 dFTPikachuAnimRollB_joint26[108];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimRollB_joints[] = {
	(u32)dFTPikachuAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimRollB_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimRollB_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimRollB_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimRollB_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimRollB_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimRollB_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimRollB_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimRollB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimRollB_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimRollB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimRollB_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimRollB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimRollB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimRollB_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimRollB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimRollB_joint26, /* [25] joint 26 */
	0xFFFF01D7, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimRollB_joint1[98] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -266, 65,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3909,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -1310, -2165,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -232, -1133, 57, -197,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -147, -262,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -283, -389,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 23), -4440, -309,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), -378, -204,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), -378, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -366, 54, -151, 255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -353, 57, -51, 343,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -339, 84, 5, 101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -294, 207, 24, -4,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 0, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -75, 280,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, 120,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), -4440,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimRollB_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 33, -28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -561, -311,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 699, -267, -204, -881,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 508, -256, -442, -576,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -644,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -6461, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 603, 669, -420, 2204,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 675, 288, 108, 2115,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 675, 108,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 675, 108,
	ftAnimBlock(0, 18),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -6461,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimRollB_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 149, 9, -51, -7, 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 241, -4, -47, 6, 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimRollB_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 278, 12, 11, 0, -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 278, -11, 11, 0, -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, -34, 0, -1, -2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimRollB_joint6[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 239, -28, -123, -20, 416, 34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 239, 23, -123, 16, 416, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimRollB_joint7[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 236, 26, -202, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 406, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -513, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -481, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 413, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 284, -26,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -206, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 239, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 240, 1, -202, 3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimRollB_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimRollB_joint9[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 304, 12, 1, 6, 28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 304, -10, 1, -5, 28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimRollB_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimRollB_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 132, 5, 8, 0, -330, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 132, -4, 8, 0, -330, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimRollB_joint12[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 104, 4, -53, -2, 378, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 104, -3, -53, 1, 378, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimRollB_joint14[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -223, 34, -130, -23, 458, 48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -223, -27, -130, 18, 458, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimRollB_joint15[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1707, 41, 1311, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1121, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1900, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2043, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2144, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1295, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2155, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 2043, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2001, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1713, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1309, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1707, -6, 1311, 1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimRollB_joint17[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimRollB_joint18[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, -68, -1609, 186, 1201, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1654, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 1197, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1124, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1115, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1124, -11,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1654, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1592, 32,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1140, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1577, -55,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1562, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 12, -1609, -31, 1201, 4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimRollB_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 948, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimRollB_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -74, 127, 23, -353, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 173, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -340, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -193, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -146, 24,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 173, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 133, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -5, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 11, 127, -5, -353, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimRollB_joint23[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1737, 61, 1665, -158, -1800, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2093, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1718, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1219, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1211, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1219, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2109, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -2076, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1711, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1809, 14,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1236, 25, -2046, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1639, 47, -1807, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1816, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1750, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, -12, 1665, 26, -1800, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimRollB_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1007, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 986, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 819, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimRollB_joint26[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 36, 284, -220, -484, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -335, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 77, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -166, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -156, 15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -467, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 3, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -135, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 242, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -10, 284, 42, -484, -16,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0003, 0xFFCF, 0x001C, 0xFF7D, 0xFFE7, 0xFF2D, 0xFFAE, 0x200F, 0x0003, 0x009C, 0x0009, 0xFF68, 0xFFFF, 0xFE0F, 0xFFF3, 0x200F, 0x0012, 0x009C, 0xFFFA, 0xFF68, 0x0005, 0xFE0F, 0x0012, 0x380F, 0x0008, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
