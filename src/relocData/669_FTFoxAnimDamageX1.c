/* AnimJoint data for relocData file 669 (FTFoxAnimDamageX1) */
/* 2048 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamageX1_joint1[50];
extern u16 dFTFoxAnimDamageX1_joint2[48];
extern u16 dFTFoxAnimDamageX1_joint4[44];
extern u16 dFTFoxAnimDamageX1_joint5[86];
extern u16 dFTFoxAnimDamageX1_joint6[44];
extern u16 dFTFoxAnimDamageX1_joint7[10];
extern u16 dFTFoxAnimDamageX1_joint8[64];
extern u16 dFTFoxAnimDamageX1_joint10[10];
extern u16 dFTFoxAnimDamageX1_joint11[86];
extern u16 dFTFoxAnimDamageX1_joint12[36];
extern u16 dFTFoxAnimDamageX1_joint13[10];
extern u16 dFTFoxAnimDamageX1_joint15[10];
extern u16 dFTFoxAnimDamageX1_joint16[76];
extern u16 dFTFoxAnimDamageX1_joint18[36];
extern u16 dFTFoxAnimDamageX1_joint20[80];
extern u16 dFTFoxAnimDamageX1_joint21[80];
extern u16 dFTFoxAnimDamageX1_joint23[36];
extern u16 dFTFoxAnimDamageX1_joint24[80];
extern u16 dFTFoxAnimDamageX1_joint25[60];
extern u16 dFTFoxAnimDamageX1_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamageX1_joints[] = {
	(u32)dFTFoxAnimDamageX1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamageX1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamageX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamageX1_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamageX1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamageX1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamageX1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamageX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamageX1_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamageX1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamageX1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamageX1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamageX1_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamageX1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamageX1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamageX1_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamageX1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamageX1_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamageX1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDamageX1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamageX1_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 0, 912, 2, -20, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 48, 0, 838, -248, -368, -1945,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 48, 0, 850, 17, -507, -195,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 48, 0, 850, -23, -507, 256,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, 0, 826, 93, -243, 729,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamageX1_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -338,
	ftAnimSetValRate(FT_ANIM_ROTZ), -3, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 258, 173, 46, 74, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 376, 40, -245, -56, -127, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 376, -27, -245, -13, -127, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 153, -145, -358, -25, 49, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamageX1_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 156, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, -25, -377, -71, -136, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 121, 26, -377, 42, -136, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 336, 52, -25, 150, -11, 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDamageX1_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 166, -165, 358, 258, -946,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 502, 192, -148, -688, -611,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 894, 249, -463, -402, -963, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -599, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 555, -243, -599, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 408, -116, -468, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 265, 10, -401, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -585, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -327, 220,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 282, -105, -548, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -118, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, 113, -479, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -100, -39, 149, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 8, -165, -64, 258, 109,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamageX1_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -707, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 336,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamageX1_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamageX1_joint8[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -72,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -113, 0, 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 32, 7, -45, 113, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 235, 45, -98, -138, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 403, 70, -189, 23, -166, 22,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 446, -10, -41, 40, 5, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -196, -157, 101, 49, -81, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -113, 136,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamageX1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamageX1_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 342, 1336, -484, -1271, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1133, -112, 851, 114, -1400, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1700, -246, 1565, 412, -1654, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1528, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1625, 50, 1676, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1599, 14, 1707, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1573, 17, 1644, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1434, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1309, -174,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1549, -42, 1576, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1658, 16, 1285, -146, -1589, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1516, 91, 1282, 25, -1354, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 41, 1336, 53, -1271, 82,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamageX1_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -572, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 145,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamageX1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamageX1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamageX1_joint16[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 548, -223, 441, -26, -385,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -688, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 143, 142, 218, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -120, -95, -230, -248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 14, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, -35, -722, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -751, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -217, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -240, -161,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -165, -223, -5, -26, 262,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamageX1_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -348,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamageX1_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 14, 125, -77, -56, 528,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -5, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -126, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 118, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 93, 42, 91, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -61, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 153, -88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -157, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 17, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, 141, -97, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 28, 125, 144, -56, 41,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamageX1_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 56, 137, 170, 134, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 411, -46, 307, -89, -220, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, -61, -40, -184, -597, -197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 309, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -74, -8, -625, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, 1, -627, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -510, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 137, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 234, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 79, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 275, 137, 0, 134, 267,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamageX1_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 380,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 544, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 710, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -212,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamageX1_joint24[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 6, -102, 212, -226, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -175, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, 237, -343, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 372, 107, -268, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -284, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 311, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -180, 4, 319, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 376, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -127, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 5, 210, -74, -379, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 115, -165, -333, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -12, -102, -218, -226, 106,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamageX1_joint25[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -59, 219, 0, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -13, 220, -8, -9, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -99, 31, 187, -38, -73, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 85, -47, -29, -4, -87, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -350, -23, 163, 70, -186, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDamageX1_joint26[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -2, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 301, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimEnd(),
	0x0000, 0x0000,
};
