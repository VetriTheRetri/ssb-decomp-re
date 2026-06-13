/* Figatree motion data for relocData file 1014 (FTSamusAnimRollB) */
/* File size: 2832 bytes (0xB10) */

#include "relocdata_types.h"

extern u16 dFTSamusAnimRollB_script1_0[];
extern u16 dFTSamusAnimRollB_script1_1[];
extern u16 dFTSamusAnimRollB_script1_2[];
extern u16 dFTSamusAnimRollB_script1_3[];
extern u16 dFTSamusAnimRollB_script1_4[];
extern u16 dFTSamusAnimRollB_script1_5[];
extern u16 dFTSamusAnimRollB_script1_6[];
extern u16 dFTSamusAnimRollB_script1_7[];
extern u16 dFTSamusAnimRollB_script1_8[];
extern u16 dFTSamusAnimRollB_script1_9[];
extern u16 dFTSamusAnimRollB_script1_10[];
extern u16 dFTSamusAnimRollB_script1_11[];
extern u16 dFTSamusAnimRollB_script1_12[];
extern u16 dFTSamusAnimRollB_script1_13[];
extern u16 dFTSamusAnimRollB_script1_14[];
extern u16 dFTSamusAnimRollB_script1_15[];
extern u16 dFTSamusAnimRollB_script1_16[];
extern u16 dFTSamusAnimRollB_script0_0[];
extern u16 dFTSamusAnimRollB_script0_1[];
extern u16 dFTSamusAnimRollB_script0_2[];

/* Pointer array at word 0x0000 (24 slots, 17 intern) */
u16 *dFTSamusAnimRollB_ptrs0[24] = {
	dFTSamusAnimRollB_script1_0, /* [0] intern -> 0x004C */
	dFTSamusAnimRollB_script1_1, /* [1] intern -> 0x0059 */
	dFTSamusAnimRollB_script1_2, /* [2] intern -> 0x0076 */
	dFTSamusAnimRollB_script1_3, /* [3] intern -> 0x0089 */
	NULL, /* [4] NULL */
	dFTSamusAnimRollB_script1_4, /* [5] intern -> 0x00DE */
	dFTSamusAnimRollB_script1_5, /* [6] intern -> 0x0117 */
	dFTSamusAnimRollB_script1_6, /* [7] intern -> 0x012F */
	dFTSamusAnimRollB_script1_7, /* [8] intern -> 0x013C */
	dFTSamusAnimRollB_script1_8, /* [9] intern -> 0x0141 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	dFTSamusAnimRollB_script1_9, /* [12] intern -> 0x0146 */
	dFTSamusAnimRollB_script1_10, /* [13] intern -> 0x01A0 */
	NULL, /* [14] NULL */
	dFTSamusAnimRollB_script1_11, /* [15] intern -> 0x01C8 */
	dFTSamusAnimRollB_script1_12, /* [16] intern -> 0x01F3 */
	NULL, /* [17] NULL */
	dFTSamusAnimRollB_script1_13, /* [18] intern -> 0x0207 */
	NULL, /* [19] NULL */
	dFTSamusAnimRollB_script1_14, /* [20] intern -> 0x023A */
	dFTSamusAnimRollB_script1_15, /* [21] intern -> 0x027E */
	NULL, /* [22] NULL */
	dFTSamusAnimRollB_script1_16, /* [23] intern -> 0x0292 */
};

/* Script at word 0x0018 (42 u16s) */
u16 dFTSamusAnimRollB_script0_0[42] = {
	0xC2BB, /* unknown opcode 24 */
	0xADBE, /* unknown opcode 21 */
	ftAnimEnd(),
	0x0000, 0x4233, 0x2C85, 0xBF2C, 0x5BE2, 0x0000, 0x0000, 0x3F3E, 0x6D16, 0x42B8, 0xFC4F, 0x0000, 0x0000, 0xC22D, 0x391D, 0x4305, 0x25A7, 0x0000, 0x0000, 0xC319, 0x6E0A, 0x42CD, 0x500F, 0x0000, 0x0000, 0xC3DF, 0x43BF, 0xBEE1, 0xD9F5, 0x0000, 0x0000, 0xC488, 0x972D, 0xC2CF, 0x13C3, 0x0000, 0x0000, 0xC4D9, 0x5D6A,
};

/* Script at word 0x002D (10 u16s) */
u16 dFTSamusAnimRollB_script0_1[10] = {
	ftAnimEnd(),
	0x0000, 0x3DB3, 0xCC4B, 0x3E53, 0xCB3E, 0x3EF8, 0xF302, 0x3F80, 0x0000,
};

/* Script at word 0x0032 (44 u16s) */
u16 dFTSamusAnimRollB_script0_2[44] = {
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17922), 0, 0, -16372, -4899, 0, 0, 16700, -12775, 16505,
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 16666, -18783, 16772, 22189, 16480, -19881, 16697,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 16640, -23884, 16906, -12584, 17057,
	0xD98A, /* unknown opcode 27 */
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY), 22848, 16948, -15112, 16912,
	0x630C, -15600, /* SetTranslateInterp */
	0x630D, -15819, /* SetTranslateInterp */
	0x07C8, /* End */
	0x43BD, 0xA4FD, 0x437A, 0x0884, 0x0200, 0x0005, 0x0000, 0x0000,
};

/* Pointer array at word 0x0048 (4 slots, 3 intern) */
u32 dFTSamusAnimRollB_ptrs1[4] = {
	(u32)dFTSamusAnimRollB_script0_0, /* [0] intern -> 0x0018 */
	0x421A3F58, /* [1] */
	(u32)dFTSamusAnimRollB_script0_1, /* [2] intern -> 0x002D */
	(u32)dFTSamusAnimRollB_script0_2, /* [3] intern -> 0x0032 */
};

