/* AnimJoint data for relocData file 1206 (FTLinkAnimItemThrowSmashB) */
/* 2112 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimItemThrowSmashB_joint1[34];
extern u16 dFTLinkAnimItemThrowSmashB_joint2[30];
extern u16 dFTLinkAnimItemThrowSmashB_joint4[38];
extern u16 dFTLinkAnimItemThrowSmashB_joint5[88];
extern u16 dFTLinkAnimItemThrowSmashB_joint6[40];
extern u16 dFTLinkAnimItemThrowSmashB_joint9[8];
extern u16 dFTLinkAnimItemThrowSmashB_joint10[166];
extern u16 dFTLinkAnimItemThrowSmashB_joint11[84];
extern u16 dFTLinkAnimItemThrowSmashB_joint12[40];
extern u16 dFTLinkAnimItemThrowSmashB_joint13[8];
extern u16 dFTLinkAnimItemThrowSmashB_joint16[24];
extern u16 dFTLinkAnimItemThrowSmashB_joint17[26];
extern u16 dFTLinkAnimItemThrowSmashB_joint18[26];
extern u16 dFTLinkAnimItemThrowSmashB_joint20[8];
extern u16 dFTLinkAnimItemThrowSmashB_joint21[76];
extern u16 dFTLinkAnimItemThrowSmashB_joint23[32];
extern u16 dFTLinkAnimItemThrowSmashB_joint25[60];
extern u16 dFTLinkAnimItemThrowSmashB_joint26[100];
extern u16 dFTLinkAnimItemThrowSmashB_joint28[110];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimItemThrowSmashB_joints[] = {
	(u32)dFTLinkAnimItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimItemThrowSmashB_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimItemThrowSmashB_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimItemThrowSmashB_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimItemThrowSmashB_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimItemThrowSmashB_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimItemThrowSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimItemThrowSmashB_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimItemThrowSmashB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimItemThrowSmashB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimItemThrowSmashB_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimItemThrowSmashB_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01ED, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimItemThrowSmashB_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 888, -217, -110, 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 629, -236, 198, 156,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 592, 144, 84, -261,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 809, 274, -128, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimItemThrowSmashB_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -105, 27, -21, -8, 2, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 164, 0, 187, 15, 40, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimItemThrowSmashB_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 73, 44, -374, 2, -59, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 657, 45, 187, 60, 152, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 530, -26, 234, -1, 232, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimItemThrowSmashB_joint5[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, 2, -1281, 26, -1694, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1851, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1204, -11, -2016, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1207, 17, -2113, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1732, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1003, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1851, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1671, 30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1672, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1624, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1009, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1273, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1709, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1885, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1652, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1689, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 3, -1281, -8, -1694, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimItemThrowSmashB_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -385, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -290, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -554, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -506, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimItemThrowSmashB_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimItemThrowSmashB_joint10[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2800, 42, 123, -1, -50, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2322, 274, 278, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 77, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2049, -214, 578, 330, 98, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2750, -99, 939, 296, -650, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2248, 418, 1171, 324, -161, 327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2064, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1587, 155, 4, 289,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 705, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1481, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1825, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 829, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2083, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2153, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1858, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2299, 332, 1652, -432, 855, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, 522, 994, -247, 1128, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1254, -268, 1157, 132, 539, -718,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2025, -439, 1259, 198, -307, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2133, 151, 1555, -146, -456, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, -230, 967, -526, 283, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 229, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2594, -509, -99, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2741, -103, -26, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, -59, 123, -105, -50, -24,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimItemThrowSmashB_joint11[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -916, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -210, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimItemThrowSmashB_joint12[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 1, -209, -1, 0, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 74, -227, 0, 190, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 447, -1, -213, 2, 37, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimItemThrowSmashB_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimItemThrowSmashB_joint16[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, -2, -536, 19, -339, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1654, -149, -275,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimItemThrowSmashB_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -8, 465, 9, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -73, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -81, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimItemThrowSmashB_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, -24, -199, -3, 0, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -244, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -232, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimItemThrowSmashB_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimItemThrowSmashB_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -10, -244, 8, 108, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -302, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -123, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -32, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -333, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -356, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -69, -97,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 55, 77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -166, -77, -358, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -234, -7, -258, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -8, -244, 14, 108, 53,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimItemThrowSmashB_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 486, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 793, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 325, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimItemThrowSmashB_joint25[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -1, -161, -21, -34, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 405, 26, -168, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -358, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -309, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -187, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 411, -13, -198, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -67, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 320, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 384, 53, -131, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 343, -24, -151, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -14, -161, -10, -34, 33,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimItemThrowSmashB_joint26[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -7, 269, -9, -125, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 226, 54, -372, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 283, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 250, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -104, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 267, -4, -529, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 200, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -724, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 12, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 325, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -217, 74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 358, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 280, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 261, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 9, 269, -10, -125, 27,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimItemThrowSmashB_joint28[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 257, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 959, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 790, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 433, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -8,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF80C, 0xFFE2, 0x0692, 0x0012, 0x0602, 0x0018, 0x2805, 0x0007, 0x0728, 0xFF8A, 0x200B, 0x0006, 0xF79B, 0x004F, 0x0688, 0xFF7D, 0x200B, 0x0001, 0xF7FA, 0x0056, 0x05EB, 0xFF68, 0x280B, 0x0007, 0xF882, 0x0005, 0x04C9, 0x002C, 0x2005, 0x0001, 0x0689, 0xFF7D, 0x2005, 0x0006, 0x0609, 0x000C, 0x200F, 0x0001, 0xF881, 0xFFF8, 0x061D, 0x001B, 0x04F6, 0x0032, 0x2807, 0x0008, 0xF80E, 0xFFFE, 0x0694, 0xFFFE, 0x2009, 0x0007, 0x062F, 0xFFE3, 0x2009, 0x0001, 0x0610, 0xFFEA, 0x200F, 0x0001, 0xF80C, 0xFFFF, 0x0692, 0xFFFF, 0x0602, 0xFFF3, 0x0000, 0x0000, 0x0000,
};
