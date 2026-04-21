/* AnimJoint data for relocData file 1009 (FTSamusAnimTech) */
/* 2512 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTech_joint1[92];
extern u16 dFTSamusAnimTech_joint2[16];
extern u16 dFTSamusAnimTech_joint4[98];
extern u16 dFTSamusAnimTech_joint5[138];
extern u16 dFTSamusAnimTech_joint6[68];
extern u16 dFTSamusAnimTech_joint7[52];
extern u16 dFTSamusAnimTech_joint8[16];
extern u16 dFTSamusAnimTech_joint11[16];
extern u16 dFTSamusAnimTech_joint12[100];
extern u16 dFTSamusAnimTech_joint14[38];
extern u16 dFTSamusAnimTech_joint15[116];
extern u16 dFTSamusAnimTech_joint17[68];
extern u16 dFTSamusAnimTech_joint19[100];
extern u16 dFTSamusAnimTech_joint20[120];
extern u16 dFTSamusAnimTech_joint22[56];
extern u16 dFTSamusAnimTech_joint23[116];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimTech_joints[] = {
	(u32)dFTSamusAnimTech_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimTech_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimTech_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimTech_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimTech_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimTech_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimTech_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimTech_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimTech_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimTech_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimTech_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimTech_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimTech_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimTech_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimTech_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimTech_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimTech_joint1[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -4637,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -244, 326,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -4637, 34, 612, 314,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 181,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 0, -362,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -173, 255,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1123, 2996,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4289, 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -160, 480,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 689,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1884,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1680, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 1288, 51,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 1080, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimTech_joint2[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimTech_joint4[98] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 402, 268, -99, -26, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -402, 77, 402, -40, 268, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -123, -21, -87, -131, -113, -39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -115, 114, -108, 155, -93, 153,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 57,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), -6, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 62, 0, -26, 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 9, 361, -17, 431,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 26, -325, 68, 549,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 177,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 10, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -71, -617, 119, 231,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -127, -25, 126, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 536, -33, 2, -5, -107, 63, 114, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimTech_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1748, -104, -1273, 74, 310, 328,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1201, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1363, -63, 1062, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1304, 75, 1034, -301,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1639, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1174, -119, 459, -571,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1615, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, -611,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1619, 0, -764, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1639, -53, -1561, 36, -691, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1407, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1512, -3, -1543, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1632, 58, -1424, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1421, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1628, -8, -1558, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2100, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1747, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1423, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1586, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2095, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1846, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1763, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2063, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1651, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1701, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 21, -1722, -20, -1839, 6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimTech_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -40, -545,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -941, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1114, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -842, 628,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -954, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -796, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -765, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimTech_joint7[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -89, -679,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 744, -17, -64, 17, -290, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 715, -106, -4, 9, 86, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -186, 0, 0, 0, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -402, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimTech_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimTech_joint11[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0, 0, 480, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimTech_joint12[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -506, -1, 647, -5, -452, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 576, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -507, 1, -467, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -502, 194, -502, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -118, 303, -167, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 104, 114, -7, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -284, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -151, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 505, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 203, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -213, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -235, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 227, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -120, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -222, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 44, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 14, -128, -8, -215, -1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimTech_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -787, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -641, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 12,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimTech_joint15[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1695, 12, -1581, -11, -1998, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1633, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1794, -24, -2273, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1734, -122, -2268, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, -77, -1569, 46, -1952, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1456, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1578, 41, -2260, -279,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1764, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2583, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2579, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2465, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1426, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1606, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1721, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1718, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2328, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2228, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2325, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2033, 57,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1706, -9, -1593, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1698, -5, -1584, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, -2, -1581, 3, -1998, 35,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimTech_joint17[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1086, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1136, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 745, -568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1496, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1489, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1064, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1029, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 537, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimTech_joint19[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -13, 17, -14, 217, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -240, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -125, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -152, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 210, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -25, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 135, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 4, -119, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -35, -8, 6, 44,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -186, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -62, -29, 42, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -78, 5, -27, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -64, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 2, -28, -1, -41, 22,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimTech_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -41, 160, 7, -49, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 149, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 174, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -59, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, -40, -255, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 429, -6, 68, -35, -98, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -213, 168, 35, -429, -320,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 52, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, -125, -738, -272,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1079, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -84, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 214, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -200, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 206, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 199, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 171, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 20, 160, -10, -49, 28,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimTech_joint22[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 877, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, 522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1461, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 635, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimTech_joint23[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, -49, 88, 1, -25, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -112, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 11, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 28, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -21, 3, 47, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 171, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 46, -3, -32, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 77, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -106, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -60, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -64, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 155, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -69, -79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -47, 24, 88, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 124, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 87, -152, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, 84, -400, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 202, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -243, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 17, 193, -9, -213, 30,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
