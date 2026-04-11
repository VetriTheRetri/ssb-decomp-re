/* AnimJoint data for relocData file 1778 (FTNessAnimUTilt) */
/* 3712 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimUTilt_joint1[72];
extern u16 dFTNessAnimUTilt_joint2[52];
extern u16 dFTNessAnimUTilt_joint4[38];
extern u16 dFTNessAnimUTilt_joint5[168];
extern u16 dFTNessAnimUTilt_joint6[110];
extern u16 dFTNessAnimUTilt_joint7[50];
extern u16 dFTNessAnimUTilt_joint8[78];
extern u16 dFTNessAnimUTilt_joint10[10];
extern u16 dFTNessAnimUTilt_joint11[186];
extern u16 dFTNessAnimUTilt_joint12[112];
extern u16 dFTNessAnimUTilt_joint13[104];
extern u16 dFTNessAnimUTilt_joint15[10];
extern u16 dFTNessAnimUTilt_joint16[144];
extern u16 dFTNessAnimUTilt_joint18[66];
extern u16 dFTNessAnimUTilt_joint19[134];
extern u16 dFTNessAnimUTilt_joint21[62];
extern u16 dFTNessAnimUTilt_joint22[148];
extern u16 dFTNessAnimUTilt_joint24[66];
extern u16 dFTNessAnimUTilt_joint25[194];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimUTilt_joints[] = {
	(u32)dFTNessAnimUTilt_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimUTilt_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimUTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimUTilt_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimUTilt_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimUTilt_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimUTilt_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimUTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimUTilt_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimUTilt_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimUTilt_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimUTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimUTilt_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimUTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimUTilt_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimUTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimUTilt_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimUTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimUTilt_joint25, /* [24] joint 25 */
	0xFFFF0380, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimUTilt_joint1[72] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -3, 33, 400, -394,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, -66, 348, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -36, -29, 971, 500,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -27,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), -25, 12,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 986, -606,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -20, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -28,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 19), -16, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 378, -309,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 361, 125,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 537, 12,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimUTilt_joint2[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 320, 73, -426, -16, 117, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 320, -84, -426, 16, 117, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -48, -360, 9, 8, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -16, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -360, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 217, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimUTilt_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -168, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -37, -168, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -148, -21, 11, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -148, 4, 11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimUTilt_joint5[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1326, 577, -1249, -292, -1266, -730,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1904, 280, -1542, -81, -1996, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1887, -7, -1413, 74, -1965, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1531, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1889, 4, -1983, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1897, 356, -1964, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2601, 318, -2918, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2534, -46, -1548, -4, -2855, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1321, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2605, 14, -2958, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2621, 17, -2981, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2854, 64, -3333, -88,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1301, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1147, 93,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2932, 386, -3433, -387,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4519, 647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, -59, -4107, -507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1266, -135, -4448, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4922, 164, -1306, -8, -4758, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1307, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4847, -79, -4666, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4418, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4763, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 4405, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1296, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1258, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4452, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4510, 45, -4457, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4543, 33, -1249, 8, -4483, -25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimUTilt_joint6[110] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 7, 4096, -1, 4096, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -827, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 413, 7372, 539, 7372, 541, 7372, 533,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 6794, -436, 6805, -436, 6763, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -9, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -1, 4096, -7, 4096, 1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -759, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -616, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimUTilt_joint7[50] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 491, 4096, 491, 4096, 491,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 242, 5324, 245, 5324, 245,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 5310, -204, 5324, -204, 5324, -204,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -115, 4096, -117, 4096, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimUTilt_joint8[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, 35, -41, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 54, -105, -41, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -369, -25, -19, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -359, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 133, 25, -33, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -23, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 242, 0, 268, 25, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimUTilt_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimUTilt_joint11[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2024, -285, 1038, 360, -1727, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2309, -156, 1398, 129, -2240, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2338, -20, 1297, -69, -2354, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2320, -97, 1286, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2400, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2298, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2546, -107, 1521, 106, -3062, -351,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2529, 1, 1490, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3000, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3123, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2531, -3, 1482, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1455, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2676, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3156, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3371, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1454, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2694, -115, 1414, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2907, 156, 1104, -63, -3362, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2382, 295, 1287, 170, -2299, 595,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2320, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1445, 77, -2170, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1403, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2106, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2319, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2143, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1378, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1066, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2032, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1743, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1017, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1026, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2064, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2028, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2024, 4, 1038, 12, -1727, 15,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimUTilt_joint12[112] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 6, 4096, 2, 4096, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 386, 7372, 543, 7372, 545, 7372, 543,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 6813, -518, 6823, -505, 6813, -513,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4091, -1, 4091, -1, 4081, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 234,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -578, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimUTilt_joint13[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 90, 54, 126, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -40, -66, 365, 207,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 491, 4096, 491, 4096, 491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, 37, 560, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 74, -13, 669,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 378, 1, 5324, 487, 5324, 491, 5324, 491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 16, -35,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 16, -35, 378,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 5315, -204, 5324, -204, 5324, -204,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, -93, 4096, -94, 4096, -94,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 11, -27, 671,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 121, 159, 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimUTilt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimUTilt_joint16[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 226, -279, 44, -297, -638,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -102, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -250, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1068, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -95, 14, -1109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -114, -260, 88, -1066, 541,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, -137, -72, 90, -26, 542,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -357, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, -1, 17, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -80, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -76, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -357, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -405, -18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -301, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, 28, -102, -130, -388, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -81, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -466, -76, -977, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -492, -15, -1076, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -627, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -312, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -278, -76,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -340, -43, -350, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -24, -279, 32, -297, 52,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimUTilt_joint18[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 321,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -428,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, 419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 967, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 629, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -82,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimUTilt_joint19[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -26, 12, -235, 26, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 40, -27, -64, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -223, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -251, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -223, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -27, 69, -68, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, 101, -70, 85, 638, 358,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 175, 0, 648, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 26, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 534, -54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 41, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 39, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -66, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 44, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, 12, 0, 26, 30,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimUTilt_joint21[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -783, -179, -5, -1, -45, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -783, 195, -5, 12, -45, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 111, 45, 7, -38, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2, -33, 45, 11, -38, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -678, -33, 270, 16, 37, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -641, 61, 355, -27, -62, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimUTilt_joint22[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, 64, 1472, -354, 1397, -916,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, -18, 1117, -177, 480, -569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1443, -77, 1116, 7, 258, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1391, -35, 1131, 22, 194, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1372, -442, 1161, -525, 297, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 506, -430, 81, -547, 44, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 511, 0, 66, -10, 91, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 438, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 90, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -28, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -221, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 421, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 275, -170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 103, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 236, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7, -242, -641, -266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -301, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, -74, -813, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 131, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -712, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -259, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -282, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -141, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 14, 136, 5, -210, 48,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimUTilt_joint24[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 389,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -459,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1026, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 639, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimUTilt_joint25[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, -40, -1633, 27, -1810, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1564, 54, -1574, -20, -1629, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1672, 0, -1615, 14, -1653, 231,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1550, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1563, -48, -1166, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1575, 9, -1140, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1454, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1138, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1557, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1475, 12,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1443, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1709, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1182, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1413, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1464, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1736, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1766, -250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1995, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1766, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1691, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 7, -2021, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1635, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1919, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1849, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -7, -1633, 1, -1810, 38,
	ftAnimEnd(),
	0x400E, 0x0038, 0x0000, 0x0000, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0xFF39, 0xFFC1, 0x0077, 0x001D, 0xFD18, 0xFF46, 0x200F, 0x0003, 0xFF39, 0x003F, 0x0077, 0xFFE2, 0xFD18, 0x00C2, 0x200F, 0x0001, 0x0037, 0x0024, 0xFFFD, 0xFFEF, 0x0021, 0x006F, 0x200F, 0x0006, 0x0037, 0xFFE4, 0xFFFD, 0xFFF5, 0x0021, 0xFFFB, 0x200F, 0x000E, 0xFDF6, 0xFFE7, 0xFF10, 0x0005, 0xFFB2, 0xFFEB, 0x200F, 0x0003, 0xFE8B, 0x0039, 0x0062, 0x0018, 0xFEBD, 0x0007, 0x380F, 0x0007, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
