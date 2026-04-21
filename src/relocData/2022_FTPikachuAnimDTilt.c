/* AnimJoint data for relocData file 2022 (FTPikachuAnimDTilt) */
/* 3600 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDTilt_joint1[108];
extern u16 dFTPikachuAnimDTilt_joint2[56];
extern u16 dFTPikachuAnimDTilt_joint3[38];
extern u16 dFTPikachuAnimDTilt_joint5[46];
extern u16 dFTPikachuAnimDTilt_joint6[126];
extern u16 dFTPikachuAnimDTilt_joint7[40];
extern u16 dFTPikachuAnimDTilt_joint8[38];
extern u16 dFTPikachuAnimDTilt_joint9[10];
extern u16 dFTPikachuAnimDTilt_joint10[62];
extern u16 dFTPikachuAnimDTilt_joint11[62];
extern u16 dFTPikachuAnimDTilt_joint13[46];
extern u16 dFTPikachuAnimDTilt_joint14[136];
extern u16 dFTPikachuAnimDTilt_joint16[78];
extern u16 dFTPikachuAnimDTilt_joint17[158];
extern u16 dFTPikachuAnimDTilt_joint19[92];
extern u16 dFTPikachuAnimDTilt_joint21[164];
extern u16 dFTPikachuAnimDTilt_joint22[136];
extern u16 dFTPikachuAnimDTilt_joint24[78];
extern u16 dFTPikachuAnimDTilt_joint25[168];
extern u16 dFTPikachuAnimDTilt_joint26[106];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDTilt_joints[] = {
	(u32)dFTPikachuAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDTilt_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDTilt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDTilt_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDTilt_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDTilt_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDTilt_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDTilt_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDTilt_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDTilt_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDTilt_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDTilt_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDTilt_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimDTilt_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDTilt_joint1[108] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 734, -278,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 73, 749, 24, 186, 1586,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 53, -279, 746, -306, 514, 98,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 117, -175, 117,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, 81, 3481, -122, 4505, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -174, -203, 557, -168, 248, -236,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), -174, -174, 557, 124, 248, -300, 4505, -102, 3481, 153, 4505, -102,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -370, -19, 697, 173, -89, -639,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -63, 4096, 94, 4096, -63,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -192, 310, 709, 29, -310, -151,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 16, 734, -278,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDTilt_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 862, -22, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 778, -27, -22, -1, 7, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 752, -14, -893, -272, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 706, -5, -1383, -97, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 706, 3, -1773, -124, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 739, 12, -2502, -112, 11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 862, -3239, 15,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDTilt_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -171, -8, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -76, -17, 28, -15, 20, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -240, 8, -72, -8, 272, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 46, 3, -90, 2, 242, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -171, -8, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDTilt_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 340, -18, 306,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -12, 37,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 303, 139, 63, 23, 320, -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 410, -9, -6, -68, 276, -61,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 286, -33, -57, 95, 211, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 342, 42, 184, 30, 286, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 340, -18, 306,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDTilt_joint6[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 19, 77, 1, -554, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 135, -49, 12, -218, -830, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -66, -358, -329, -764, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -646, -143, -669, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -646, 41, -754, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -511, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -774, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, 259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 378, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -533, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -439, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 316, -32, -249, 140, -725, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 209, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -980, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 2, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 79, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 94, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -588, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, 2, 77, -2, -554, 34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDTilt_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -705, 430,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -518, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDTilt_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -361, 23, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -613, -18, -12, -53, -2, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -434, -5, -190, -5, 181, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -692, 3, -90, 9, 305, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -361, 23, 32,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDTilt_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDTilt_joint10[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -386, -9, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -347, 9, 185, 47, 210, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -348, -14, 178, -52, 202, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -420, -7, -78, -28, -45, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -420, 20, -78, -31, -45, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -236, 60, -358, -43, -34, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 62, -15, -423, 34, 416, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -386, -9, -11,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDTilt_joint11[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -424, -11, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -322, 24, -212, -48, -215, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -326, 3, -206, 22, -208, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -303, 2, -101, 11, -301, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -303, 21, -101, 0, -301, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -114, 55, -93, 65, -346, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 138, -31, 425, 8, -291, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -424, -11, -12,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDTilt_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -303, -48, 324,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -325, -16, 121, 65, 327, 133,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -311, 48, -15, -26, 390, 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -240, 13, 75, 89, 350, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -284, -50, 163, -99, 423, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -303, -48, 324,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDTilt_joint14[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -64, -17, -187, 268, -574, -264,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 487, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -228, -839, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -521, -117, -1157, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -461, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -317, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 220, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 262, 101, -450, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 423, 78, 308, -144, -322, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 426, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 216, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -167, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 459, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 338, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 8, -166, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -715, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 151, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -153, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1255, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 87, 100, -83, -1025, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -46, -30, -170, -35, -604, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -18, -187, -16, -574, 29,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDTilt_joint16[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, 122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, -466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -987, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -611, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -665, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDTilt_joint17[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1517, 144, -1208, -118, -2998, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1410, -98, -3007, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1661, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1524, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1398, 16, -1524, -4, -2728, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1348, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1558, 125, -2764, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1762, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2699, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1363, -9, -2867, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1596, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2813, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2381, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1701, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1396, -132,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2257, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1721, -144, -1812, 239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1664, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1777, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1849, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1222, 35, -1977, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1468, 132, -1181, 239, -2672, -419,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1260, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1487, -67, -2816, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1288, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2694, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1287, 19, -2729, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1199, -9, -3010, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1353, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1504, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1517, 12, -1208, -9, -2998, 11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDTilt_joint19[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 742, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 583, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, 418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 859, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 577, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDTilt_joint21[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, -130, 265, 10, 46, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 193, 275, 102, 59, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 442, 223, 471, 70, 480, 361,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -15, -320, 282, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -269, -263, 294, 16, 486, -366,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -252, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -542, -117, -78, -414,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -455, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -504, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -39, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -480, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -222, -356, 49, -38, 558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -484, -105, -152, 130, 615, 328,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 230, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -280, 243, -95, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 537, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -537, -532, -413, -333,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -30, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1061, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -911, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -289, 456, 485, 335,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 108, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1, 189, 481, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 72, -24, 286, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, -17, 265, -21, 46, -61,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDTilt_joint22[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 211, -35, 458, -78, -1274, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 304, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, -147, -1195, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, -121, -692, 451,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 146, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 337, -1, -322, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 303, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, -169, -212, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 390, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -699, -74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 374, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 34, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 424, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 421, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1133, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 193, 88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1161, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1262, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 227, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 442, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 454, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, -15, 458, 3, -1274, -11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDTilt_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 721, 101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 150,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -154,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 591, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 639, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 586, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 810, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDTilt_joint25[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 83, 1960, -199, 1657, -199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1411, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1591, 46, 1761, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1602, 137, 1314, -214,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1380, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1866, 351, 1880, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2304, 224, 1976, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2211, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1313, -52, 1592, -235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1476, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1667, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2203, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2206, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1338, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1209, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1712, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1909, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2053, -133, 1174, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1375, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1938, -148, 2087, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1782, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1756, -475,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 524, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1522, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1490, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1224, 501, 1733, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1470, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1950, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1532, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1638, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1472, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1508, 13, 1960, 10, 1657, 18,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDTilt_joint26[106] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -98, -747,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 443, 60, -34, 47, -1638, -38,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 117, 117, 585,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, 81, 4505, 81, 6144, 409,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 623, 19, 235, 30, -1019, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 623, -26, 235, -19, -1019, 33, 4505, -81, 4505, -81, 6144, -409,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -63, 4096, -63, 4096, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 381, -98, 63, 3, -715, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -68, -18, 259, -16, -466, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 200, -98, -747,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
