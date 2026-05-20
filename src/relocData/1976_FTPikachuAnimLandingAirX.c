/* AnimJoint data for relocData file 1976 (FTPikachuAnimLandingAirX) */
/* 1904 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimLandingAirX_joint1[74];
extern u16 dFTPikachuAnimLandingAirX_joint2[38];
extern u16 dFTPikachuAnimLandingAirX_joint3[38];
extern u16 dFTPikachuAnimLandingAirX_joint5[34];
extern u16 dFTPikachuAnimLandingAirX_joint6[54];
extern u16 dFTPikachuAnimLandingAirX_joint7[40];
extern u16 dFTPikachuAnimLandingAirX_joint8[58];
extern u16 dFTPikachuAnimLandingAirX_joint9[10];
extern u16 dFTPikachuAnimLandingAirX_joint10[30];
extern u16 dFTPikachuAnimLandingAirX_joint11[30];
extern u16 dFTPikachuAnimLandingAirX_joint13[30];
extern u16 dFTPikachuAnimLandingAirX_joint14[68];
extern u16 dFTPikachuAnimLandingAirX_joint16[38];
extern u16 dFTPikachuAnimLandingAirX_joint17[56];
extern u16 dFTPikachuAnimLandingAirX_joint19[32];
extern u16 dFTPikachuAnimLandingAirX_joint21[66];
extern u16 dFTPikachuAnimLandingAirX_joint22[60];
extern u16 dFTPikachuAnimLandingAirX_joint24[32];
extern u16 dFTPikachuAnimLandingAirX_joint25[62];
extern u16 dFTPikachuAnimLandingAirX_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimLandingAirX_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirX_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimLandingAirX_joint1[74] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 16, 734, -278, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 474, -243,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 17, -294, 4915, 2457, 5324,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -234, 4096, 468, 4096, -351,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 16, -18, 673, 772, -278, 293,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 12, -16, 668, -21, -221, 228,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 12, -25, 668, 15, -221, 659,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -25, 675, 15, 108, 659,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimLandingAirX_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 862, -22, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 862, -78, -22, -3, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 549, -167, -35, 31, 18, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 23, -131, 133, 42, 32, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimLandingAirX_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -171, -8, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -171, 19, -8, 2, -3, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -91, 4, 1, -2, -16, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, 19, -16, 0, -13, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimLandingAirX_joint5[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -12, -12, 37, 340, -18, 306,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 340, 6, -18, -243, 306, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 344, -21, -170, -58, 318, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimLandingAirX_joint6[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 170, 15, 33, 39, -566, -261,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 91, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 504, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -756, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 56, -248, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 242, 15, -168, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 726, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 849, 123, 236, -5, -202, -34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimLandingAirX_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -705, 695,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimLandingAirX_joint8[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -361, 23, 32, -1, 194, 148,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -361, 62, 23, -5, 32, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, 252, 8, -2, 21, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 269, 19, -10, 10, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, 57, -12, -47, 65, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -122, -74, -50, 24, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimLandingAirX_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimLandingAirX_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -386, -9, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 302, 67, -14, -2, -354, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 83, -75, -27, 3, -246, 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimLandingAirX_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -424, -11, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 58, 62, 287, 10, 321, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 13, -14, 65, -71, 217, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimLandingAirX_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -303, -48, 324,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -303, 21, -48, -207, 324, -121,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -289, -27, -178, -18, 247, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimLandingAirX_joint14[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, 67, -212, 63, -572, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, -26, -149, -33, -845, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -82, -280, -2, -509, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -168, -127, -112, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -371, -204, -164, -12, -340, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -746, -114, -96, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -806, -59, -94, 1, -297, -25,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimLandingAirX_joint16[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, 621,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimLandingAirX_joint17[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1517, 238, -1208, 15, 218, -355,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1482, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1756, -16, -136, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, -8, 276, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1738, 126, 277, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1738, -25, 362, 173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1647, 7, 1198, 131,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1572, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 19, -1609, -36, 1201, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimLandingAirX_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 742, 254,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 935, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 946, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimLandingAirX_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 35, 265, -9, 46, -251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 26, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 197, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -160, -80, -162, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -132, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -352, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 169, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -34, 127, -41, -353, -1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimLandingAirX_joint22[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1396, 214, 1150, 75, 334, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1151, -236, 1330, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1655, -284, 1175, -63, 314, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1478, 74, 1460, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1422, 137,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1460, 0, 1640, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, -18, 1665, 25, 1416, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimLandingAirX_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 721, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 811, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimLandingAirX_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -100, -198, -351, 58, 48, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -298, -31, -293, -13, 62, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, 179, -379, -10, 211, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 57, -314, 42, -154, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, -35, -293, 83, -88, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 26, -6, 254, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -434, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -33, 284, 30, -484, 8,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimLandingAirX_joint26[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -98, -747,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 246, -31, -350, -33, -857, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 73, -71, -233, 70, -668, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -39, -36, -70, 59, -285, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 12, -55, 34, -109, 141,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