/* Script at word 0x004C (26 u16s) */
u16 dFTSamusAnimRollB_script1_0[26] = {
	0x6000, -26, /* SetTranslateInterp */
	ftAnimSetValRateBlock(FT_ANIM_TRAI), 0, 1386,
	ftAnimSetValRateBlockT(FT_ANIM_TRAI, 4), 2214, 2156,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAI), 2380,
	ftAnimSetValBlockT(FT_ANIM_TRAI, 31), 16196,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAI), 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAI, 10), 16384, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAI, 1), 16384, -4,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0059 (58 u16s) */
u16 dFTSamusAnimRollB_script1_1[58] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, -1328,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 828, -2835,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 0, 2,
	ftAnimSetValT(FT_ANIM_TRAX, 32), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 43), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 29), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAY, 3), 722,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1630, 396,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1600, -309,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0076 (38 u16s) */
u16 dFTSamusAnimRollB_script1_2[38] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 3), -278,
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 37), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -435,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 43), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 43), 0,
	ftAnimBlock(0, 34),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0089 (170 u16s) */
u16 dFTSamusAnimRollB_script1_3[170] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4095, 4095, 4095,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 168,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 431,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -122, 87, 99, 0,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3276, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, 660, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 1), 1608,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 0, 9,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 27), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 3,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 29), 277, 25,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 480, 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1201,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 1447,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 6433, 1608,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 27), 3276, 3276, 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 359,
	ftAnimSetValRateT(FT_ANIM_TRAY, 26), 360, -1,
	ftAnimBlock(0, 25),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -5, -41,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 607, 89,
	ftAnimSetValT(FT_ANIM_ROTX, 3), 178,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 517, -2,
	ftAnimSetValAfterT(FT_ANIM_TRAY, 3), -122,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 103, -3,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 402, 74,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -122, 2, 103, -3,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4095, 4095, 4095,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX, 2), 402, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), -34, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 151, -47, -41, 5, -5, 116, 31, -98,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Script at word 0x00DE (114 u16s) */
u16 dFTSamusAnimRollB_script1_4[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, -148, 114, -12, -231, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -34, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -226, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -7, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 206, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 55, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 15, -27,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 103, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 235, -11, -16, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 85, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -334, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -164, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 294, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 213, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 286, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, 131, 276, -86, -107, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 231, 114, -162, -231, -123,
	ftAnimEnd(),
};

/* Script at word 0x0117 (48 u16s) */
u16 dFTSamusAnimRollB_script1_5[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1086, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -1070, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1091, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -803, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -727, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -11,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x012F (26 u16s) */
u16 dFTSamusAnimRollB_script1_6[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, -3, 0, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 566, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 363,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -653,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 701, 0,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x013C (10 u16s) */
u16 dFTSamusAnimRollB_script1_7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Script at word 0x0141 (10 u16s) */
u16 dFTSamusAnimRollB_script1_8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Script at word 0x0146 (180 u16s) */
u16 dFTSamusAnimRollB_script1_9[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, -201, -167, 155, -222, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -213, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 47, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -497, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -87, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -199, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -241, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -493, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -278, 40, -31, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -160, 17, -189, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -242, -76, -71, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 336, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -475, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -492, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -471, -5,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 92, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -461, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -279, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -477, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -116, 413,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -287, -126, -31, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -533, -74, 403, 336, -473, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 318, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -436, 236, -358, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -59, 193, 168, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, -38, 495, 195,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -313, -48, -103, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 268, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 161, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, 220, 122, -163, -238, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, 484, -164, -286, -227, 10,
	ftAnimEnd(),
};

/* Script at word 0x01A0 (80 u16s) */
u16 dFTSamusAnimRollB_script1_10[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -535, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -652, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, -465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1187, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -954, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 75,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x01C8 (86 u16s) */
u16 dFTSamusAnimRollB_script1_11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 18, -27, 17, -389, -178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -124, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 22, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -887, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -1165, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -85, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -12, -7,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -360, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -18, 36, -74, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 147, -23, -33, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -59, -27, 6, -389, -28,
	ftAnimEnd(),
};

/* Script at word 0x01F3 (40 u16s) */
u16 dFTSamusAnimRollB_script1_12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 391,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1195, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1198, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 1180, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1177, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 549, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 452, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 26,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0207 (102 u16s) */
u16 dFTSamusAnimRollB_script1_13[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -36, -28, 28, -41, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 28, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -19, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 210, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 208, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 33, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 46, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 47, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 5, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, -5, -7, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -85, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -71, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -25, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -140, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 64, -29, -3, -41, 4,
	ftAnimEnd(),
};

/* Script at word 0x023A (136 u16s) */
u16 dFTSamusAnimRollB_script1_14[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -501, 160, -46, -49, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -278, 114, -95, -244, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -330, 92, -30, -43, -765, -465,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 38, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -90, 125, -1175, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -79, 9, -1194, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -984, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -303, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -48, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 295, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -548, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -319, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -315, 15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 299, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 76, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -282, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -17, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -81, 46,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 160, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 87, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 143, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 66, 160, 17, -49, 32,
	ftAnimEnd(),
};

/* Script at word 0x027E (40 u16s) */
u16 dFTSamusAnimRollB_script1_15[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 469,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1236, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1466, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1455, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1094, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 485, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -43,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0292 (100 u16s) */
u16 dFTSamusAnimRollB_script1_16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -18, 193, 9, -213, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -55, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -123, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -58, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -504, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -539, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -569, -27, -43, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 82, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -289, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -53, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 127, 64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -161, 107,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -130, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 141, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 0, 194, 67, -213, -82,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
