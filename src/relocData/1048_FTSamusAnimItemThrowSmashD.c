/* AnimJoint data for relocData file 1048 (FTSamusAnimItemThrowSmashD) */
/* 1680 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemThrowSmashD_joint1[24];
extern u16 dFTSamusAnimItemThrowSmashD_joint2[32];
extern u16 dFTSamusAnimItemThrowSmashD_joint4[44];
extern u16 dFTSamusAnimItemThrowSmashD_joint5[106];
extern u16 dFTSamusAnimItemThrowSmashD_joint6[60];
extern u16 dFTSamusAnimItemThrowSmashD_joint7[26];
extern u16 dFTSamusAnimItemThrowSmashD_joint8[16];
extern u16 dFTSamusAnimItemThrowSmashD_joint11[26];
extern u16 dFTSamusAnimItemThrowSmashD_joint12[84];
extern u16 dFTSamusAnimItemThrowSmashD_joint14[52];
extern u16 dFTSamusAnimItemThrowSmashD_joint15[66];
extern u16 dFTSamusAnimItemThrowSmashD_joint17[36];
extern u16 dFTSamusAnimItemThrowSmashD_joint19[80];
extern u16 dFTSamusAnimItemThrowSmashD_joint20[58];
extern u16 dFTSamusAnimItemThrowSmashD_joint22[24];
extern u16 dFTSamusAnimItemThrowSmashD_joint23[58];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimItemThrowSmashD_joints[] = {
	(u32)dFTSamusAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimItemThrowSmashD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimItemThrowSmashD_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimItemThrowSmashD_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimItemThrowSmashD_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimItemThrowSmashD_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimItemThrowSmashD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimItemThrowSmashD_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimItemThrowSmashD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimItemThrowSmashD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimItemThrowSmashD_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimItemThrowSmashD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimItemThrowSmashD_joint23, /* [22] joint 23 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimItemThrowSmashD_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimItemThrowSmashD_joint1[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -95, 1405, -688, -194, -339,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -48, 1256, -169,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimItemThrowSmashD_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 268, 64, 89, -20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -5, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 259, -4, -80, -85,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 26, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimItemThrowSmashD_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 77, 0, -49, 137, -38, -46, -53, -2, -85, 10, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -152, -7, -26, 20, -42, 0, 80, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 309, -198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimItemThrowSmashD_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, -553, 114, -182, -231, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -60, -68, -625, -433, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 869, -1137, -642, -1265, -686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2107, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1661, 942, -1352, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2240, 244, -1463, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1657, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2150, -90, -2017, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1947, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2060, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1600, 45,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1876, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1792, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1623, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1572, -65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1669, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2011, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1642, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1689, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 72, -1722, -32, -1839, -47,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemThrowSmashD_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -470, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -797, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimItemThrowSmashD_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -585, -306, -214, 125, 402, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -525, 71, 500, 11, 321, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimItemThrowSmashD_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimItemThrowSmashD_joint11[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -102, 81, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 327, 5, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimItemThrowSmashD_joint12[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -93, 1737, -260, 1392, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1627, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1476, -293, 1379, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1149, -128, 1359, 176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1447, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1896, 132, 1731, 299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1778, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1958, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1922, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1463, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1660, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1734, -40, 1880, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1654, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1400, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1713, 38, 1395, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 11, 1737, 23, 1392, -2,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimItemThrowSmashD_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -215,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1131, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1043, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -469, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -580, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimItemThrowSmashD_joint15[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, -37, 1635, -45, -1998, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2570, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1608, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1581, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1721, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1807, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2650, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2011, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1576, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1522, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1779, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1638, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 1, 1635, -2, -1998, 13,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimItemThrowSmashD_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 392, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 757, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 490, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimItemThrowSmashD_joint19[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 8, -28, -2, -41, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 122, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 120, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 144, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 94, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 183, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -44, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -77, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -25, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 1, -28, -3, -41, 2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimItemThrowSmashD_joint20[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1831, -105, 1445, -64, 1554, -276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1525, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1726, -146, 1277, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1538, -47, 954, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1753, 61, 953, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1754, 1, 907, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 1829, 4, 1541, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1518, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 1444, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 2, 1445, 1, 1554, 12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimItemThrowSmashD_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, 149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 507, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimItemThrowSmashD_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -81, 193, -49, -214, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 178, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -291, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 105, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 143, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 192, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -221, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 1, 193, 1, -214, 6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
