/* AnimJoint data for relocData file 1958 (FTPikachuAnimWalk1) */
/* 1712 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimWalk1_joint1[54];
extern u16 dFTPikachuAnimWalk1_joint2[34];
extern u16 dFTPikachuAnimWalk1_joint3[56];
extern u16 dFTPikachuAnimWalk1_joint5[12];
extern u16 dFTPikachuAnimWalk1_joint6[44];
extern u16 dFTPikachuAnimWalk1_joint7[16];
extern u16 dFTPikachuAnimWalk1_joint8[12];
extern u16 dFTPikachuAnimWalk1_joint9[12];
extern u16 dFTPikachuAnimWalk1_joint10[64];
extern u16 dFTPikachuAnimWalk1_joint11[64];
extern u16 dFTPikachuAnimWalk1_joint13[12];
extern u16 dFTPikachuAnimWalk1_joint14[56];
extern u16 dFTPikachuAnimWalk1_joint16[16];
extern u16 dFTPikachuAnimWalk1_joint17[46];
extern u16 dFTPikachuAnimWalk1_joint19[24];
extern u16 dFTPikachuAnimWalk1_joint21[58];
extern u16 dFTPikachuAnimWalk1_joint22[68];
extern u16 dFTPikachuAnimWalk1_joint24[24];
extern u16 dFTPikachuAnimWalk1_joint25[74];
extern u16 dFTPikachuAnimWalk1_joint26[58];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimWalk1_joints[] = {
	(u32)dFTPikachuAnimWalk1_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimWalk1_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimWalk1_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimWalk1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimWalk1_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimWalk1_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimWalk1_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimWalk1_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimWalk1_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimWalk1_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimWalk1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimWalk1_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimWalk1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimWalk1_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimWalk1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimWalk1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimWalk1_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimWalk1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimWalk1_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimWalk1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimWalk1_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 637, 56, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ), -26, 33, -23, 49, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 669, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 3891,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 6), 4096, 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 637, 56,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 12), 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), -23,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 669, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 3891,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 5), 4096, 23,
	ftAnimSetValT(FT_ANIM_SCAY, 12), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 637, 56,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimWalk1_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -39, 26,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 28, -37, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 25, 0, -39, 0, 26, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 21, -42, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 25, -39, 26,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimWalk1_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -12, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1, -2, -12, 0, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -54, 0, -11, 0, -11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -12, 4, -12, 0, -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1, -3, -12, 0, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -63, 0, -4, 0, -11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -12, -12, -12,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimWalk1_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 317, -118, 351,
	ftAnimBlock(0, 45),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimWalk1_joint6[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 0, 0, -431, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 42), 804, 0, 5, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -336, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -491, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -279, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -388, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -444, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, -3, -3, -431, 4,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimWalk1_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimWalk1_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -1, 194, 148,
	ftAnimBlock(0, 45),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimWalk1_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 45),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimWalk1_joint10[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -25, 114,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -202, 0, -23, 0, 19, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -205, -1, -25, 0, -8, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, 1, -24, 0, -34, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -202, 1, -23, 0, 19, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -195, 0, -28, 0, 275, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -195, 0, -28, 0, 275, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -199, -25, 114,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimWalk1_joint11[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 94, -119,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -93, 0, 94, 0, -119, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -87, 0, 76, -1, 123, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, -3, 77, 0, 154, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -98, 3, 77, 0, 159, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, 0, 76, 1, 123, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -93, 0, 94, 1, -119, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -93, 94, -119,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimWalk1_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -325, -103, 361,
	ftAnimBlock(0, 45),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimWalk1_joint14[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 153, 0, -409, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 180, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -284, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -435, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -275, -16,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 184, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 155, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -392, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -447, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 0, 153, 0, -409, 12,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimWalk1_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTPikachuAnimWalk1_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1650, -6, -1325, -6, 841, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1195, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), -1316, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -1650, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1704, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1644, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1212, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 822, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1650, -1, -1325, -3, 841, 6,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimWalk1_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1003, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1049, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1064, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1050, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1003, -15,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTPikachuAnimWalk1_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, -10, 113, -11, -37, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -2, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -381, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -295, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -24, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 25, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 75, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 111, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 161, 0, -109, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 68, -2, 113, -15, -37, 23,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimWalk1_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 0, 292, 9, -366, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 294, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -147, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -735, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -844, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -625, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 210, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 273, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -135, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -19, 23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -548, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -407, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 36, 18, 292, 6, -366, 13,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimWalk1_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1005, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1070, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1024, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1023, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1005, -6,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTPikachuAnimWalk1_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, -4, -80, -13, -389, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 89, -14, -100, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -105, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -130, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -30, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 50, -4, -30, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 239, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -25, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -388, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -31, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -45, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 201, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 172, -9, -80, -11, -389, 0,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimWalk1_joint26[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -82, 582, -59,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -203, 2, 569, 0, -168, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -40, 8, 586, 0, -20, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -82, -14, 582, -1, -59, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -203, 2, 569, 0, -168, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -40, 8, 586, 0, -20, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -82, 582, -59,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
	0x0000, 0x0000,
};
