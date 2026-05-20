/* AnimJoint data for relocData file 1562 (FTCaptainAnimDownForwardD) */
/* 3840 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDownForwardD_joint1[12];
extern u16 dFTCaptainAnimDownForwardD_joint2[48];
extern u16 dFTCaptainAnimDownForwardD_joint3[28];
extern u16 dFTCaptainAnimDownForwardD_joint5[26];
extern u16 dFTCaptainAnimDownForwardD_joint6[198];
extern u16 dFTCaptainAnimDownForwardD_joint7[96];
extern u16 dFTCaptainAnimDownForwardD_joint8[48];
extern u16 dFTCaptainAnimDownForwardD_joint9[28];
extern u16 dFTCaptainAnimDownForwardD_joint11[8];
extern u16 dFTCaptainAnimDownForwardD_joint12[164];
extern u16 dFTCaptainAnimDownForwardD_joint13[72];
extern u16 dFTCaptainAnimDownForwardD_joint14[18];
extern u16 dFTCaptainAnimDownForwardD_joint15[10];
extern u16 dFTCaptainAnimDownForwardD_joint17[46];
extern u16 dFTCaptainAnimDownForwardD_joint18[230];
extern u16 dFTCaptainAnimDownForwardD_joint20[80];
extern u16 dFTCaptainAnimDownForwardD_joint22[228];
extern u16 dFTCaptainAnimDownForwardD_joint23[236];
extern u16 dFTCaptainAnimDownForwardD_joint25[88];
extern u16 dFTCaptainAnimDownForwardD_joint26[204];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimDownForwardD_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownForwardD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimDownForwardD_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDownForwardD_joint2[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 697, 268, -321, 23, 200, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 3395, 69, 0, -7, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 17, -6, 931, 40, -19, 40,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 49, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 11, 275,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 17, -4, 931, 504, 19, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 0, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimDownForwardD_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 2, 0, 0, 0, 0, 0, -17, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDownForwardD_joint5[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -158, -45, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 22, 0, 1, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 402, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 189, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDownForwardD_joint6[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1182, 108, 293, -11, -1195, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1290, 72, 281, -90, -1420, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1328, -226, 113, -424, -1600, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 837, -271, -568, -580, -1292, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 784, -9, -1048, -251, -1269, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 886, 82, -1340, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1071, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1063, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1027, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 983, 125, -1393, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1137, 216, -1499, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1416, 299, -1010, -20, -1731, -261,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1496, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1736, 243, -2022, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1903, 109, -2181, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2366, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1951, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1910, -62, -1624, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1826, -73, -1746, -67, -2511, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1764, -61, -1760, -10, -2507, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1403, -14, -1748, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2506, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1393, 13, -1746, -13, -2511, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1782, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1716, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2436, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2372, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2136, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1771, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1626, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1763, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1845, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1617, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, 2, -1614, 3, -2132, 3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDownForwardD_joint7[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -522, -116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1156, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -950, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -588, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -729, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDownForwardD_joint8[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -33, -2, -146, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 705, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 309, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -201, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 90, -27, -66, -2, -288, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimDownForwardD_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 482, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 482, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -22, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDownForwardD_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimDownForwardD_joint12[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, -12, 1671, -16, 614, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1594, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1550, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1018, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1489, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1380, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1525, 12, 1343, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1437, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1643, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1004, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1504, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1796, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1622, 33, 934, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1576, 23, 810, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1574, 3, 815, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1552, 0, 800, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1799, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1788, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1553, -35, 810, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, -57, 1796, 0, 1008, 170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1611, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1669, -45, 1150, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1794, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1757, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1543, -56, 1929, 154,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1466, -5, 2189, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1772, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1741, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, 3, 1464, -2, 2200, 11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDownForwardD_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -338, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -912, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -458, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1174, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1043, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDownForwardD_joint14[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -564, 159, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -335, 23, 203, 3, -53, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimDownForwardD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDownForwardD_joint17[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -606, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -112, 409,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -332, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -57, -9, -149, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -207, -7, -168, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -338, 16, -162, 10, 34, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 18, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimDownForwardD_joint18[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1931, 33, 1640, -18, -1753, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1655, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1953, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1844, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2000, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, 138, -2147, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1844, -63, 1931, 89, -2102, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1905, 28, -2445, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1948, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1817, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1924, 15, -2540, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2671, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1889, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1781, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1708, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2613, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1806, -102, 1714, -32, -2485, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -90, 1642, -92, -2304, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1625, -16, 1529, -61, -2302, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1737, 106, 1525, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2426, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2526, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1864, 109, 1508, -23, -2626, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1955, 31, 1479, -2, -2674, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1928, -50, 1502, 12, -2635, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1517, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2672, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1855, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1808, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1694, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1537, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1596, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2683, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2615, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1632, -59, 1636, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1550, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1638, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2544, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2112, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1574, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1657, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1602, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 9, 1600, -1, -2096, 16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimDownForwardD_joint20[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 182, 134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 205, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 947, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1370, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1395, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1427, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1399, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1157, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 716, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 450, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimDownForwardD_joint22[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2201, -163, -1502, 44, 2241, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2364, 29, -1457, 93, 2187, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2142, 368, -1315, 104, 1950, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1628, 357, -1248, 1, 1475, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1427, 96, -1312, -53, 1245, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1557, -123, -1405, -83, 1322, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1681, -108, -1523, -104, 1591, 213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1788, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1613, -57, 1749, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, -19, 1778, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1703, -22, 1764, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1750, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1525, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1548, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1612, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1636, -18, -1731, -52, 1746, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1908, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1535, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1649, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1722, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1836, -53, -1957, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1830, 19, -1845, 110, 1447, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1456, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1736, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1578, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1470, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1766, -17, 1486, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1753, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1548, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1684, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1545, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1655, 67, -1521, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1637, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, -24, 1688, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1701, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1581, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1642, -7, -1574, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1656, -3, -1567, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1696, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1691, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1657, -1, -1566, 1, 1688, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimDownForwardD_joint23[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, 10, 6, 12, -333, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 421, 57, 69, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 60, 126, 13, -853, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 35, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 523, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 41, -933, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 147, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1056, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 464, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 163, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -132, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -888, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 76, -77, -150, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 150, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -123, -715, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -170, -109, -554, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -252, -68, 176, -10, -549, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -26, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -256, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -747, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 40, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 71, 126, 63, -692, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -17, 18, -658, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 167, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 210, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 176, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, 4, -633, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -491, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 53, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 132, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -96, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 154, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 5, 110, -6, -76, 19,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDownForwardD_joint25[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 787, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 859, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 825, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 991, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1274, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1417, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1417, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1402, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1365, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1054, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 698, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 555, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimDownForwardD_joint26[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -560, -6, -376, -8, 308, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 162, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -392, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -566, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -772, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -74, 470, -36, -206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -355, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 167, 171, -323, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -78, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 215, -71, -262, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 126, -175, -33, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -134, -183, -23, 37, 89, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 21, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -239, -7, 104, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -150, 99, 109, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 97, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -39, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 98, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -53, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 116, 132, -57, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -172, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 240, 43, 134, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 339, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 202, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 146, -23, -290, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 155, 32, -392, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 18, 351, 6, -425, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -406, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 366, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 193, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 92, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, -6, -396, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 156, 8, -285, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 4, 365, 0, -279, 6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
