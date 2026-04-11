/* AnimJoint data for relocData file 688 (FTFoxAnimStunStartD) */
/* 2160 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStunStartD_joint1[28];
extern u16 dFTFoxAnimStunStartD_joint2[14];
extern u16 dFTFoxAnimStunStartD_joint4[22];
extern u16 dFTFoxAnimStunStartD_joint5[116];
extern u16 dFTFoxAnimStunStartD_joint7[48];
extern u16 dFTFoxAnimStunStartD_joint8[28];
extern u16 dFTFoxAnimStunStartD_joint10[10];
extern u16 dFTFoxAnimStunStartD_joint11[114];
extern u16 dFTFoxAnimStunStartD_joint12[56];
extern u16 dFTFoxAnimStunStartD_joint13[66];
extern u16 dFTFoxAnimStunStartD_joint15[10];
extern u16 dFTFoxAnimStunStartD_joint16[70];
extern u16 dFTFoxAnimStunStartD_joint18[32];
extern u16 dFTFoxAnimStunStartD_joint20[90];
extern u16 dFTFoxAnimStunStartD_joint21[60];
extern u16 dFTFoxAnimStunStartD_joint23[28];
extern u16 dFTFoxAnimStunStartD_joint24[116];
extern u16 dFTFoxAnimStunStartD_joint25[120];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimStunStartD_joints[] = {
	(u32)dFTFoxAnimStunStartD_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimStunStartD_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimStunStartD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimStunStartD_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimStunStartD_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimStunStartD_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimStunStartD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimStunStartD_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimStunStartD_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimStunStartD_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimStunStartD_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimStunStartD_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimStunStartD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimStunStartD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimStunStartD_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimStunStartD_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimStunStartD_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimStunStartD_joint25, /* [24] joint 25 */
	0xFFFF01FC, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimStunStartD_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 0, 9, 189, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -26, 0, 0, 19, 10, 480, 192, -15, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimStunStartD_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimStunStartD_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, 10, 0, 5, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimStunStartD_joint5[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1029, 2, -1053, -26, -1622, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1061, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1563, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1421, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1430, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1934, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1011, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1238, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1888, 245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2195, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2071, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1472, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1424, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1489, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2186, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1557, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1475, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1280, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1269, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1441, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1437, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1351, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1537, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1500, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -1, -1442, -1, -1349, 1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimStunStartD_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -692, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -850, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -560, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimStunStartD_joint8[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 268, -7, 0, 17, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 136, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -187, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -113,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimStunStartD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimStunStartD_joint11[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 17, 298, 2, -1045, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -291, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 330, -3, -464, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -60, -541, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 26, -96, -750, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -430, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -582, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, -719, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -468, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 52, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -555, 41, 214, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 45, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 305, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 321, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 132, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 294, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 272, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 336, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 0, 271, 0, 336, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimStunStartD_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -728, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -854, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -685, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -599, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimStunStartD_joint13[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 163, 0, 3, 0, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 325, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 193, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -33, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -53, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 584, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -141, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 538, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 244, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 0, -4,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimStunStartD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -336, -804, 1945, 59, -59, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStunStartD_joint16[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, 8, -86, 20, -162, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -11, -70, -27, -25, -906, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 24, -61, 2, -1032, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -837, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -233, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 69, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -402, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -29, 4,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -230, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -224, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -2, -223, 0, -26, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimStunStartD_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, 225,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1517, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1496, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1118, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 360, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimStunStartD_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -561, 69, -424, -7, 419, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -377, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -491, 216, 307, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -129, 305, -22, -304,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 295, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -289, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 4, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 432, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -7, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 2, -307, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 125, 1, -59, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 43, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 2, 125, 0, -56, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimStunStartD_joint21[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1022, -48, 337, 21, 110, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 28, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 386, -51, 339, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 347, -31, 314, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 219, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 353, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 132, 3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 204, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 140, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 1, 137, -2, 134, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimStunStartD_joint23[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 915, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1151, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1149, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 361, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimStunStartD_joint24[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -54, -50, 4, -94, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 373, 116, 7, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -31, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 224, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 354, 78, 487, 100, 6, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -251, -209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 515, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 381, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -115, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -504, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 395, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -86, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 43, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -231, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 17, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -94, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -1, -102, -2, -226, 4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimStunStartD_joint25[120] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -726, 56, 5, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -464, 83, 22, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -307, 34, 40, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -257, -3, 77, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -337, -28, 115, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -510, -50, 162, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -745, 56, 187, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 219,
	ftAnimEnd(),
	0x0000, 0x380E, 0xFE6C, 0x0000, 0x0000, 0x200F, 0x0006, 0xFF98, 0x0038, 0x0006, 0x0000, 0xFFEF, 0xFFFE, 0x200F, 0x0002, 0x0030, 0x0026, 0xFFFE, 0xFFFA, 0xFFEE, 0x0000, 0x200F, 0x0008, 0x011A, 0x001F, 0xFFC8, 0xFFFA, 0xFFF6, 0x0000, 0x200F, 0x0005, 0x01C4, 0x0027, 0xFFAA, 0xFFFB, 0xFFFB, 0x0000, 0x200F, 0x0003, 0x0256, 0xFF6E, 0xFF9A, 0xFFFC, 0xFFFD, 0x0000, 0x200F, 0x0003, 0xFE56, 0xFF7F, 0xFF8D, 0xFFFD, 0xFFFF, 0x0000, 0x380F, 0x0003, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
