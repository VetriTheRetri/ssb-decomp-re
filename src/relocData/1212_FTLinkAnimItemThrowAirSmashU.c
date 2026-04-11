/* AnimJoint data for relocData file 1212 (FTLinkAnimItemThrowAirSmashU) */
/* 2240 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimItemThrowAirSmashU_joint1[46];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint2[46];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint4[38];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint5[100];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint6[40];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint9[16];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint10[166];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint11[84];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint12[16];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint13[16];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint16[16];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint17[26];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint18[26];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint20[16];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint21[104];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint23[64];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint25[50];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint26[104];
extern u16 dFTLinkAnimItemThrowAirSmashU_joint28[88];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTLinkAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimItemThrowAirSmashU_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0214, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimItemThrowAirSmashU_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -3216, 744, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3216, 12,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 18), 1019,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -53, -200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -200, -43,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -113, 107,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1745, 229,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -67, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 744, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimItemThrowAirSmashU_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 145, 23, 244, 26, 68, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 222, 13, 488, 6, 289, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 299, 6, 317, -14, 460, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 299, -29, 317, -4, 460, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimItemThrowAirSmashU_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 299, 31, -731, 8, 172, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 569, 50, 230, 141, 709, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 700, -15, 399, -4, 852, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimItemThrowAirSmashU_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 8, -1347, 21, -1261, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1660, 172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1207, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1623, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1891, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2149, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1821, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1592, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1199, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1056, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2024, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -974, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1496, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 848, 35,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1071, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1276, -64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 918, 109, -1020, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1228, 116, -1208, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1326, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, 72, -1347, -21, -1261, -53,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimItemThrowAirSmashU_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -496, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -421, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -457, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -757, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimItemThrowAirSmashU_joint9[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, 7, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 278, 266, 193,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimItemThrowAirSmashU_joint10[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 488, 54, 60, -28, 163, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 195, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 740, 256, 234, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1056, 300, 161, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1340, 508, 546, 236, 267, 397,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 621, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2074, 625, 957, 605,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2591, 523, 1477, 565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3122, 171, 574, -394, 2089, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2933, -84, -167, -431, 2344, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2953, -8, -287, -72, 2233, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -308, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2670, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2367, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2391, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2464, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -272, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2526, 333, -44, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3336, 522, 614, 247, 2736, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1300, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3570, -268, 450, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2800, -439, 348, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2692, 151, 53, 146, 1152, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3103, -230, 641, 526, 1891, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1443, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2231, -463, 1508, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2175, -67, 1749, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2097, -78, 1548, 104, 1771, 22,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimItemThrowAirSmashU_joint11[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, -114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -968, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 218,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimItemThrowAirSmashU_joint12[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimItemThrowAirSmashU_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1114, -804, 494,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, -804, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1114, -804, 494,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimItemThrowAirSmashU_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1508, 346, -843,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimItemThrowAirSmashU_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 151, -2, 556, 32, 153, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -32, -7, 228, -35, -73, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimItemThrowAirSmashU_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -66, -19, 280, -2, -76, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -238, 3, -230, -24, -65, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimItemThrowAirSmashU_joint20[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 97, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimItemThrowAirSmashU_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 116, 139, 32, -782, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 281, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -320, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 77, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 119, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 252, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -759, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 14, -730, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 209, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -809, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -9, -9, -799, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 51, 44, -948, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 87, 2, -949, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1074, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 13, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 181, -35, -921, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 17, 139, -42, -782, 138,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimItemThrowAirSmashU_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1001, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 742, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 381, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 867, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 683, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1179, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimItemThrowAirSmashU_joint25[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 2081, -135, -1538, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -1425,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -1425, 0, -1538, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1641, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1773, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2079, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2065, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 2083, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2082, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1943, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 2081, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1425, -1538,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimItemThrowAirSmashU_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -52, 318, 37, -270, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 345, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -177, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -316,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1106, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 235, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 375, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -526, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 69, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 382, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 325, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -372, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 161, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 216, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 291, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 10, 318, -6, -270, 13,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimItemThrowAirSmashU_joint28[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1123, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 590, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 845, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFD79, 0xFFF7, 0xFFA7, 0x0000, 0x00FC, 0x0000, 0x4005, 0x0017, 0xFFA7, 0x2809, 0x0017, 0x00FC, 0x0000, 0x2003, 0x0003, 0xFE81, 0x00A5, 0x2003, 0x0001, 0xFF1F, 0x006C, 0x2003, 0x0005, 0xFF7F, 0x0016, 0x2003, 0x0001, 0xFF95, 0x0015, 0x2003, 0x000B, 0xFE63, 0xFF8F, 0x2003, 0x0001, 0xFDF0, 0xFF9C, 0x2003, 0x0001, 0xFD9A, 0xFFC5, 0x200F, 0x0001, 0xFD79, 0xFFE0, 0xFFA7, 0x0000, 0x00FC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
