/* AnimJoint data for relocData file 1451 (FTPurinAnimAttackAirU) */
/* 3600 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimAttackAirU_joint1[10];
extern u16 dFTPurinAnimAttackAirU_joint2[32];
extern u16 dFTPurinAnimAttackAirU_joint3[90];
extern u16 dFTPurinAnimAttackAirU_joint5[88];
extern u16 dFTPurinAnimAttackAirU_joint6[294];
extern u16 dFTPurinAnimAttackAirU_joint7[44];
extern u16 dFTPurinAnimAttackAirU_joint9[96];
extern u16 dFTPurinAnimAttackAirU_joint10[248];
extern u16 dFTPurinAnimAttackAirU_joint11[42];
extern u16 dFTPurinAnimAttackAirU_joint13[16];
extern u16 dFTPurinAnimAttackAirU_joint14[154];
extern u16 dFTPurinAnimAttackAirU_joint16[34];
extern u16 dFTPurinAnimAttackAirU_joint18[180];
extern u16 dFTPurinAnimAttackAirU_joint19[188];
extern u16 dFTPurinAnimAttackAirU_joint21[240];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimAttackAirU_joints[] = {
	(u32)dFTPurinAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimAttackAirU_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimAttackAirU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimAttackAirU_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimAttackAirU_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimAttackAirU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimAttackAirU_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimAttackAirU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimAttackAirU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimAttackAirU_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimAttackAirU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0323, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimAttackAirU_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimAttackAirU_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -804, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -804, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -682, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -268, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimAttackAirU_joint3[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, -33, -178, -22, 357, 44, 4300, 51, 3276, -204, 4300, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, -11, -178, 33, 357, -55, 4300, -102, 3276, 409, 4300, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -89, -4, 89, 3, -89, -30, 3891, -24, 4915, 96, 3891, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), -68, 8, 101, -3, -164, 5, 4096, 35, 4096, -142, 4096, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 268, 22, 0, -6, 0, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 268, 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimAttackAirU_joint5[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -41, -416, 220,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 536, 44, 28, 121, -115, 260, -5, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 536, -44, 80, -32, -156, -90, -2, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 178, -31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 4, -220, -183, 253, -21, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -30, -101, -30, -3, 0, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), -190, -188,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), -97, -24, -11, 50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), -69, 9, 82, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 178, 11, -76, -87, -572, -222, 347, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, -232, -606, 322,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimAttackAirU_joint6[294] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 204, 57, -1258, -108, -2244, 98,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3072, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, 100, -1367, -234, -2146, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, 127, -1726, -147, -2174, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 517, 141, -1662, 167, -2885, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 688, 99, -1392, 172, -3040, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3070, 14,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 1024,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 716, 11, -1317, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 712, -7, -1311, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, -41, -1344, -74, -3050, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 629, 18, -1460, 19, -3037, -32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 737, 52, -1305, 80, -3115, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3141, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 734, -12, -1298, -33,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 4096, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 712, 12, -1373, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 760, 14, -1337, 52, -3171, -8,
	ftAnimSetValRateT(FT_ANIM_SCAX, 13), 3072, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 741, -6, -1268, 47, -3158, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 747, 2, -1241, 29, -3161, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 691, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -906, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -3105, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3084, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2919, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 659, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 539, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 397, -159, -877, 21, -2773, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1013, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, -182, -2591, 185,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, -239, -2401, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -259, -242, -2109, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -451, -169, -1917, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -668, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1772, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1702, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1666, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -703, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -622, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1054, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1137, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -532, 133, -1689, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1867, -140,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -355, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -82, 267, -1185, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 199, -1298, -141, -2030, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 316, 81, -1469, -127, -2166, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 342, 26, -1552, -83, -2212, -46,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimAttackAirU_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimAttackAirU_joint9[96] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 37, -415, 226,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -178, -22, 178, 33, 224, 82, -28, 323, 54, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -178, 67, 89, 22, 120, -15, -91, -73, 85, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 31, 357, 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 212, -50, -83, -1, 37, -492,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 95, -85, -92, 43, -160, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 357, -15, 357, -23, -1, -50, -66, 115,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), 126, 67,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 7), 204, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -23, -178, -35, 52, 17, -623, -372, 251, 207,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -178, 237, -699, 321,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimAttackAirU_joint10[248] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1812, 212, 315, 202, -565, -41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1599, -200, 517, 118, -606, -543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2213, -179, 551, -2, -1652, -482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1959, 239, 512, 4, -1572, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, 148, 561, 28, -1433, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 587, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1662, 90, -1403, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1553, 87, -1309, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1625, -328, -1346, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 612, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 642, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2146, -431, -1762, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2488, -152, 501, -141, -1931, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2451, 40, 359, -87, -1696, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2407, -10, 326, -9, -1548, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 339, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2472, -60, -1593, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1806, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2684, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 330, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 443, 87,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1823, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2000, -61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2690, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2741, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2787, -74, -2073, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3185, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 540, 94, -2199, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 633, 42, -2503, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3749, -527, 625, -55, -3020, -404,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 407, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4239, -485, -3313, -214,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3531, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4719, -367,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -5126, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 313, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 128, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3594, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3973, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5153, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -5165, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5163, 2, 25, -10, -3993, -20,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimAttackAirU_joint11[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimAttackAirU_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1415, 93, -1595, 105, -88, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -108, 1427, -306, 118, -51, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimAttackAirU_joint14[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 242, -18, -430, 42, -209, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -207, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 224, -47, -388, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 148, -84, -296, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, -36, -151, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -195, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -17, -6, -131, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -24, -30, -147, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 162, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -61, -31, -127, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -69, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -104, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 114, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -110, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -93, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -160, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 118, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 168, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -95, -2, -152, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -119, -3, -101, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 270, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, -1, -99, 1, 278, 7,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimAttackAirU_joint16[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimAttackAirU_joint18[180] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -510, 152, -372, 86, -2827, -73,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -357, 195, -285, 162, -2900, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, 188, -47, 248, -2960, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 115, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 212, 204, -2920, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 360, 98, -2806, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 387, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 176, 29, -2733, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 115, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2742, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2806, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 360, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 274, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 104, -16, -2782, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 61, -2, -2694, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, 0, -2689, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 83, 4, -2609, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 317, -13,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 88, 10, -2628, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 210, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3034, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 299, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -46, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 342, -43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3073, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3160, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 288, -58, -107, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -16, -98, -176, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -115, -72, -165, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -161, -45, -159, 5, -3165, -5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimAttackAirU_joint19[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1362, 76, 1179, -1, 1394, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1223, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1438, 116, 1478, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1594, 121, 1653, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1701, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1776, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1339, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1447, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1494, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1447, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1698, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1828, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1391, -69, 1870, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2166, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1210, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1958, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2042, 53, 2249, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2297, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2065, 21, 1211, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 2022, -11, 1327, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2316, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2246, -33,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2009, -15, 1294, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1839, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1156, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2209, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1674, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1769, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1632, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1170, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1316, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1675, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1774, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1651, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1691, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1324, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1328, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1698, 7, 1329, 1, 1789, 15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimAttackAirU_joint21[240] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x280E, 0x01FE, 0xFFD5, 0x0174, 0x0002, 0x0182, 0xFFD5, 0x4F00, 0x0E66, 0x0E66, 0x0E66, 0x2805, 0x0003, 0x01B4, 0x0034, 0x200B, 0x0001, 0x01D2, 0xFFAF, 0x0156, 0xFFBB, 0x200B, 0x0001, 0x015A, 0xFF6F, 0x00F7, 0xFF9C, 0x2803, 0x0002, 0x002F, 0xFFA5, 0x2009, 0x0001, 0x008D, 0xFFB0, 0x200D, 0x0001, 0x01F1, 0x0033, 0x0056, 0xFFD9, 0x2805, 0x0003, 0x0209, 0xFFEB, 0x200B, 0x0001, 0xFFFA, 0xFFD8, 0x003D, 0xFFE5, 0x2803, 0x0003, 0x002F, 0x0065, 0x2009, 0x0001, 0x001F, 0xFFF3, 0x2809, 0x0002, 0x0056, 0x005C, 0x0801, 0x0001, 0x2005, 0x0001, 0x01F1, 0xFFD6, 0x200F, 0x0001, 0x00B9, 0x0082, 0x01B5, 0xFFA2, 0x00DB, 0x0087, 0x2809, 0x0002, 0x01B6, 0x0035, 0x2007, 0x0001, 0x0134, 0x0056, 0x0133, 0xFF80, 0x2007, 0x0001, 0x0166, 0x001F, 0x00B3, 0xFFA4, 0x2803, 0x0003, 0x017D, 0x0006, 0x200D, 0x0001, 0x007A, 0xFFE1, 0x01D0, 0x000C, 0x2809, 0x0005, 0x01CF, 0x0002, 0x2005, 0x0002, 0x0070, 0xFFFD, 0x2007, 0x0001, 0x0185, 0x0008, 0x006E, 0xFFFF, 0x2805, 0x000A, 0x00A1, 0x0003, 0x2803, 0x000C, 0x017E, 0xFFDA, 0x0801, 0x0002, 0x2009, 0x0001, 0x01D3, 0x0001, 0x2809, 0x0008, 0x01DE, 0xFFFE, 0x0801, 0x0007, 0x2005, 0x0001, 0x00A1, 0xFFFD, 0x2805, 0x0006, 0x0067, 0xFFFA, 0x2009, 0x0001, 0x01DA, 0xFFF5, 0x2809, 0x000A, 0x00B2, 0xFFF3, 0x2003, 0x0001, 0x0151, 0xFFCB, 0x2803, 0x0009, 0xFF86, 0x002D, 0x0801, 0x0004, 0x2005, 0x0001, 0x0060, 0xFFF7, 0x2805, 0x0006, 0x001C, 0xFFFD, 0x0801, 0x0004, 0x200B, 0x0001, 0xFFC4, 0x0044, 0x00A6, 0xFFF8, 0x200B, 0x0001, 0x000D, 0x0038, 0x00A0, 0xFFFC, 0x200F, 0x0001, 0x0034, 0x0026, 0x001A, 0xFFFF, 0x009E, 0xFFFE, 0x0000,
};
