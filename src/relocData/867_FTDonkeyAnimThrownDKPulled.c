/* AnimJoint data for relocData file 867 (FTDonkeyAnimThrownDKPulled) */
/* 1840 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrownDKPulled_joint2[54];
extern u16 dFTDonkeyAnimThrownDKPulled_joint3[32];
extern u16 dFTDonkeyAnimThrownDKPulled_joint5[32];
extern u16 dFTDonkeyAnimThrownDKPulled_joint6[56];
extern u16 dFTDonkeyAnimThrownDKPulled_joint7[28];
extern u16 dFTDonkeyAnimThrownDKPulled_joint8[22];
extern u16 dFTDonkeyAnimThrownDKPulled_joint9[34];
extern u16 dFTDonkeyAnimThrownDKPulled_joint11[20];
extern u16 dFTDonkeyAnimThrownDKPulled_joint12[60];
extern u16 dFTDonkeyAnimThrownDKPulled_joint13[28];
extern u16 dFTDonkeyAnimThrownDKPulled_joint14[34];
extern u16 dFTDonkeyAnimThrownDKPulled_joint15[8];
extern u16 dFTDonkeyAnimThrownDKPulled_joint17[26];
extern u16 dFTDonkeyAnimThrownDKPulled_joint18[92];
extern u16 dFTDonkeyAnimThrownDKPulled_joint20[40];
extern u16 dFTDonkeyAnimThrownDKPulled_joint22[80];
extern u16 dFTDonkeyAnimThrownDKPulled_joint23[90];
extern u16 dFTDonkeyAnimThrownDKPulled_joint25[132];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimThrownDKPulled_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTDonkeyAnimThrownDKPulled_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimThrownDKPulled_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimThrownDKPulled_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimThrownDKPulled_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimThrownDKPulled_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimThrownDKPulled_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimThrownDKPulled_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF019E, /* [25] END */
};

/* Joint 2 */
u16 dFTDonkeyAnimThrownDKPulled_joint2[54] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 0, 12, -179, -522, -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -24, 0, -121, -13, -565, 261,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -24, 0, 0, 95, -299, 294,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -24, 0, -19, 73, -252, -62,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -24, 0, 78, 37, -365, -569,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -24, 0, 6, -1167, -655, -600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -24, -651, -740,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimThrownDKPulled_joint3[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -41, -16,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -265, -11,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -439, 13, -41, 0, -16, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -86, -41, -16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimThrownDKPulled_joint5[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 571, -7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 673, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 750, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 776, -58, 24, 0, 41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 284, 24, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimThrownDKPulled_joint6[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -352, -15, -117, -7, -12, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 48, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -504, -63, -135, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -566, -55, -155, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -292, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -468, 264,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -189, -443,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -456, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, 331, -344, 111, -812, -623,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimThrownDKPulled_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -550, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -448, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -669, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 234,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimThrownDKPulled_joint8[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -4, 0, 1, 0, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -114, 26, 114,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimThrownDKPulled_joint9[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -67, -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 174, 40,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -67, 0, -44, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 1040,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimThrownDKPulled_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -961, -34,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -932, 1, 70, 0, 29, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -932, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimThrownDKPulled_joint12[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1865, 15, -1799, 6, 1678, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1751, 4, 1746, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1851, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1922, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2303, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1749, -16, 1764, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2018, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1768, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2308, -153, 1763, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1996, -343, 1562, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1621, -375, -1966, 51, 1202, -359,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimThrownDKPulled_joint13[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -609, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -604, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -529, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 173,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimThrownDKPulled_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 13, 0, 15, 0, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 270, 16, 185, -1, 217, 10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 360, 13, -25, -11, 162, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 482, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimThrownDKPulled_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimThrownDKPulled_joint17[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -404, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1310, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -609, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimThrownDKPulled_joint18[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1837, 179, -1280, 54, 1841, -291,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1655, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1211, 84, 956, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1068, 107, 859, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1161, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2082, -342, 1125, 219,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2331, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1298, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1280, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1182, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1267, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2278, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1904, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1264, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1250, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1873, 117, 1256, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1669, 204, 1119, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1464, 204, -1324, -57, 1038, -81,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimThrownDKPulled_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 817, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1188, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 645, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 788, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 852, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimThrownDKPulled_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, -29, -95, 55, -559, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -49, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 336, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 119, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 204, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 400, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 204, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 115, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -186, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 340, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 194, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, -116, -167, 63, 190, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, -128, -60, 120, 103, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -51, 73, 133, 1, -101,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimThrownDKPulled_joint23[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 88, -73, 172, 27, 156, -275,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 232, 187, -568, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 298, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 248, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 440, 157, -463, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 425, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -370, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 232, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 388, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 252, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -325, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 225, -131, -341, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -240, 307, -35, -715, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -245, 161, -145, -1011, -295,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimThrownDKPulled_joint25[132] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 823, 286,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1180, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 585, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 758, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1068, 42,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00AC, 0xFF3E, 0x00D2, 0xFF98, 0xFDAF, 0xFFD1, 0x2805, 0x0005, 0xFE0D, 0xFFD7, 0x2809, 0x0007, 0x003B, 0x0044, 0x2003, 0x0001, 0xFFEB, 0xFFAB, 0x2003, 0x0001, 0x0001, 0x0008, 0x2803, 0x000A, 0xFF4F, 0x00D2, 0x0801, 0x0003, 0x2005, 0x0001, 0xFDFC, 0xFFFD, 0x2805, 0x0007, 0xFFA5, 0x000A, 0x0801, 0x0001, 0x2009, 0x0001, 0x0074, 0x002F, 0x2809, 0x0009, 0x00F0, 0xFFEC, 0x0801, 0x0004, 0x2003, 0x0001, 0x0049, 0x00A8, 0x2803, 0x0003, 0x0084, 0xFFB1, 0x2005, 0x0001, 0xFFA6, 0xFFFC, 0x2805, 0x0005, 0xFFEC, 0x0056, 0x0801, 0x0002, 0x2003, 0x0001, 0x000C, 0xFF3A, 0x200B, 0x0001, 0xFEF9, 0xFFBB, 0x00D1, 0xFF90, 0x200B, 0x0001, 0xFF83, 0x008E, 0x000E, 0xFF4D, 0x200F, 0x0001, 0x0015, 0x0093, 0x003D, 0x0051, 0xFF6B, 0xFF5C, 0x0000,
};
