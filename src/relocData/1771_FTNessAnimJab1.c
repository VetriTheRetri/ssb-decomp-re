/* AnimJoint data for relocData file 1771 (FTNessAnimJab1) */
/* 2224 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimJab1_joint1[52];
extern u16 dFTNessAnimJab1_joint2[16];
extern u16 dFTNessAnimJab1_joint4[52];
extern u16 dFTNessAnimJab1_joint5[116];
extern u16 dFTNessAnimJab1_joint6[66];
extern u16 dFTNessAnimJab1_joint7[14];
extern u16 dFTNessAnimJab1_joint8[44];
extern u16 dFTNessAnimJab1_joint10[10];
extern u16 dFTNessAnimJab1_joint11[138];
extern u16 dFTNessAnimJab1_joint12[48];
extern u16 dFTNessAnimJab1_joint13[10];
extern u16 dFTNessAnimJab1_joint15[10];
extern u16 dFTNessAnimJab1_joint16[70];
extern u16 dFTNessAnimJab1_joint18[36];
extern u16 dFTNessAnimJab1_joint19[78];
extern u16 dFTNessAnimJab1_joint21[58];
extern u16 dFTNessAnimJab1_joint22[76];
extern u16 dFTNessAnimJab1_joint24[42];
extern u16 dFTNessAnimJab1_joint25[80];
extern u16 dFTNessAnimJab1_joint26[44];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimJab1_joints[] = {
	(AObjEvent32 *)dFTNessAnimJab1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimJab1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimJab1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimJab1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimJab1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimJab1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimJab1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimJab1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimJab1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimJab1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimJab1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimJab1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimJab1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimJab1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimJab1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimJab1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimJab1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimJab1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimJab1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimJab1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimJab1_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 68, 537, -335, -28, -537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 8, 464, 34,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -96, -420,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 502, 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, -8, 537, 47, 22, -328,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), 0, 1, 0, 0, -16, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimJab1_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 30, -361, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimJab1_joint4[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 143, 0, 541, 0, 248,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 236, 495, -233, 231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, 0, 234, -206, -205, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 385, 0, -102, 9, -566, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 82, -39, -25, 7, -129, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -41, 0, 7, 0, 58,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimJab1_joint5[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, -545, -1347, 256, -1192, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 652, 299, -1090, -121, -1407, -851,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1796, 545, -1589, -287, -2895, -731,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1743, -16, -1666, -104, -2871, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 55, -1799, -80, -2532, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1849, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1854, 50, -2317, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1863, 4, -2280, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1765, -38, -2172, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1873, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1978, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1727, 50, -1983, 57, -2158, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1410, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1867, 65, -1845, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1857, -92, -1659, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1407, -246, -1321, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1188, -104, -1433, 31, -1155, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1198, 9, -1347, 86, -1192, -36,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimJab1_joint6[66] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 465,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -8, 232, 4915, 6143, 4915, 3891, 4915, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -9, 4, 10240, -234, 7987, -234, 7987, -234,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -875, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 401,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimJab1_joint7[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 143, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimJab1_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 535, 364, -598, -32, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, 0, -271, 0, 0, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -5, 281, 7, 179, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -10, -2, 358, 5, 35, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -10, 0, 364, 0, -32, -16,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimJab1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimJab1_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 756, 569, 842, -119, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 340, 876, 1412, 482, -279, -545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1338, 690, 1534, 13, -1210, -455,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1337, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1721, 403, -1191, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2146, 313, -1088, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -975, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1967, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1323, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1352, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1270, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1334, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1158, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1893, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1782, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1288, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1720, -6, -1322, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, 84, 1104, -49, -1236, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1890, -8, 1058, -63, -1101, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1751, -291, 977, -29, -1241, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1307, -279, 1000, 30, -1637, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, -115, 1038, 37, -1727, -90,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimJab1_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -952,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1511, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 755,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -543, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimJab1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimJab1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimJab1_joint16[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 99, -279, -90, -297, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -265, 34, -370, -30, -428, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -20, -341, 18, -310, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -360, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -280, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -295, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -297, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -366, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -372, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -272, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -273, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, 6, -279, -6, -297, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimJab1_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 760, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 460, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimJab1_joint19[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -10, 12, 325, 26, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -45, 337, 191, 116, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, -32, 394, 22, -385, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -51, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 342, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 70, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 316, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 11, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 9, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -4, 12, 0, 26, 26,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimJab1_joint21[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -163, 0, 78, 0, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 0, 68, -1, 102, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, 111, 68, -3, 101, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, -1, 59, -3, 87, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 54, -3, 34, -4, 173, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 21, -7, 7, -5, 42, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimJab1_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, -31, 136, -70, -210, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -158, 191, 65, 124, -414, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, 206, 384, 158, 433, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 254, -5, 382, -2, 432, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, -10, 380, -1, 423, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 198, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 23, -28, 165, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2, -42, 127, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -125, -10, -180, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 158, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -2, 136, -22, -210, -30,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimJab1_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 254,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 268, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 48,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimJab1_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3140, -15, 25, -1, -202, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 55, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3156, 78, -244, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2984, 84, -172, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -170, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2986, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2987, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -3099, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 25, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -136, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -186, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3124, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3140, -16, 25, 0, -202, -15,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimJab1_joint26[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 56, -125,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, 0, 154, 0, -173, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 70, -18, 6, -9, -7, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
