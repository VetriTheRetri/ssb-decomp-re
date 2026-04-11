/* AnimJoint data for relocData file 709 (FTFoxAnimThrownDKPulled) */
/* 2176 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrownDKPulled_joint2[82];
extern u16 dFTFoxAnimThrownDKPulled_joint3[18];
extern u16 dFTFoxAnimThrownDKPulled_joint5[16];
extern u16 dFTFoxAnimThrownDKPulled_joint6[114];
extern u16 dFTFoxAnimThrownDKPulled_joint7[54];
extern u16 dFTFoxAnimThrownDKPulled_joint8[10];
extern u16 dFTFoxAnimThrownDKPulled_joint9[34];
extern u16 dFTFoxAnimThrownDKPulled_joint11[10];
extern u16 dFTFoxAnimThrownDKPulled_joint12[114];
extern u16 dFTFoxAnimThrownDKPulled_joint13[54];
extern u16 dFTFoxAnimThrownDKPulled_joint14[10];
extern u16 dFTFoxAnimThrownDKPulled_joint16[10];
extern u16 dFTFoxAnimThrownDKPulled_joint17[84];
extern u16 dFTFoxAnimThrownDKPulled_joint19[52];
extern u16 dFTFoxAnimThrownDKPulled_joint21[88];
extern u16 dFTFoxAnimThrownDKPulled_joint22[92];
extern u16 dFTFoxAnimThrownDKPulled_joint24[36];
extern u16 dFTFoxAnimThrownDKPulled_joint25[104];
extern u16 dFTFoxAnimThrownDKPulled_joint26[52];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimThrownDKPulled_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTFoxAnimThrownDKPulled_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimThrownDKPulled_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimThrownDKPulled_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimThrownDKPulled_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimThrownDKPulled_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimThrownDKPulled_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimThrownDKPulled_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimThrownDKPulled_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimThrownDKPulled_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimThrownDKPulled_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimThrownDKPulled_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimThrownDKPulled_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimThrownDKPulled_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimThrownDKPulled_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimThrownDKPulled_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimThrownDKPulled_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimThrownDKPulled_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimThrownDKPulled_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimThrownDKPulled_joint26, /* [25] joint 26 */
	0xFFFF0214, /* [26] END */
};

/* Joint 2 */
u16 dFTFoxAnimThrownDKPulled_joint2[82] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -120,
	ftAnimSetValRate(FT_ANIM_TRAY), -240, 479,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -60, 137, -120, -411,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -180, -95, -300, 575,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -120, 480, 240, 288,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, 192, -120, -576,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -120, -95,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 120,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -180, 191,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -455, -120,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimThrownDKPulled_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 178,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimThrownDKPulled_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -357,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimThrownDKPulled_joint6[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1829, 66, 1851, -46, 2144, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1835, -117, 1848, -37, 2156, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1988, -76, 1762, 5, 2414, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1883, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1858, 8, 2342, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1779, -31, 2409, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2065, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1866, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1772, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1766, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2040, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2027, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1725, 26, 1849, -13, 1953, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1862, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1713, -519, 1928, 468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2764, -740, 2891, 846,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1770, -46, 3622, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1770, 0, 3622, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3195, -1, 1770, 0, 3626, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrownDKPulled_joint7[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 335,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1032, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimThrownDKPulled_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrownDKPulled_joint9[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -357, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 178, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 178, -17, 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 89, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 89, 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimThrownDKPulled_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrownDKPulled_joint12[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1387, -66, 1365, 46, -1072, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1372, 118, 1376, 40, -1041, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1226, 72, 1460, -9, -796, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1335, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1358, -11, -874, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1437, 30, -807, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1155, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1350, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1446, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1450, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1189, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1491, -27, 1367, 12, -1263, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1506, 238, 1376, 121, -1293, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1013, 547, 1609, -33, -599, 515,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -411, 302, 1309, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -409, 0, 1306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -411, -2, 1309, 3, -262, -3,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimThrownDKPulled_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimThrownDKPulled_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrownDKPulled_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrownDKPulled_joint17[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -22, -1, 8, -1, 526, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 12, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 82, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -549, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -49, 56, 279,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 27, 0, 168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, -14, -93, -7, 167, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrownDKPulled_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 996, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimThrownDKPulled_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, -24, 5, 2, 24, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 29, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 10, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 241, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, 7, 356, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 163, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -24, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 254, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 119, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -31, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, 0, 89, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, -66, 119, 29, -31, -101,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrownDKPulled_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1631, 1, -1600, -1, 2135, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1616, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1602, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1690, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1540, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1059, 170,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1598, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 1860,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1220, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -93, 1684, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1789, -77, 1335, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1409, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1758,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1820, -40, -1789, -30, 1335, -73,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrownDKPulled_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 996, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -498,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimThrownDKPulled_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 30, 17, -2, 25, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -121, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 30, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 67, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 246, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -59, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -23, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 39, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -7, 144, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -16, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, 55, 465, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, -33, 95, 33, 481, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -84, 177, 81, 182, -298,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrownDKPulled_joint26[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -625, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -149, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1593, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -297, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -625,
	ftAnimEnd(),
	0x4002, 0x0000, 0x480C, 0x0000, 0x0000, 0x2003, 0x0004, 0xFEC8, 0x003A, 0x2003, 0x0002, 0x0161, 0xFFE5, 0x2003, 0x0005, 0xFE0B, 0xFFEB, 0x3803, 0x0007, 0x0059, 0x0000, 0x0000, 0x0000, 0x0000,
};
