/* AnimJoint data for relocData file 1984 (FTPikachuAnimDamageX1) */
/* 1328 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamageX1_joint1[32];
extern u16 dFTPikachuAnimDamageX1_joint2[38];
extern u16 dFTPikachuAnimDamageX1_joint3[38];
extern u16 dFTPikachuAnimDamageX1_joint5[10];
extern u16 dFTPikachuAnimDamageX1_joint6[38];
extern u16 dFTPikachuAnimDamageX1_joint7[16];
extern u16 dFTPikachuAnimDamageX1_joint8[38];
extern u16 dFTPikachuAnimDamageX1_joint9[10];
extern u16 dFTPikachuAnimDamageX1_joint10[46];
extern u16 dFTPikachuAnimDamageX1_joint11[46];
extern u16 dFTPikachuAnimDamageX1_joint13[10];
extern u16 dFTPikachuAnimDamageX1_joint14[38];
extern u16 dFTPikachuAnimDamageX1_joint16[16];
extern u16 dFTPikachuAnimDamageX1_joint17[38];
extern u16 dFTPikachuAnimDamageX1_joint19[20];
extern u16 dFTPikachuAnimDamageX1_joint21[40];
extern u16 dFTPikachuAnimDamageX1_joint22[40];
extern u16 dFTPikachuAnimDamageX1_joint24[20];
extern u16 dFTPikachuAnimDamageX1_joint25[40];
extern u16 dFTPikachuAnimDamageX1_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimDamageX1_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimDamageX1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDamageX1_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 681, 6, -18, -144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 681, -3, -18, 156,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 678, -8, 144, 190,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimDamageX1_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 66, 264, 54, 88, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 16, 241, -4, 135, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 155, -13, 241, -10, 135, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamageX1_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, 114, -5, -14, 45, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, 15, -29, -4, 76, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 215, -22, -29, 2, 76, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamageX1_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamageX1_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 236, -18, -202, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 181, -3, -711, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 215, -23, -628, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 37, 3, -611, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 236, 66, -202, 136,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamageX1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamageX1_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 120, -166, -6, 20, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, 27, -176, -1, 83, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 237, -24, -176, 1, 83, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamageX1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamageX1_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 69, 0, -31, 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 9, -95, -4, 275, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 73, -5, -33, 8, 96, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 168, -20, -32, 9, 35, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamageX1_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 110, 0, -21, 0, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 330, 15, -64, -3, -249, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 116, -13, -22, 7, -87, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 230, -32, -12, 6, -25, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamageX1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamageX1_joint14[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -811, -9, -94, 16, -297, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 20, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -826, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -659, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -505, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 347, -19, -442, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -811, 5, -94, -147, -297, 48,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamageX1_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDamageX1_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -151, -1609, 61, 1201, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1432, -30, 1023, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1213, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1232, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1627, 72, -1610, -29, 1150, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1666, 13, -1609, 0, 1201, 17,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamageX1_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 820, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 895, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 946, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamageX1_joint21[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 193, 127, 97, -353, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 588, 93, 420, 49, 287, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 568, -90, 422, -33, 270, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 42, -93, 221, -49, -310, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 6, -12, 127, -31, -353, -14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamageX1_joint22[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1479, -154, 1665, 63, 1416, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1941, -38, 1857, 0, 924, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1710, 74, 1664, -34, 952, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1493, 38, 1653, 0, 1393, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1479, 4, 1665, 4, 1416, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamageX1_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1077, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 826, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 807, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamageX1_joint25[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1601, 275, -1893, -65, 1124, 309,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2159, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2428, 56, 2052, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1938, -139, 1509, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1593, -56, -1975, 44, 1058, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1601, 2, -1893, 27, 1124, 21,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDamageX1_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 20, -30, -20, -48, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 46, 1, -62, 1, 34, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -174, -6, -17, 6, -71, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 0, -3,
	ftAnimEnd(),
};
