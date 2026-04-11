/* AnimJoint data for relocData file 828 (FTDonkeyAnimDamageX2) */
/* 2128 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamageX2_joint1[46];
extern u16 dFTDonkeyAnimDamageX2_joint2[38];
extern u16 dFTDonkeyAnimDamageX2_joint4[38];
extern u16 dFTDonkeyAnimDamageX2_joint5[96];
extern u16 dFTDonkeyAnimDamageX2_joint6[32];
extern u16 dFTDonkeyAnimDamageX2_joint7[16];
extern u16 dFTDonkeyAnimDamageX2_joint8[34];
extern u16 dFTDonkeyAnimDamageX2_joint10[8];
extern u16 dFTDonkeyAnimDamageX2_joint11[88];
extern u16 dFTDonkeyAnimDamageX2_joint12[40];
extern u16 dFTDonkeyAnimDamageX2_joint13[34];
extern u16 dFTDonkeyAnimDamageX2_joint14[8];
extern u16 dFTDonkeyAnimDamageX2_joint16[8];
extern u16 dFTDonkeyAnimDamageX2_joint17[114];
extern u16 dFTDonkeyAnimDamageX2_joint19[40];
extern u16 dFTDonkeyAnimDamageX2_joint21[106];
extern u16 dFTDonkeyAnimDamageX2_joint22[104];
extern u16 dFTDonkeyAnimDamageX2_joint24[164];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamageX2_joints[] = {
	(u32)dFTDonkeyAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamageX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamageX2_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDamageX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamageX2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamageX2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamageX2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamageX2_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamageX2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamageX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamageX2_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamageX2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01DA, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamageX2_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -221, -467, 967, -726, -500, -1707,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -204, 8, 759, -98, -1041, -254,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -204, 38, 759, 68, -1041, 357,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -111, 225, 921, 350, -192, 824,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamageX2_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, 101, 278, 45, 39, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 39, 14, 95, -10, 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 39, -14, 95, -6, 47, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamageX2_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 602, -110, -14, 62, 415, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 419, -10, 212, 13, 166, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 419, 15, 212, -8, 166, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamageX2_joint5[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1671, 66, -1523, 2, 1134, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1419, 177, -1409, 105, 1324, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1249, 86, -1309, 42, 1237, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1367, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1237, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1234, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1245, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1372, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1321, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1308, 47,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1249, -51, -1309, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1620, -46, -1509, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1331, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1185, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1662, -42, -1519, -10, 1137, -48,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamageX2_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -226,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1020, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1020, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -503, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamageX2_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 0, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -675,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimDamageX2_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 355, 12, -115, -3, 248, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 355, -15, -115, -16, 248, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 68, -19, -413, 5, 97, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamageX2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamageX2_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 801, 172, -202, -479, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 685, 412, -30, -27, 32, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 708, -228, 116, 3, -360, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -241, -22, -72, -655, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, -1, -29, -5, -661, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 227, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -28, 5, -661, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -56, -655, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -27, -141, -10, -242, 251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 32, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 141, -151, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, 108, -288, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -141, 173, 32, -469, -180,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamageX2_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -895,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1312, -500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1416, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1441, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1428, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -761, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 327,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamageX2_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, 45, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 478, 21, 5, -2, 446, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 478, 9, 5, 1, 446, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 650, -34, 35, 4, 158, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 162, 45, 64,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamageX2_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamageX2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimDamageX2_joint17[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -217, -392, -49, 2887, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -80, -442, 58, 2703, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, 67, -275, 115, 2406, -228,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -228, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -427, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2243, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2252, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2366, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -233, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -369, -40,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -444, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -414, 93,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2360, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2247, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -253, 223, -418, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 145, 2, -416, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2487, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -89, -499, -12, 2847, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -47, -441, 52, 2942, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, -25, -393, 47, 2890, -52,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamageX2_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 661, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 632, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1133, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamageX2_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1722, 360, 1593, -385, 1238, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1362, 72, 1208, -100, 1500, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, -237, 1391, 161, 1455, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1504, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1727, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1837, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1824, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1376, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1490, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1530, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1751, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1779, -43,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1383, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1510, -226, 1702, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1148, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1836, -264, 1516, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1877, 142, 1554, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1729, 147, 1593, 38, 1235, 71,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamageX2_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 114, 217, 99, 2921, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 430, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 316, 184, 2888, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 585, 58, 2508, -290,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 434, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 422, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 450, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 456, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 477, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 2342, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 462, 8, 460, 35, 2353, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 476, -100, 2852, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 422, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 293, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 148, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, -96, 3055, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 284, -63, 3018, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, -36, 231, -53, 2927, -90,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamageX2_joint24[164] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1087, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 788, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 863, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1178, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1092, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, -45,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0650, 0xFFB6, 0xF950, 0xFF56, 0xF835, 0xFF6C, 0x2803, 0x0002, 0x0573, 0xFFC0, 0x200D, 0x0001, 0xF8A6, 0x002E, 0xF7A1, 0x001C, 0x200D, 0x0001, 0xF9AD, 0x0060, 0xF86F, 0x00C0, 0x2809, 0x0005, 0xF963, 0x000A, 0x2007, 0x0001, 0x0584, 0xFFEA, 0xF967, 0xFFDF, 0x2803, 0x0006, 0x04CD, 0xFFFB, 0x2005, 0x0001, 0xF96A, 0x0003, 0x2805, 0x000D, 0xF987, 0x0005, 0x0801, 0x0003, 0x2009, 0x0001, 0xF96C, 0x0007, 0x2809, 0x000A, 0xF91F, 0xFFD2, 0x0801, 0x0001, 0x2003, 0x0001, 0x04C9, 0xFFFF, 0x2803, 0x0008, 0x0541, 0x0000, 0x0801, 0x0007, 0x2005, 0x0001, 0xF98D, 0x0026, 0x2805, 0x0003, 0xFA1D, 0xFFD2, 0x200B, 0x0001, 0x0520, 0x0034, 0xF8D7, 0xFF96, 0x280B, 0x0003, 0x0709, 0x000C, 0xF763, 0x000E, 0x0801, 0x0002, 0x2005, 0x0001, 0xF9C8, 0xFFB9, 0x200F, 0x0001, 0x06C5, 0xFFA9, 0xF98E, 0xFFCC, 0xF7BA, 0x0065, 0x200F, 0x0001, 0x065B, 0xFF96, 0xF95E, 0xFFD1, 0xF82F, 0x0074, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
