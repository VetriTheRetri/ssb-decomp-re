/* AnimJoint data for relocData file 2073 (FTPikachuAnimClangRecoil) */
/* 1408 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimClangRecoil_joint1[30];
extern u16 dFTPikachuAnimClangRecoil_joint2[30];
extern u16 dFTPikachuAnimClangRecoil_joint3[38];
extern u16 dFTPikachuAnimClangRecoil_joint5[22];
extern u16 dFTPikachuAnimClangRecoil_joint6[38];
extern u16 dFTPikachuAnimClangRecoil_joint7[18];
extern u16 dFTPikachuAnimClangRecoil_joint8[38];
extern u16 dFTPikachuAnimClangRecoil_joint9[10];
extern u16 dFTPikachuAnimClangRecoil_joint10[38];
extern u16 dFTPikachuAnimClangRecoil_joint11[38];
extern u16 dFTPikachuAnimClangRecoil_joint13[20];
extern u16 dFTPikachuAnimClangRecoil_joint14[44];
extern u16 dFTPikachuAnimClangRecoil_joint16[14];
extern u16 dFTPikachuAnimClangRecoil_joint17[38];
extern u16 dFTPikachuAnimClangRecoil_joint19[18];
extern u16 dFTPikachuAnimClangRecoil_joint21[48];
extern u16 dFTPikachuAnimClangRecoil_joint22[52];
extern u16 dFTPikachuAnimClangRecoil_joint24[30];
extern u16 dFTPikachuAnimClangRecoil_joint25[48];
extern u16 dFTPikachuAnimClangRecoil_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimClangRecoil_joints[] = {
	(u32)dFTPikachuAnimClangRecoil_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimClangRecoil_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimClangRecoil_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimClangRecoil_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimClangRecoil_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimClangRecoil_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimClangRecoil_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimClangRecoil_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimClangRecoil_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimClangRecoil_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimClangRecoil_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimClangRecoil_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimClangRecoil_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimClangRecoil_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimClangRecoil_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimClangRecoil_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimClangRecoil_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimClangRecoil_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimClangRecoil_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimClangRecoil_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimClangRecoil_joint1[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -225,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 641, 29,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -335,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 641, 21,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 8), -335,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 675,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimClangRecoil_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 248, 115, 102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 365, 10, 203, 8, 139, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 365, -31, 203, -6, 139, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimClangRecoil_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, -2, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 244, 15, 243, 22, -22, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 244, -19, 243, 2, -22, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 125, -51, 257, -48, -77, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimClangRecoil_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 283, -56, 306,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 232, 20, -23, -3, 440, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimClangRecoil_joint6[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 889, 0, 321, -8, -643, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 872, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 45, -44, -783, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -64, 22, -814, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 865, -2, 179, 81, -391, 140,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 865, 179, -391,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimClangRecoil_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimClangRecoil_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -170, 28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 77, -4, -196, -2, 36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 77, 19, -196, 2, 36, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 194, -16, -183, 6, 44, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimClangRecoil_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimClangRecoil_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 20, -201, -18, 177, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 225, -3, -201, 4, 177, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -45, -147, 40, -37, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimClangRecoil_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, 27, 31, 2, -151, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 298, -3, 31, 2, -151, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 259, -59, 61, -6, 7, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimClangRecoil_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -375, -20, 215,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimClangRecoil_joint14[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -826, 0, -214, 20, -564, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -544, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -841, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 54, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 346, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 405, -67, -725, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -819, 7, -58, -154, -492, 77,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -819, -58, -492,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimClangRecoil_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimClangRecoil_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1451, -127, -1183, 14, 898, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 719, -14, -1142, 6, 1197, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 761, 136, -1088, -49, 1298, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1541, 259, -1441, -117, 1062, -78,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1541, -1441, 1062,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimClangRecoil_joint19[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1158, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1046, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 986, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 986,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimClangRecoil_joint21[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 122, -89, 13, -214, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 127, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 232, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 332, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 180, -75,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -167, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -96, -92, -50, -59, -229, -20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, -50, -229,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimClangRecoil_joint22[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1593, 2, 1207, -15, 362, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 203, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1586, -21, 1159, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1723, -24, 1244, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1691, 44, 1308, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 144, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 376, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1464, 75, 1570, 87, 1227, 283,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1464, 1570, 1227,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimClangRecoil_joint24[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1138, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 961, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 990, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 999, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1086, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 932, -51,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 932,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimClangRecoil_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -274, -14, -49, 2, 24, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -21, 5, 168, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -318, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -200, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -245, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -88, 44, 28, 40, -1, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 18, 35, 223, 65, -419, -139,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 223, -419,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimClangRecoil_joint26[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -336, 388, -212,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -324, -20, 411, -14, -194, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -560, 1, 224, -35, -455, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -314, 109, 54, -45, -195, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
