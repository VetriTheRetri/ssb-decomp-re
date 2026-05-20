/* AnimJoint data for relocData file 690 (FTFoxAnimTechF) */
/* 3120 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTechF_joint1[18];
extern u16 dFTFoxAnimTechF_joint2[136];
extern u16 dFTFoxAnimTechF_joint3[56];
extern u16 dFTFoxAnimTechF_joint5[52];
extern u16 dFTFoxAnimTechF_joint6[138];
extern u16 dFTFoxAnimTechF_joint7[60];
extern u16 dFTFoxAnimTechF_joint8[38];
extern u16 dFTFoxAnimTechF_joint9[62];
extern u16 dFTFoxAnimTechF_joint11[10];
extern u16 dFTFoxAnimTechF_joint12[154];
extern u16 dFTFoxAnimTechF_joint13[54];
extern u16 dFTFoxAnimTechF_joint14[40];
extern u16 dFTFoxAnimTechF_joint16[10];
extern u16 dFTFoxAnimTechF_joint17[126];
extern u16 dFTFoxAnimTechF_joint19[48];
extern u16 dFTFoxAnimTechF_joint21[126];
extern u16 dFTFoxAnimTechF_joint22[144];
extern u16 dFTFoxAnimTechF_joint24[48];
extern u16 dFTFoxAnimTechF_joint25[108];
extern u16 dFTFoxAnimTechF_joint26[38];
extern u16 dFTFoxAnimTechF_joint27[40];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimTechF_joints[] = {
	(AObjEvent32 *)dFTFoxAnimTechF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimTechF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimTechF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimTechF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimTechF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimTechF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimTechF_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimTechF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimTechF_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimTechF_joint2[136] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), -4825, 48, 840,
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 50, 810,
	ftAnimSetValT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4825, 40,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -108,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, -29, 840, -719, -20, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -4423, 452, 24, -38, 180, -1152,
	ftAnimSetValBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 4), 72, -16,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 714,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 24, 0, 120, 1680, -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 24, 0, 600, 2160, -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 25, 0, 660, -1680, -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 24, -1, 180, 120, -16, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2010, 294, 72, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 24, 720, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 24, 9, 180, -342, -16, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 3216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 35, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 32, 12, 420, 312, -17, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 40, 7, 570, 246, -19, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimTechF_joint3[56] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -338,
	ftAnimSetValBlock(FT_ANIM_ROTZ), -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -141, 15, -338, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 6), -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 14, 19, 33, 46,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 14, 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 14, 0, 33, -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -7, 0, -17, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimTechF_joint5[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 309, 20, 156, -12, 81, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 514, 25, 33, -15, -22, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 514, 33, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 514, 1, 33, -2, -22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, -9, 0, 5, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimTechF_joint6[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 643, 5, -60, 0, 1441, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 643, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -58, -1, 1403, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -188, 1441, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 616, -208, -435, -152, 1711, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -221, -365, 160, 2350, 366,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2327, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 173, -51, -114, 177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 115, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2359, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2319, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -152, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -116, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2311, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2324, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2461, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 3035, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3198, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3487, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -115, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 5, -165, -3, 3475, -11,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimTechF_joint7[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 206,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -437, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -878, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -592, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimTechF_joint8[38] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 271, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0, 271, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 0, 269, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimTechF_joint9[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -616, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -616, 137, 136, -13, -72, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -17, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 484, 137,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 484,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 484, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -32, 0, 8, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimTechF_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimTechF_joint12[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -396, -5, -24, 4, 1464, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -396, -10, -24, -16, 1464, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -443, 0, -48, 124, 1582, 373,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -264, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 2, 2212, 407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -159, 2398, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -92, -1, 2448, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, 209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 112, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, -1, 2435, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2427, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -181, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 395, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 505, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 814, -32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2441, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2711, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -170, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -427, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 755, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 52, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -318, 185, 3027, 260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 116, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3560, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 135, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 266, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -2, 271, 5, 3553, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimTechF_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -571, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -626, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimTechF_joint14[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -536, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -804, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -625, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -134, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 44, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimTechF_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimTechF_joint17[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -409, -1, -108, 8, 135, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -150, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -348, 90, -189, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -228, 149, -276, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 154, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -289, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, -186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -520, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -19, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -74, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -725, -11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -208, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -257, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -40, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -277, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -402, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -2, -223, 5, -26, 13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimTechF_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 432, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 432, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1056, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1067, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1089, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 499, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimTechF_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, 0, 125, -2, -56, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 223, 59, -220, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 51, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -354, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 43, -357, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -470, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 319, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -346, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -170, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -228, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 309, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 42, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -126, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 142, 19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 169, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -65, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 52, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -5, 125, -6, -56, 9,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimTechF_joint22[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 197, 6, 312, -3, 215, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 87, -130, 41, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 312, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 324, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 136, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, -143, -220, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -488, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -448, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -84, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -452, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -441, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -448, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -93, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 20, 142,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -442, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 105, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -525, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 367, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 190, 81, -423, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 359, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 27, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 126, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 349, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 145, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -3, 137, -7, 134, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimTechF_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 584, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 769, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1037, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1157, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1192, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 728, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 354, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimTechF_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 0, -102, 1, -226, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -205, -36, -412, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 36, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 461, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -235, -19, -482, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -250, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -482, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 453, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 392, -43,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -235, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -8, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 324, -116, -503, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -557, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -90, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 1, -31, -22, -511, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 16, 0, -101, -1, -239, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, -102, 0, -226, 12,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimTechF_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, 223,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 174, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -741, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1294, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -1294, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -45, 86, 223, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 0, 219,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimTechF_joint27[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -404, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 117, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -793, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -793, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1172, 40, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
