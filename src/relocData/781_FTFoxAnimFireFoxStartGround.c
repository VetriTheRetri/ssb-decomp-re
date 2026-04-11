/* AnimJoint data for relocData file 781 (FTFoxAnimFireFoxStartGround) */
/* 1168 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFoxStartGround_joint1[18];
extern u16 dFTFoxAnimFireFoxStartGround_joint2[16];
extern u16 dFTFoxAnimFireFoxStartGround_joint4[16];
extern u16 dFTFoxAnimFireFoxStartGround_joint5[64];
extern u16 dFTFoxAnimFireFoxStartGround_joint6[24];
extern u16 dFTFoxAnimFireFoxStartGround_joint7[14];
extern u16 dFTFoxAnimFireFoxStartGround_joint8[20];
extern u16 dFTFoxAnimFireFoxStartGround_joint10[10];
extern u16 dFTFoxAnimFireFoxStartGround_joint11[70];
extern u16 dFTFoxAnimFireFoxStartGround_joint12[36];
extern u16 dFTFoxAnimFireFoxStartGround_joint13[14];
extern u16 dFTFoxAnimFireFoxStartGround_joint15[10];
extern u16 dFTFoxAnimFireFoxStartGround_joint16[32];
extern u16 dFTFoxAnimFireFoxStartGround_joint18[24];
extern u16 dFTFoxAnimFireFoxStartGround_joint20[30];
extern u16 dFTFoxAnimFireFoxStartGround_joint21[30];
extern u16 dFTFoxAnimFireFoxStartGround_joint23[24];
extern u16 dFTFoxAnimFireFoxStartGround_joint24[30];
extern u16 dFTFoxAnimFireFoxStartGround_joint25[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFireFoxStartGround_joints[] = {
	(u32)dFTFoxAnimFireFoxStartGround_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFireFoxStartGround_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFireFoxStartGround_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFireFoxStartGround_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFireFoxStartGround_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFireFoxStartGround_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFireFoxStartGround_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFireFoxStartGround_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFireFoxStartGround_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFireFoxStartGround_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFireFoxStartGround_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFireFoxStartGround_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFireFoxStartGround_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFireFoxStartGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFireFoxStartGround_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFireFoxStartGround_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFireFoxStartGround_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFireFoxStartGround_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFireFoxStartGround_joint25, /* [24] joint 25 */
	0xFFFF0116, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimFireFoxStartGround_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 912, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimFireFoxStartGround_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -141, -338, -3, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimFireFoxStartGround_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 309,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 156, 81, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 514,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimFireFoxStartGround_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 44, -165, -25, 258, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 59, 146, -330, -152, 152, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, 43, -495, -108, -127, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, -233, -547, 103, -119, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -238, -360, -288, 319, 428, 267,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -904, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 68, 415, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -152, -224, 451, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1014, -110, -358, -205, 645, 194,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFireFoxStartGround_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -124,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1056, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -566, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, 315,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimFireFoxStartGround_joint7[14] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 269, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 31), 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimFireFoxStartGround_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 9, 136, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -228, 156, 75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimFireFoxStartGround_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFireFoxStartGround_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -38, 1336, -28, 1945, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1497, -352, 1710, -473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1307, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1155, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1258, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 998, -286, 1010, -437,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1336, 531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1150, 55, 1358, 633,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1987, 499, 1369, 133, 2102, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2336, 237, 1416, -45, 2161, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2462, 126, 1277, -138, 2238, 76,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFireFoxStartGround_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -171,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -949, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1184, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimFireFoxStartGround_joint13[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 536,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 268, 268,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimFireFoxStartGround_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFireFoxStartGround_joint16[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 14, -1385, 23, -1635, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1355, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1283, -26, -1694, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1256, -20, -1638, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1243, -12, -1376, -21, -1610, 28,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimFireFoxStartGround_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 632, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, -65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimFireFoxStartGround_joint20[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -2, 125, -2, -56, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -4, -1, 95, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -159, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 0, 95, 0, -70, 32,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFireFoxStartGround_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1963, -8, -1746, -19, -1473, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1961, 12, -1740, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1498, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1454, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1969, 7, -1717, 23, -1428, 25,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFireFoxStartGround_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 606, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimFireFoxStartGround_joint24[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 2, -102, 1, -226, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 25, -2, -96, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -354, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -1, -98, -1, -242, 41,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFireFoxStartGround_joint25[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -217, 33, 268, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 268, 73, 357, 15,
	ftAnimEnd(),
	0x0000, 0x4006, 0xFF4E, 0xFF86, 0x48E8, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2007, 0x0003, 0x0230, 0xFFC0, 0xFFB1, 0x000C, 0x2007, 0x0003, 0xFDCC, 0xFF90, 0xFFD1, 0x000F, 0x2007, 0x0002, 0x0000, 0x00F4, 0x0000, 0x0011, 0x0000, 0x0000,
};
