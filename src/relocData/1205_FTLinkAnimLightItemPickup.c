/* AnimJoint data for relocData file 1205 (FTLinkAnimLightItemPickup) */
/* 1456 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimLightItemPickup_joint1[14];
extern u16 dFTLinkAnimLightItemPickup_joint2[30];
extern u16 dFTLinkAnimLightItemPickup_joint4[30];
extern u16 dFTLinkAnimLightItemPickup_joint5[54];
extern u16 dFTLinkAnimLightItemPickup_joint6[36];
extern u16 dFTLinkAnimLightItemPickup_joint9[8];
extern u16 dFTLinkAnimLightItemPickup_joint10[72];
extern u16 dFTLinkAnimLightItemPickup_joint11[40];
extern u16 dFTLinkAnimLightItemPickup_joint12[8];
extern u16 dFTLinkAnimLightItemPickup_joint13[46];
extern u16 dFTLinkAnimLightItemPickup_joint16[16];
extern u16 dFTLinkAnimLightItemPickup_joint17[12];
extern u16 dFTLinkAnimLightItemPickup_joint18[12];
extern u16 dFTLinkAnimLightItemPickup_joint20[22];
extern u16 dFTLinkAnimLightItemPickup_joint21[52];
extern u16 dFTLinkAnimLightItemPickup_joint23[24];
extern u16 dFTLinkAnimLightItemPickup_joint25[46];
extern u16 dFTLinkAnimLightItemPickup_joint26[64];
extern u16 dFTLinkAnimLightItemPickup_joint28[24];
extern u16 dFTLinkAnimLightItemPickup_joint29[60];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimLightItemPickup_joints[] = {
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimLightItemPickup_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimLightItemPickup_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 514, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimLightItemPickup_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 140, -11, -47, -60, -14, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, -61, -25, 80, 60, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimLightItemPickup_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 390, 111, -48, -118, -175, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 707, -26, -306, 42, -319, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimLightItemPickup_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -3, -1281, 56, -1694, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1335, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1787, -109, -1903, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1645, 7, -1971, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1949, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1904, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1648, -48, -1941, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1910, -30, -1432, 183, -1754, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -22, -1281, 150, -1694, 60,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimLightItemPickup_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -503, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -741, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimLightItemPickup_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimLightItemPickup_joint10[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1192, -354, 1484, -541, 1557, -803,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -74, -706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1547, -437, 943, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2067, -232, 1259, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2011, -106, 1589, 5, -659, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2279, 81, 1271, 74, 121, 699,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1848, 165, 1737, 139, 738, 585,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1949, 228, 1550, -47, 1293, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1392, 378, 1643, -32, 1506, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1192, 200, 1484, -158, 1557, 51,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimLightItemPickup_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -323,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimLightItemPickup_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimLightItemPickup_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 83, 0, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 83, 165, 0, -1828, 12, 1045,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 166, 412, -914, 576, 534, 1566,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 187, -330, 144, 3657, 403, -2090,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 83, -274, 0, -384, 12, -1044,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 83, 0, 12,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimLightItemPickup_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 785, -118, 1646,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimLightItemPickup_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 481,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -163,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimLightItemPickup_joint18[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -199,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimLightItemPickup_joint20[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -66, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -165, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimLightItemPickup_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 95, -244, -42, 108, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 8, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -242, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -264, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, -74, 172, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -180, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 0, 97, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -240, -60, -243, 13, 108, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimLightItemPickup_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 217,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 985, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 434, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimLightItemPickup_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -72, -161, -64, -34, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -22, 44, -510, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -200, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -122, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 56, 117, -420, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 316, 59, -236, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, 14, -163, 72, -34, 87,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimLightItemPickup_joint26[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -75, 269, 26, -125, -166,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 255, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -191, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, -303,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1020, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -17, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 135, -648, 296,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 288, 7, -226, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 267, 134, 268, -19, -125, 100,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimLightItemPickup_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 168,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1076, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -172,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimLightItemPickup_joint29[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 47, -74, -14, -69, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -252, 70, -26, 18, -208, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, -69, -50, -56, -183, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -103, 37, -248, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -391, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -432, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 8, -64, 15, -146, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 0, -71, -6, -70, 76,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
