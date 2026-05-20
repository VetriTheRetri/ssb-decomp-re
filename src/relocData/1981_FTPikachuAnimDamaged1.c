/* AnimJoint data for relocData file 1981 (FTPikachuAnimDamaged1) */
/* 1312 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamaged1_joint1[10];
extern u16 dFTPikachuAnimDamaged1_joint2[38];
extern u16 dFTPikachuAnimDamaged1_joint3[46];
extern u16 dFTPikachuAnimDamaged1_joint5[10];
extern u16 dFTPikachuAnimDamaged1_joint6[38];
extern u16 dFTPikachuAnimDamaged1_joint7[16];
extern u16 dFTPikachuAnimDamaged1_joint8[46];
extern u16 dFTPikachuAnimDamaged1_joint9[10];
extern u16 dFTPikachuAnimDamaged1_joint10[52];
extern u16 dFTPikachuAnimDamaged1_joint11[52];
extern u16 dFTPikachuAnimDamaged1_joint13[10];
extern u16 dFTPikachuAnimDamaged1_joint14[34];
extern u16 dFTPikachuAnimDamaged1_joint16[14];
extern u16 dFTPikachuAnimDamaged1_joint17[34];
extern u16 dFTPikachuAnimDamaged1_joint19[16];
extern u16 dFTPikachuAnimDamaged1_joint21[24];
extern u16 dFTPikachuAnimDamaged1_joint22[38];
extern u16 dFTPikachuAnimDamaged1_joint24[24];
extern u16 dFTPikachuAnimDamaged1_joint25[38];
extern u16 dFTPikachuAnimDamaged1_joint26[54];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimDamaged1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDamaged1_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 675, 108,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDamaged1_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -86, 126, -10, -19, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -314, -42, 102, -5, -69, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -314, 37, 102, 3, -69, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 20, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamaged1_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -134, -66, -6, -5, -42, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -228, -13, -17, -1, -72, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -228, 26, -17, 2, -72, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 50, 0, 4, -2, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamaged1_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamaged1_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 769, 3, 236, -106, -202, -176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 769, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -82, -25, -732, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 83, 48, -526, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 210, 25, -293, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 769, 0, 236, 8, -202, 30,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamaged1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamaged1_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, -82, 260, 196, 123, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -365, -49, 425, -35, -43, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -350, 57, 23, -75, -80, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 55, 81, -124, -43, -2, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamaged1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamaged1_joint10[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -30, 0, 83, 0, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -90, 251, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 15, 0, -43, 0, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 9, 13, -25, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 85, -3, 0, 9, 2, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimDamaged1_joint11[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 38, 0, -67, 0, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 116, -203, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -19, 0, 34, 0, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -11, 14, 20, 2, 27, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 86, 4, 14, -7, 27, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimDamaged1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -324, -62, 313,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamaged1_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -823, -28, -94, 3, -297, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -842, 10, -105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -875, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -640, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -383, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -823, 6, -99, 2, -297, 28,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamaged1_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDamaged1_joint17[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 17, -1608, 34, 1205, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1692, -8, -1587, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1584, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1536, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1329, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1666, -8, -1608, -6, 1205, -41,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamaged1_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 945, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 942, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 945, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamaged1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -6, 128, -3, -353, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 3, 111, 2, -377, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 7, 2, 128, 5, -353, 8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamaged1_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1480, -21, 1666, 42, 1419, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1777, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1488, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1840, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1779, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1705, -18, 1546, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1480, 2, 1666, -12, 1419, -42,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamaged1_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 806, -87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 544, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 585, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 733, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 806, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamaged1_joint25[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1603, 72, -1893, -11, 1124, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1259, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1896, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1820, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1775, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1653, -28, 1167, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1603, -16, -1893, 0, 1124, -14,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDamaged1_joint26[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 27, 0, 0, -3, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, -76, -2, -14, 23, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -322, -49, -59, -1, 66, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -165, 43, -9, 10, -51, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -90, 35, -3, 2, -28, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -14, 0, -3,
	ftAnimEnd(),
};
