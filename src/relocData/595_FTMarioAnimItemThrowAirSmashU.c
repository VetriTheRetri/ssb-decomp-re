/* AnimJoint data for relocData file 595 (FTMarioAnimItemThrowAirSmashU) */
/* 2528 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemThrowAirSmashU_joint1[84];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint2[42];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint4[56];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint5[96];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint6[30];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint7[14];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint8[44];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint10[38];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint11[138];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint12[38];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint13[34];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint15[10];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint16[130];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint18[62];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint20[114];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint21[114];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint23[46];
extern u16 dFTMarioAnimItemThrowAirSmashU_joint24[126];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTMarioAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashU_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimItemThrowAirSmashU_joint1[84] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -22, 0, 0, 0, 0, 600, -46, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 223, 55, 0, 0, 360, -640, 0, -1,
	ftAnimSetValT(FT_ANIM_ROTY, 2), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 360, 1724, 0, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 1006, 206, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 540, -180, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 0, 600, 5, 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimItemThrowAirSmashU_joint2[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 7, 0, -1, 0, 9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -804, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -804, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -1, 0, 2, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimItemThrowAirSmashU_joint4[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, -130, 0, -14, 0, -26, 0, 0, -14, -3, -92, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, -44, 402, 134,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, -14, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 402,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 402, -226,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 6, -276, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 134, 2, 0, 2, 0, 4,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimItemThrowAirSmashU_joint5[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 247, 798, -474, -77, -88, -682,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -513, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1514, 235, -1226, -228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1516, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1517, -252, -1226, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1010, -446, -636, -46, -746, 416,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -579, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 624, -205, -393, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 598, -25, -370, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 428, -7, -292, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -568, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -404, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 420, -64, -388, -29, -295, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, -86, -462, -42, -147, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, -53, -474, -12, -88, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimItemThrowAirSmashU_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -97,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimItemThrowAirSmashU_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -625, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 24), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimItemThrowAirSmashU_joint8[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 127, -53, 0, 33,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -428, -185,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -428, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -366, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 127, 8, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimItemThrowAirSmashU_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 332, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -160, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -4, 0, 5, 0, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimItemThrowAirSmashU_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3015, 217, 462, 8, 3138, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 292, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3233, 343, 3416, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3701, 230, 3957, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3689, 233, 3957, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4162, 360, 4385, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4633, 173, 4812, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4756, 66, 140, -92, 4993, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 4781, 18, 195, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4993, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5020, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5166, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4805, 33, 234, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4919, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 673, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5252, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4811, -48, 5061, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4823, 74, 5060, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4959, 430, 5184, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5684, 570, 735, -11, 5890, 549,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 503, -52, 6356, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6099, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 6217, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6232, 15, 462, -41, 6355, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemThrowAirSmashU_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -442, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 57,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimItemThrowAirSmashU_joint13[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 1429,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1340,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimItemThrowAirSmashU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemThrowAirSmashU_joint16[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, -161, -3, -202, -247, -275,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -418, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -765, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 193, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 226, 18, -399, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -331, -392, 158, -841, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -436, -328, -82, 169, 4, 423,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -53, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -427, 14, 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -9, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -259, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -60, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -241, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -511, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -216, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -264, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 98, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, 10, -3, -1, -247, 17,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimItemThrowAirSmashU_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 580,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1203, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1209, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, -604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -604,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 742, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 253, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimItemThrowAirSmashU_joint20[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1348, 183, 1642, -62, 2044, -236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1646, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1449, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1531, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1500, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1697, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1707, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1764, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1567, 74, 2263, 282,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2323, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1567, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1677, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1395, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2298, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2246, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2005, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1898, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1562, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1635, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1911, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2036, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1373, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1357, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, -9, 1642, 7, 2044, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimItemThrowAirSmashU_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, -137, 162, 18, -346, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -280, -18, 88, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, 204, 102, 15, -719, 344,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 172, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 128, 221, -61, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 152, 12, -48, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 51, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -58, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -448, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -39, -57, 189, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 5, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 168, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -368, 9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 50, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 15, 162, -5, -346, 12,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimItemThrowAirSmashU_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 166,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 997, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 707, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 726, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimItemThrowAirSmashU_joint24[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 100, -1474, -30, -1443, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1767, 2, -1504, -250, -1483, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, -32, -1975, -259, -1683, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1769, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2023, -22, -1670, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2020, 58, -1646, 235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1743, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1702, 5, -1200, 333,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1760, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -997, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1716, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1478, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1738, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1788, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1305, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1416, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1443, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1779, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1678, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1475, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1464, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -11, -1474, -9, -1443, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
