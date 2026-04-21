/* AnimJoint data for relocData file 622 (FTMarioAnimAttackAirN) */
/* 2368 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimAttackAirN_joint1[18];
extern u16 dFTMarioAnimAttackAirN_joint2[10];
extern u16 dFTMarioAnimAttackAirN_joint4[46];
extern u16 dFTMarioAnimAttackAirN_joint5[140];
extern u16 dFTMarioAnimAttackAirN_joint6[46];
extern u16 dFTMarioAnimAttackAirN_joint7[12];
extern u16 dFTMarioAnimAttackAirN_joint8[8];
extern u16 dFTMarioAnimAttackAirN_joint10[38];
extern u16 dFTMarioAnimAttackAirN_joint11[148];
extern u16 dFTMarioAnimAttackAirN_joint12[46];
extern u16 dFTMarioAnimAttackAirN_joint13[10];
extern u16 dFTMarioAnimAttackAirN_joint15[10];
extern u16 dFTMarioAnimAttackAirN_joint16[122];
extern u16 dFTMarioAnimAttackAirN_joint18[54];
extern u16 dFTMarioAnimAttackAirN_joint20[132];
extern u16 dFTMarioAnimAttackAirN_joint21[134];
extern u16 dFTMarioAnimAttackAirN_joint23[40];
extern u16 dFTMarioAnimAttackAirN_joint24[122];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimAttackAirN_joints[] = {
	(u32)dFTMarioAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimAttackAirN_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimAttackAirN_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimAttackAirN_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimAttackAirN_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimAttackAirN_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimAttackAirN_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimAttackAirN_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimAttackAirN_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimAttackAirN_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimAttackAirN_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimAttackAirN_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimAttackAirN_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimAttackAirN_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimAttackAirN_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimAttackAirN_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimAttackAirN_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimAttackAirN_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -402, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 30), -402, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimAttackAirN_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 20,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimAttackAirN_joint4[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, 23, 0, 15, 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 318, -57, -49, -81, 43, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -94, -12, -326, -8, 272, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -94, 4, -326, 7, 272, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 4, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 134,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimAttackAirN_joint5[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1361, -395, -1133, -262, 1520, 567,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2500, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1756, -426, -1396, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2214, -189, -1235, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2135, 8, -1131, 4, 2404, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2494, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2196, -34, -1227, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1308, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2238, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2503, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 2465, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1319, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1189, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -2173, 17,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1158, 34, 2446, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2001, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1013, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2151, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1770, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1538, 145, 1756, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1576, -17, 1791, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1514, 64, -1043, -32, 1718, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1372, 19, -1131, -11, 1533, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1361, 10, -1133, -2, 1520, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimAttackAirN_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -865,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 322,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -330, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -377, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimAttackAirN_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimAttackAirN_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimAttackAirN_joint10[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 9, 0, 3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 19, 64, 100, 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 77, -3, 402, 10, -116, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 77, -1, 402, -8, -116, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimAttackAirN_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, -539, 462, 245, -78, -460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -740, -344, 707, 367, -538, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -889, -385, 1196, -88, -667, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1510, -280, 531, -395, -1264, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1450, 34, 404, -73, -1146, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1076, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1446, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 329, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 318, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 424, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1071, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -1188, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1439, 13,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 452, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 655, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1416, 39, -1178, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1161, 242, -948, 231,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 710, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -876, 41, 930, 142, -672, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1078, -185, 995, 48, -867, -181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1133, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1248, -164, -1035, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1790, -36, -1659, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1809, -18, 1146, 13, -1686, -27,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimAttackAirN_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -694,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, 539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -427, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimAttackAirN_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 20,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimAttackAirN_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimAttackAirN_joint16[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, -102, -3, 62, -247, -266,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 24, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 157, 276, -737, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 560, 214, -534, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 590, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -392, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -342, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -365, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 593, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 554, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -375, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -324, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -391, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, 60, -385, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -9, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -305, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 525, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 116, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, -3, -255, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, -1, -3, 0, -247, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimAttackAirN_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 840,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1038, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -307,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 247, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 239, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimAttackAirN_joint20[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -260, 112, -33, -86, 436, -653,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -253, -224, -260, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -597, -267, -550, -215, 287, 392,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -938, -40, -691, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 874, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -975, -34, -689, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -922, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -689, 4,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 541, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -880, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -348, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -682, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -58, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 428, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -335, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -260, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -36, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, 0, -33, 2, 436, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimAttackAirN_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1542, -25, 1445, -98, -1954, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1468, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1138, -215, -2165, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 915, -161, -2251, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 771, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, -174, -2115, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1818, -160, -2702, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1568, 151, -2466, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1471, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2426, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2345, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 760, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 835, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1458, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1357, -12,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2336, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2259, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1377, -131, -2268, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1620, 64, -2499, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, 162, -2115, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1294, -33, -2145, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1314, -17, 866, 35, -2141, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1540, -5, 1441, 8, -1957, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, -2, 1445, 4, -1954, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimAttackAirN_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 236,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1017, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 1053, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 752, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimAttackAirN_joint24[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 61, -134, -63, 164, -232,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 119, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -224, -87, -101, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -373, -111, -15, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 158, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -472, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -142, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 42, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -474, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -434, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -155, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 95, 12,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -135, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 163, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 58, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 0, -134, 0, 164, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
