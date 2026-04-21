/* AnimJoint data for relocData file 770 (FTFoxAnimAttackAirU) */
/* 3280 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimAttackAirU_joint1[66];
extern u16 dFTFoxAnimAttackAirU_joint2[48];
extern u16 dFTFoxAnimAttackAirU_joint4[94];
extern u16 dFTFoxAnimAttackAirU_joint5[194];
extern u16 dFTFoxAnimAttackAirU_joint7[84];
extern u16 dFTFoxAnimAttackAirU_joint10[74];
extern u16 dFTFoxAnimAttackAirU_joint11[212];
extern u16 dFTFoxAnimAttackAirU_joint12[74];
extern u16 dFTFoxAnimAttackAirU_joint13[74];
extern u16 dFTFoxAnimAttackAirU_joint15[10];
extern u16 dFTFoxAnimAttackAirU_joint16[128];
extern u16 dFTFoxAnimAttackAirU_joint18[64];
extern u16 dFTFoxAnimAttackAirU_joint20[96];
extern u16 dFTFoxAnimAttackAirU_joint21[144];
extern u16 dFTFoxAnimAttackAirU_joint23[56];
extern u16 dFTFoxAnimAttackAirU_joint24[118];
extern u16 dFTFoxAnimAttackAirU_joint25[20];
extern u16 dFTFoxAnimAttackAirU_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimAttackAirU_joints[] = {
	(u32)dFTFoxAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimAttackAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimAttackAirU_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimAttackAirU_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimAttackAirU_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimAttackAirU_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimAttackAirU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimAttackAirU_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimAttackAirU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimAttackAirU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimAttackAirU_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimAttackAirU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimAttackAirU_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimAttackAirU_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimAttackAirU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimAttackAirU_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -253, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 415, 296,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -535,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1945, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -470, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 3080, 47,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 3216,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimAttackAirU_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 70, 166, -113, -555,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -207, -190, -140, 555,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -159, 196,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 28, 10,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 22), 0, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimAttackAirU_joint4[94] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, -69,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 296,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 244,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 617, -30,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -232, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -430, 64, -2, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 36, 65, 111, -56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 309, -238,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -17, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 34, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -175, -11,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 72, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -46, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 144, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -268, -32,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimAttackAirU_joint5[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 279, 19, -282, 18, -461, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 333, -1, -206, -6, -537, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, 34, -277, -48, -422, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -229, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 403, 253, -534, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 802, 355, -904, -315,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1193, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1114, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1173, 29, -140, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -181, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1262, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1160, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1214, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, -64, -1217, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -503, -24, -1714, -119,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1328, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2257, 241,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -522, -12, -1841, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2531, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -363, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2547, 232, -130, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -218, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2835, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2495, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3361, -204,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -514, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2984, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3489, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -451, 49, -3576, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3655, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -294, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3503, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3500, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3661, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3677, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3496, -3, -282, 11, -3678, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimAttackAirU_joint7[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -207, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1107, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1209, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1240, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -262, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimAttackAirU_joint10[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1, 7,
	ftAnimSetValT(FT_ANIM_ROTX, 6), 317,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -21, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -8, -17,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -184, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 10, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -19, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 9, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 264, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 178, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 268, -4, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimAttackAirU_joint11[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1240, 130, 1090, 16, 1592, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -952, 25, 1997, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1170, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1438, 230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1814, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -923, 80, 2069, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -339, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2172, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1706, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1069, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -303, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 166, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2246, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2570, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1086, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1304, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 162, -19, 2511, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -291, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2221, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1388, 93, 2196, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1665, -57, 1889, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -318, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -974, -191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1558, -125, 1883, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1340, 54, 1430, -214,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1159, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1366, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, 123, 1227, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1701, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1360, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1339, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1248, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1646, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1177, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1423, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1557, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1227, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1320, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1092, -44, 1483, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1245, 74, 1088, -4, 1586, 103,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimAttackAirU_joint12[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -859, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -681, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -821, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -813, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -436, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -225, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimAttackAirU_joint13[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -32, 0, -34,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -31, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 251, -51, 76, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -251, 1, 330, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 81, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 145, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 153, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 141, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 76, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 191, -38,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, -34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -32,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimAttackAirU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimAttackAirU_joint16[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 15, -5, 1, 18, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -31, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -46, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -19, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -76, 221,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -30, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, 177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 68, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -271, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -56, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 255, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -314, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -214, 74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 32, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -10, 6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -27, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 26, -5, 5, 18, -5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimAttackAirU_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1178, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 515, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 202, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimAttackAirU_joint20[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -4, -64, -3, 610, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 250, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -19, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -5, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -75, -59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 569, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 64, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 165, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 194, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 19, -27,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -64, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 605, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -13, -64, 0, 610, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimAttackAirU_joint21[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1616, 68, 1603, -56, 1116, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1413, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1259, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1384, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1342, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1200, -126,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1589, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1545, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1412, -223, 1267, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1919, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1647, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1680, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1557, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2082, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2212, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -27, 1560, 10, 2107, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1927, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1721, 57, 1332, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1780, 58, 1300, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1206, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1684, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2037, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1962, 120,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1110, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1837, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1655, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1634, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1616, 39, 1603, -31, 1116, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimAttackAirU_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 648, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 820, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 604, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimAttackAirU_joint24[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, -20, 124, -3, -91, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 246, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -42, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -35, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -23, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 64, 169, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -15, 87, 30, 304, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 247, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -160, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -82, -9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 120, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 212, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 298, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 117, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 6, 124, 3, -91, -9,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimAttackAirU_joint25[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 506, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -510, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 29), 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimAttackAirU_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 402, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -432, -18, 0, -14, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -172, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -448, -263,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 402, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
