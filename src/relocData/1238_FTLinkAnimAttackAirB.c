/* AnimJoint data for relocData file 1238 (FTLinkAnimAttackAirB) */
/* 3072 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimAttackAirB_joint1[50];
extern u16 dFTLinkAnimAttackAirB_joint2[86];
extern u16 dFTLinkAnimAttackAirB_joint4[100];
extern u16 dFTLinkAnimAttackAirB_joint5[148];
extern u16 dFTLinkAnimAttackAirB_joint6[64];
extern u16 dFTLinkAnimAttackAirB_joint7[58];
extern u16 dFTLinkAnimAttackAirB_joint9[8];
extern u16 dFTLinkAnimAttackAirB_joint10[74];
extern u16 dFTLinkAnimAttackAirB_joint11[48];
extern u16 dFTLinkAnimAttackAirB_joint12[8];
extern u16 dFTLinkAnimAttackAirB_joint13[8];
extern u16 dFTLinkAnimAttackAirB_joint16[8];
extern u16 dFTLinkAnimAttackAirB_joint17[34];
extern u16 dFTLinkAnimAttackAirB_joint18[46];
extern u16 dFTLinkAnimAttackAirB_joint20[8];
extern u16 dFTLinkAnimAttackAirB_joint21[168];
extern u16 dFTLinkAnimAttackAirB_joint23[72];
extern u16 dFTLinkAnimAttackAirB_joint25[104];
extern u16 dFTLinkAnimAttackAirB_joint26[194];
extern u16 dFTLinkAnimAttackAirB_joint28[80];
extern u16 dFTLinkAnimAttackAirB_joint29[110];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimAttackAirB_joints[] = {
	(u32)dFTLinkAnimAttackAirB_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimAttackAirB_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimAttackAirB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimAttackAirB_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimAttackAirB_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimAttackAirB_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimAttackAirB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimAttackAirB_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimAttackAirB_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimAttackAirB_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimAttackAirB_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimAttackAirB_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimAttackAirB_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimAttackAirB_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimAttackAirB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimAttackAirB_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimAttackAirB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimAttackAirB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimAttackAirB_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimAttackAirB_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimAttackAirB_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimAttackAirB_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimAttackAirB_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 744,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 6), 0, 0, -480, -349,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 31, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 5), 158, 31, -480, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 131, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 7), 1787, 142, -720, -147,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 36, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 6), 2010, 37, -720, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 64, 261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 16), 3216, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimAttackAirB_joint2[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, -14, -623, 28, -9, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -26, 194, 388, 197, 130, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 784, 115, 164, -31, 807, 96,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 784, 0, 164, 0, 807, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -120, 15, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -581, -105, 116, -3, -299, -85,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -581, 0, 116, 0, -299, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, 7, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -874, 38, 382, 9, -620, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimAttackAirB_joint4[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 477, 537, 545, 222, 270, 562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1390, 71, 611, -104, 1182, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 693, -300, 231, -225, 366, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 189, 0, -291, 0, -352, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 189, 0, -291, 0, -352, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 91, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 676, 174, -605, -63, -650, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1413, 73, -738, -13, -1115, -46,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1413, 0, -738, 0, -1115, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, 33, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 736, -68, -276, 56, -398, 73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimAttackAirB_joint5[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1916, 18, -1347, -3, 1955, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1309, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1496, 238, 1696, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1230, 227, 1422, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1041, 72, 1214, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1085, -38, 1250, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -978, 111, 1107, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1386, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1335, 88,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -883, 22, 972, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1456, -67, 896, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1278, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1477, 3, 769, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 643, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1701, -99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1281, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1134, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1913, 42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1810, -109, -1119, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1344, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1920, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1944, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1956, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1347, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, 4, -1347, 0, 1955, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimAttackAirB_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1028, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -871, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -918, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -581, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -415, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -524, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -866, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -754, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimAttackAirB_joint7[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -93, -33, 193, -6, 224, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -93, 0, 193, 0, 224, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 6, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 278, 28, 266, 5, 193, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 278, 28, 266, 5, 193, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimAttackAirB_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1, 8,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimAttackAirB_joint10[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1119, 5, 1548, 0, -1445, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1136, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -859, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1638, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1684, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1352, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1112, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1105, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -857, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1117, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1361, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1547, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1441, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1119, -1, 1548, 0, -1445, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimAttackAirB_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -800, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -721, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -358, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -636, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimAttackAirB_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimAttackAirB_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimAttackAirB_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimAttackAirB_joint17[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 151, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 424, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 424, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 195, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 195, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimAttackAirB_joint18[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 10, 34, 93, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 209, 28, 348, 36,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 209, 0, 348, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -16, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 12, -15, 134, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 12, 0, 134, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 0, -199,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimAttackAirB_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimAttackAirB_joint21[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, -106, -1748, 264, 825, -190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 710, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1689, 87, -1420, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1510, 153, -1548, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1451, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1182, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1451, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1451, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1397, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1451, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1527, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1359, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1594, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1160, 19, -1513, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1065, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1211, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1310, -49, 1722, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1722, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1310, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1065, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1251, -75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1722, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1503, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1310, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1330, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1324, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1713, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1474, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 854, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1367, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1552, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1757, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1760, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, -25, -1748, 12, 825, -29,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimAttackAirB_joint23[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 993, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 253, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 840, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 885, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 960, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 977, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1203, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimAttackAirB_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2743, 8, -183, 1, 70, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 345, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2899, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3207, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3306, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3196, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3194, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 70, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3196, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3249, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3480, -627,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4503, -598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4677, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -4715, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4712, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -4856, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4940, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -5494, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5800, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -5978, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5960, 18, -183, 0, 70, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimAttackAirB_joint26[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -363, 318, 21, -270, -250,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 221, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -61, -378, -520, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -454, -206, -521, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1139, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 163, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 265, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1111, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 163, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 206, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, -286, -1182, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -205, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -409, -160, 132, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -190, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 467, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 528, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 315, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -314, -92, -352, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -312, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, 24, -351, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -353, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 328, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -170, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -377, -51,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 325, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 288, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -288, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 12, 318, -7, -270, 17,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimAttackAirB_joint28[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1029, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1202, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1333, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 919, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 284, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 272, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 842, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimAttackAirB_joint29[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2569, 635, -89, 0, 252, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 356, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -91, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3205, 601,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3773, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3031, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2961, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2975, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2961, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3088, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3718, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4211, 729,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5177, 784,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5780, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5860, 1, 374, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 254, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 5756, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5741, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 6119, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6211, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 5823, -62,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5786, -36, -89, 0, 252, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
