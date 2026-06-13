/* Figatree motion data for relocData file 1013 (FTSamusAnimRollF) */
/* File size: 2624 bytes (0xA40) */

#include "relocdata_types.h"

extern u16 dFTSamusAnimRollF_script1_0[];
extern u16 dFTSamusAnimRollF_script1_1[];
extern u16 dFTSamusAnimRollF_script1_2[];
extern u16 dFTSamusAnimRollF_script1_3[];
extern u16 dFTSamusAnimRollF_script1_4[];
extern u16 dFTSamusAnimRollF_script1_5[];
extern u16 dFTSamusAnimRollF_script1_6[];
extern u16 dFTSamusAnimRollF_script1_7[];
extern u16 dFTSamusAnimRollF_script1_8[];
extern u16 dFTSamusAnimRollF_script1_9[];
extern u16 dFTSamusAnimRollF_script1_10[];
extern u16 dFTSamusAnimRollF_script1_11[];
extern u16 dFTSamusAnimRollF_script1_12[];
extern u16 dFTSamusAnimRollF_script1_13[];
extern u16 dFTSamusAnimRollF_script1_14[];
extern u16 dFTSamusAnimRollF_script1_15[];
extern u16 dFTSamusAnimRollF_script1_16[];
extern u16 dFTSamusAnimRollF_script0_0[];
extern u16 dFTSamusAnimRollF_script0_1[];
extern u16 dFTSamusAnimRollF_script0_2[];

/* Pointer array at word 0x0000 (24 slots, 17 intern) */
u16 *dFTSamusAnimRollF_ptrs0[24] = {
	dFTSamusAnimRollF_script1_0, /* [0] intern -> 0x004C */
	dFTSamusAnimRollF_script1_1, /* [1] intern -> 0x0059 */
	dFTSamusAnimRollF_script1_2, /* [2] intern -> 0x006C */
	dFTSamusAnimRollF_script1_3, /* [3] intern -> 0x0081 */
	NULL, /* [4] NULL */
	dFTSamusAnimRollF_script1_4, /* [5] intern -> 0x00D4 */
	dFTSamusAnimRollF_script1_5, /* [6] intern -> 0x00F8 */
	dFTSamusAnimRollF_script1_6, /* [7] intern -> 0x0108 */
	dFTSamusAnimRollF_script1_7, /* [8] intern -> 0x011E */
	dFTSamusAnimRollF_script1_8, /* [9] intern -> 0x0123 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	dFTSamusAnimRollF_script1_9, /* [12] intern -> 0x0128 */
	dFTSamusAnimRollF_script1_10, /* [13] intern -> 0x015B */
	NULL, /* [14] NULL */
	dFTSamusAnimRollF_script1_11, /* [15] intern -> 0x0177 */
	dFTSamusAnimRollF_script1_12, /* [16] intern -> 0x01BE */
	NULL, /* [17] NULL */
	dFTSamusAnimRollF_script1_13, /* [18] intern -> 0x01CE */
	NULL, /* [19] NULL */
	dFTSamusAnimRollF_script1_14, /* [20] intern -> 0x01FF */
	dFTSamusAnimRollF_script1_15, /* [21] intern -> 0x023E */
	NULL, /* [22] NULL */
	dFTSamusAnimRollF_script1_16, /* [23] intern -> 0x0258 */
};

/* Script at word 0x0018 (42 u16s) */
u16 dFTSamusAnimRollF_script0_0[42] = {
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY, 44478), 13958, 14269, -15821, 11397, 16172, 23522,
	ftAnimEnd(),
	0x0000, 0xBF3E, 0x6D16, 0xC2B8, 0xFC4F, 0xB686, 0x37BD, 0x422D, 0x391D, 0xC305, 0x25A7, 0x3606, 0x37BD, 0x4319, 0x6E0A, 0xC2CD, 0x500F, 0x37FB, 0xA882, 0x43DF, 0x43BF, 0x3EE1, 0xD9F5, 0x38C9, 0x539C, 0x4488, 0x972D, 0x42CF, 0x13C3, 0x3928, 0xD21C, 0x44D9, 0x5D6A,
};

/* Script at word 0x002D (10 u16s) */
u16 dFTSamusAnimRollF_script0_1[10] = {
	ftAnimEnd(),
	0x0000, 0x3DB3, 0xCC4B, 0x3E53, 0xCB3E, 0x3EF8, 0xF302, 0x3F80, 0x0000,
};

/* Script at word 0x0032 (44 u16s) */
u16 dFTSamusAnimRollF_script0_2[44] = {
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
u32 dFTSamusAnimRollF_ptrs1[4] = {
	(u32)dFTSamusAnimRollF_script0_0, /* [0] intern -> 0x0018 */
	0x421A3F58, /* [1] */
	(u32)dFTSamusAnimRollF_script0_1, /* [2] intern -> 0x002D */
	(u32)dFTSamusAnimRollF_script0_2, /* [3] intern -> 0x0032 */
};

/* Script at word 0x004C (26 u16s) */
u16 dFTSamusAnimRollF_script1_0[26] = {
	0x6000, -26, /* SetTranslateInterp */
	ftAnimSetValRateBlock(FT_ANIM_TRAI), 0, 1386,
	ftAnimSetValRateBlockT(FT_ANIM_TRAI, 4), 2214, 2156,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAI), 2380,
	ftAnimSetValBlockT(FT_ANIM_TRAI, 26), 15810,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAI), 41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAI, 15), 16384, 42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAI, 1), 16384, 42,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0059 (38 u16s) */
