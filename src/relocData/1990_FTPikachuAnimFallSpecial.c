/* AnimJoint data for relocData file 1990 (FTPikachuAnimFallSpecial) */
/* 1008 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimFallSpecial_joint1[12];
extern u16 dFTPikachuAnimFallSpecial_joint2[32];
extern u16 dFTPikachuAnimFallSpecial_joint3[20];
extern u16 dFTPikachuAnimFallSpecial_joint5[12];
extern u16 dFTPikachuAnimFallSpecial_joint6[30];
extern u16 dFTPikachuAnimFallSpecial_joint7[20];
extern u16 dFTPikachuAnimFallSpecial_joint8[32];
extern u16 dFTPikachuAnimFallSpecial_joint9[12];
extern u16 dFTPikachuAnimFallSpecial_joint10[12];
extern u16 dFTPikachuAnimFallSpecial_joint11[12];
extern u16 dFTPikachuAnimFallSpecial_joint13[12];
extern u16 dFTPikachuAnimFallSpecial_joint14[30];
extern u16 dFTPikachuAnimFallSpecial_joint16[20];
extern u16 dFTPikachuAnimFallSpecial_joint17[30];
extern u16 dFTPikachuAnimFallSpecial_joint19[20];
extern u16 dFTPikachuAnimFallSpecial_joint21[30];
extern u16 dFTPikachuAnimFallSpecial_joint22[30];
extern u16 dFTPikachuAnimFallSpecial_joint24[20];
extern u16 dFTPikachuAnimFallSpecial_joint25[30];
extern u16 dFTPikachuAnimFallSpecial_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimFallSpecial_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimFallSpecial_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimFallSpecial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 53, 37, -23, -1, 561, 116,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimFallSpecial_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, -34, 51,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 5, -33, 0, 51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 229, 3, -35, 0, 51, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 199, -34, 51,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimFallSpecial_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 161, -14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, 324, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -58, 161, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -15, 161, -14,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTPikachuAnimFallSpecial_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 167, -81, 457,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimFallSpecial_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 915, 3, 135, -2, -592, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 924, 0, 128, 0, -536, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 913, -3, 136, 2, -603, -22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 913, 136, -603,
	ftAnimLoop(0x6800, -58),
};

/* Joint 7 */
u16 dFTPikachuAnimFallSpecial_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimFallSpecial_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 175, -172, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 210, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 205, 7, -172, 0, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 219, -4, -172, 0, -13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 175, -172, -13,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimFallSpecial_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimFallSpecial_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -201, 52, 117, 254, 357, 37,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimFallSpecial_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -166, -144, -146, -255, 357, 37,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimFallSpecial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -405, -57, 231,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimFallSpecial_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 13, 1483, 1, 1134, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 819, -1, 1489, 0, 1187, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 773, -15, 1478, -3, 1125, -20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 773, 1478, 1125,
	ftAnimLoop(0x6800, -58),
};

/* Joint 16 */
u16 dFTPikachuAnimFallSpecial_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimFallSpecial_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, -8, -318, 0, 2150, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -82, 1, -319, 1, 2197, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -49, 11, -307, 3, 2130, -22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -49, -307, 2130,
	ftAnimLoop(0x6800, -58),
};

/* Joint 19 */
u16 dFTPikachuAnimFallSpecial_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 530, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 503, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 513, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 513,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimFallSpecial_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 8, 128, 1, 185, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 17, 1, 133, -1, 279, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -6, 116, -5, 222, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 116, 222,
	ftAnimLoop(0x6800, -58),
};

/* Joint 22 */
u16 dFTPikachuAnimFallSpecial_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, 9, 326, 1, -1171, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 69, 0, 330, -1, -1109, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 42, -8, 315, -5, -1182, -24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 42, 315, -1182,
	ftAnimLoop(0x6800, -58),
};

/* Joint 24 */
u16 dFTPikachuAnimFallSpecial_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 603, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 569, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 580, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 580,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimFallSpecial_joint25[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, -1, -123, 1, 185, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, -1, -118, 2, 267, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, -1, -110, 2, 222, -14,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -66, -110, 222,
	ftAnimLoop(0x6800, -58),
};

/* Joint 26 */
u16 dFTPikachuAnimFallSpecial_joint26[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -246, 608, -324,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -234, 21, 611, 3, -313, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -94, -1, 634, 0, -180, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 608, -324,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
