/* AnimJoint data for relocData file 1235 (FTLinkAnimDSmash) */
/* 3696 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDSmash_joint1[40];
extern u16 dFTLinkAnimDSmash_joint2[54];
extern u16 dFTLinkAnimDSmash_joint4[70];
extern u16 dFTLinkAnimDSmash_joint5[242];
extern u16 dFTLinkAnimDSmash_joint6[88];
extern u16 dFTLinkAnimDSmash_joint9[130];
extern u16 dFTLinkAnimDSmash_joint10[122];
extern u16 dFTLinkAnimDSmash_joint11[56];
extern u16 dFTLinkAnimDSmash_joint12[8];
extern u16 dFTLinkAnimDSmash_joint13[8];
extern u16 dFTLinkAnimDSmash_joint16[26];
extern u16 dFTLinkAnimDSmash_joint17[30];
extern u16 dFTLinkAnimDSmash_joint18[50];
extern u16 dFTLinkAnimDSmash_joint20[58];
extern u16 dFTLinkAnimDSmash_joint21[184];
extern u16 dFTLinkAnimDSmash_joint23[56];
extern u16 dFTLinkAnimDSmash_joint25[180];
extern u16 dFTLinkAnimDSmash_joint26[162];
extern u16 dFTLinkAnimDSmash_joint28[48];
extern u16 dFTLinkAnimDSmash_joint29[178];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDSmash_joints[] = {
	(u32)dFTLinkAnimDSmash_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDSmash_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDSmash_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDSmash_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDSmash_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDSmash_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDSmash_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDSmash_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDSmash_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDSmash_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDSmash_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDSmash_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDSmash_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDSmash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDSmash_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDSmash_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimDSmash_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDSmash_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 469, -357, 0, 218,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 498, 21, 245, 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 498, -11, 245, -212,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 479, -9, -125, -78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 469, 125, 0, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDSmash_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -107, 39, 276, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 250, 32, 0, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 250, -13, 0, 102, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 58, -14, 1431, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -107, -6, 276, -42, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDSmash_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 832, 48, 511, -19, 650, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 602, -97, 31, -198, 42, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 440, -3, -281, -54, -109, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 564, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -456, -55, -327, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -727, 98, -89, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 592, 0, 235, 47, -48, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 551, -12, 423, -2, 273, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDSmash_joint5[242] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -2, -326, -55, -86, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -147, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -630, -71, 140, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -652, 111, 274, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -518, 30, -407, 104, -235, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 157, -442, -42, -549, -219,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -761, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -493, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -204, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -166, 149,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1077, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 546, 127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -445, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -273, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -972, -109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 645, 62, -95, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 770, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -496, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -480, 15, -1115, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -438, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 6, -1198, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 827, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -712, -200, -1212, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1064, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1548, -239,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1856, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 922, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1043, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1141, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1474, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1881, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1728, 132,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1164, 185, -1456, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1064, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2174, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1568, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1921, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1037, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1381, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2243, 49, -1970, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 1896, -14, -1705, 19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1361, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1286, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -7, -1281, 4, -1694, 10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDSmash_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -596, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -383, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -356, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -479, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -446, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -492, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDSmash_joint9[130] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1262, -159, 436, 60, -606, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1274, -12, 494, 57, -640, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1287, -56, 550, 69, -622, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1386, -159, 633, 89, -706, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -104, 729, 61, -914, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, 280, 755, 69, -898, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1045, 319, 868, 88, -348, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -955, 203, 932, 11, -263, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -639, 286, 890, -442, -35, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -94, 157, -394, -422, 760, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, -34, -375, 86, 894, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -198, -50, -135, 139, 924, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -319, 78, 42, -49, 907, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 115, 8, -335, -14, 699, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -157, -4, -237, 13, 404, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDSmash_joint10[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 30, 123, 5, -50, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 264, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 378, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 769, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 987, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 983, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 333, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 81, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 277, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 81, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 981, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 884, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 94, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 188, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 849, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 954, -27,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 120, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 913, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 423, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -32, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -7, 123, 3, -50, -17,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDSmash_joint11[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -785, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -530, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -812, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -771, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -844, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -850, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -611, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDSmash_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDSmash_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDSmash_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2182, 11, -376, 3, -605, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 2182, -10, -376, -3, -605, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimDSmash_joint17[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -163, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 286, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 286, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 373, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 23), -163, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDSmash_joint18[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -199, -23, -499, 47, 128, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -211, -1, 231, 66, -73, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -211, -1, 231, 16, -73, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -221, 0, 377, -29, -204, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -199, 6, -499, -18, 128, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDSmash_joint20[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -21, -2, -394, 28, 14, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -23, 7, 257, 15, -15, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 60, -11, -226, -23, 48, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -191, -16, -97, 30, 17, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -290, 1, 407, -9, -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -165, 22, -291, -31, 28, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDSmash_joint21[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 54, -244, -38, 108, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -280, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 244, 115, -286, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 327, 24, -279, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -130, -72, -303, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -20, -43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -174, -41, -276, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -281, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -197, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, 131, -84, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -593, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 486, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -368, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -310, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 107, -804, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, -303, -94, -132, -1076, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, -218, -360, -121, -1062, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -290, 52, -957, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -200, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 135, 97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, 52, -963, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -604, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -276, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 261, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -126, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -282, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -258, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -225, -28,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 83, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -16, -244, 14, 108, 25,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDSmash_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1064, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 678, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 918, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 991, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1263, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1264, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 571, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDSmash_joint25[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -4, -161, 0, -34, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -300, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -410, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 142, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 113, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -219, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 232, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 185, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -428, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -241, 103,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 475, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 434, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 969, 248, 55, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 786, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 460, 10, 43, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -372, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 107, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 574, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 265, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -330, 65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -54, -48,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 251, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -165, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -64, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 322, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 6, -161, 4, -34, 30,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDSmash_joint26[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -42, 269, 32, -125, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 274, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -905, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -220, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -329, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -229, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 228, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 168, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -798, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 46, 80,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -111, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 205, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 226, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 118, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -276, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -775, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 285, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 326, -33,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -317, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 181, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 295, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 339, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -618, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -149, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 228, 38, 309, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 259, 21, 281, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 11, 269, -12, -125, 24,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDSmash_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1240, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1210, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1220, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1024, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1191, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 467, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDSmash_joint29[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2036, -4, 1682, -7, 1538, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1312, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1654, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2023, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1909, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1815, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1270, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1127, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1656, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1338, -200,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1810, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1928, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1892, -96, 1145, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2120, 4, 1126, -154, 1248, 263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1166, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1883, 218, 1673, 372,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2069, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1505, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1329, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1301, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2069, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1666, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1633, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1957, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2029, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2132, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1318, 27, 1574, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1702, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1476, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2064, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2046, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1701, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1684, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2047, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2039, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1519, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2036, 3, 1682, -2, 1538, 18,
	ftAnimEnd(),
};