u16 dFTSamusAnimRollF_script1_1[38] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1600,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 46), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 712, -4909,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAY, 32), 712,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1231,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 1724, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1600, 1,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x006C (42 u16s) */
u16 dFTSamusAnimRollF_script1_2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -470, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTY, 32), 679,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 14,
	ftAnimSetValT(FT_ANIM_ROTZ, 8), -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 852, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1608, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0081 (166 u16s) */
u16 dFTSamusAnimRollF_script1_3[166] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 321,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 3), -133,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 428, -13,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -122, 99,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -128, 1015, 273,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 1), -386,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 463, 223,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -211, -399,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 14, 0, 39, 360, -30, 0, -66,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2867, 2867, 2867,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 819, 819,
	ftAnimSetVal0Rate(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTX, 27), 6433,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 360, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 46, 36,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 2), 163,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 128, 155,
	ftAnimSetValT(FT_ANIM_ROTY, 4), 714,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 38,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 510, -112,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2867, 2867, 2867,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 6727, 49,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3686, 3686, 3686,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 431, 0, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValAfterBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), -122, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 226,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 536, 52, 15, -29,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 89, -70,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
};

/* Script at word 0x00D4 (72 u16s) */
u16 dFTSamusAnimRollF_script1_4[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -3, -1722, 29, 1377, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 34), -1148, 5, 1327, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -1676, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1610, 10,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1142, 19, 1322, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -849, 37, 1038, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1603, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1691, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -814, -28, 1020, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1072, -112, 1291, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, -60, -1722, -31, 1377, 86,
	ftAnimEnd(),
};

/* Script at word 0x00F8 (32 u16s) */
u16 dFTSamusAnimRollF_script1_5[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -949, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -940, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -712, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -27,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0108 (44 u16s) */
u16 dFTSamusAnimRollF_script1_6[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, -12, 12, 0, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 267, -14, 12, 0, 20, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -343, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -10, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 344, 348,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -91, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x011E (10 u16s) */
u16 dFTSamusAnimRollF_script1_7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Script at word 0x0123 (10 u16s) */
u16 dFTSamusAnimRollF_script1_8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Script at word 0x0128 (102 u16s) */
u16 dFTSamusAnimRollF_script1_9[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -577, -128, 311, -215, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -519, -196, 182, 29, -587, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, 86, -70, -134, -64, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -350, -5, -78, 2, -44, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -357, -6, -82, -3, -37, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -342, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -74, 1, -132, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -15, -127, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -120, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 524, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -334, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 44, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 127, 14, 562, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 45, -7, -24, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 13, -126, -5, -220, -195,
	ftAnimEnd(),
};

/* Script at word 0x015B (56 u16s) */
u16 dFTSamusAnimRollF_script1_10[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -937, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -877, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1003, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1086, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 250,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0177 (142 u16s) */
u16 dFTSamusAnimRollF_script1_11[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -33, -27, -85, -389, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -287, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, 53, -601, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 193, 80, -612, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 307, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -639, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -305, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -272, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 333, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 535, -17,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -564, -6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 517, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 230, -89,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -245, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -218, 105, -571, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -865, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -275, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 149, -82, -873, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -99, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -454, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -289, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -45, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, 56, -409, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 34, -27, 18, -389, 19,
	ftAnimEnd(),
};

/* Script at word 0x01BE (32 u16s) */
u16 dFTSamusAnimRollF_script1_12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 511,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1307, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1322, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 1425, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1424, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 507, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -28,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x01CE (98 u16s) */
u16 dFTSamusAnimRollF_script1_13[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -3, -28, 11, -41, -281,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 296, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -79, -89, -323, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -254, -96, -664, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -332, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -670, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -125, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -351, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), -124, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -77, 16, 292, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 150, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 7, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -41, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 210, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -47, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -9, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -28, -29, 0, -41, 0,
	ftAnimEnd(),
};

/* Script at word 0x01FF (126 u16s) */
u16 dFTSamusAnimRollF_script1_14[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -200, 160, 66, -49, -570,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -28, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 189, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1187, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1202, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 5, -1213, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -1229, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 5, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 212, -26,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1067, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -108, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 94, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -104, 175,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 142, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -80, 16, 86, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 64, 150, -55, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 162, 160, 37, -49, 5,
	ftAnimEnd(),
};

/* Script at word 0x023E (52 u16s) */
u16 dFTSamusAnimRollF_script1_15[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 580,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1038, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1101, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 280, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 209, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 55,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0258 (112 u16s) */
u16 dFTSamusAnimRollF_script1_16[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -48, 193, -115, -213, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -74, -7, 73, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 94, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -134, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, -6, 80, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -114, 2, 115, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), -198, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -161, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -15, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, 14, 110, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -82, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 176, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -49, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 113, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 29, 194, 18, -213, -74,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
