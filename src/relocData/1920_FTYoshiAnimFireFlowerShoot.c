/* AnimJoint data for relocData file 1920 (FTYoshiAnimFireFlowerShoot) */
/* 2976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFireFlowerShoot_joint1[24];
extern u16 dFTYoshiAnimFireFlowerShoot_joint2[64];
extern u16 dFTYoshiAnimFireFlowerShoot_joint3[64];
extern u16 dFTYoshiAnimFireFlowerShoot_joint4[62];
extern u16 dFTYoshiAnimFireFlowerShoot_joint6[16];
extern u16 dFTYoshiAnimFireFlowerShoot_joint7[156];
extern u16 dFTYoshiAnimFireFlowerShoot_joint10[48];
extern u16 dFTYoshiAnimFireFlowerShoot_joint11[194];
extern u16 dFTYoshiAnimFireFlowerShoot_joint12[86];
extern u16 dFTYoshiAnimFireFlowerShoot_joint13[78];
extern u16 dFTYoshiAnimFireFlowerShoot_joint14[10];
extern u16 dFTYoshiAnimFireFlowerShoot_joint15[26];
extern u16 dFTYoshiAnimFireFlowerShoot_joint17[26];
extern u16 dFTYoshiAnimFireFlowerShoot_joint18[128];
extern u16 dFTYoshiAnimFireFlowerShoot_joint20[56];
extern u16 dFTYoshiAnimFireFlowerShoot_joint22[112];
extern u16 dFTYoshiAnimFireFlowerShoot_joint23[118];
extern u16 dFTYoshiAnimFireFlowerShoot_joint25[64];
extern u16 dFTYoshiAnimFireFlowerShoot_joint26[104];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimFireFlowerShoot_joints[] = {
	(u32)dFTYoshiAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimFireFlowerShoot_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimFireFlowerShoot_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimFireFlowerShoot_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimFireFlowerShoot_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimFireFlowerShoot_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimFireFlowerShoot_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 672,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 153, 153,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 153,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 153, -55,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 21), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimFireFlowerShoot_joint2[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -89, 0, 30, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -10, -1, 484, 71, -9, -1, 33, 3, 89, 68,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 33, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), -10, 484, -9, 89,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -10, 0, 484, -26, -9, 0, 33, -54, -186, 16,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -55, -1, 116, 78,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 30, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimFireFlowerShoot_joint3[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -197,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, 4, 0, -19, 0, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -183, -26, -59, -10, -69, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -359, 31, -61, 1, -71, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 99, 25, -44, 4, -52, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 16, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimFireFlowerShoot_joint4[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 78, 0, 0, 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -26, 600, -47, 329, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 117, 4, -471, -58, -135, -16,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 117, -471, -135,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, 54, -471, 37, -135, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 499, -1, -210, 22, -45, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -50, 511, 390,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 78, 0, 0, 0, 600, 329,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimFireFlowerShoot_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 378,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimFireFlowerShoot_joint7[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -104, -489, -138, -123, -378, 788,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -445, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -594, -37, 410, 832,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -180, 212, 1285, 457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -203, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1325, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -436, 3, 1366, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -478, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1354, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -206, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -175, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -494, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -771, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -122, 350, 1489, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 526, 262, 912, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, -61, -685, 87, 915, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 419, -123, -497, 15, 588, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, -214, -471, 86, 678, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 80, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -450, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 689, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -366, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -178, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -379, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -108, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -140, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, 3, -138, 1, -378, -11,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimFireFlowerShoot_joint10[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -770, -524,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1295, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1383, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1259, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1181, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1375, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1369, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -798, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimFireFlowerShoot_joint11[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, -459, -20, -51, 2930, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -661, -41, -71, -87, 2890, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, 462, -196, 654, 2351, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, 236, 1237, 590, 2965, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 319, 984, -115, 3014, 441,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1003, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 902, 360, 3848, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 910, 7, 3856, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 921, 106, 3865, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1008, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1041, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1130, 32, 4051, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 985, -285, 942, 35, 3668, -514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 558, -203, 1112, 97, 3022, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 578, 20, 1137, 3, 3060, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1177, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 598, 35, 3125, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 715, 55, 3279, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 760, 254, 3263, 202,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1898, -103, 4655, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1241, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1131, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1461, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1524, -311, 1316, -93, 4772, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1210, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1274, 10, 4597, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1523, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4489, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4537, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1257, 51, 1548, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1393, 23, 1620, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, 12, 1628, 8, 4539, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimFireFlowerShoot_joint12[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1008, 106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 186,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -551, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -669, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1189, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -750, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -988, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimFireFlowerShoot_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 94, 117, 66, 152, -987, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 351, -13, 456, 138, -293, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 55, -59, 482, 5, -959, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 55, -26, 482, -15, -959, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -57, 419, 35, -1046, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -173, 19, 622, -13, -613, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 87, 59, 326, -37, -366, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, -6, 436, -23, -415, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFireFlowerShoot_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimFireFlowerShoot_joint15[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 171, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 208, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -300, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -190,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimFireFlowerShoot_joint17[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 317, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 235, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -364, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimFireFlowerShoot_joint18[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 14, 5, -12, -54, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 115, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -206, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 24, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 48, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 146, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -168, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, -86, 6, 86, -321, -179,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 21, 25, -2, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 300, 63,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 46, 22, -7, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 11, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -10, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 120, -116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 6, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, 1, -32, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 1, 5, -1, -54, -21,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFireFlowerShoot_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 352, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 149, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 114, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 149, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 310, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 63, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 340, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimFireFlowerShoot_joint22[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -16, -83, -412, -303, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1785, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -105, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -496, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -325, 144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -210, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1786, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1776, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -228, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1580, 93, -28, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1624, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -65, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -564, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1644, -19, -266, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1599, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -357, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -315, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -545, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -165, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -2, -83, 82, -303, 12,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFireFlowerShoot_joint23[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 66, 0, -9, -195, -163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -267, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -12, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 202, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 66, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -106, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 96, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 137, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 90, -109, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -496, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 23, -59, 169, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 82, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -23, -21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 335, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -392, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, -63, -27, 6, -370, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 25, -50, -6, 5, -241, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -25, 0, 6, -195, 45,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimFireFlowerShoot_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 449, 372,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1010, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 349, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 317, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 569, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 351, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 473, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimFireFlowerShoot_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -44, 1697, -123, 1350, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -91, -22, 1164, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1180, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1301, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1335, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -82, 14, 1184, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1450, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -46, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, 126, 1341, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 206, 108, 1765, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 178, -29, 1736, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -236, -30, 1622, 75,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1495, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1855, 21,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -269, -2, 1707, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -16, 34, 1374, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1861, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1715, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 17, 1697, -17, 1350, -24,
	ftAnimEnd(),
};
