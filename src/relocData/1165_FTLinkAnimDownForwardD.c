/* AnimJoint data for relocData file 1165 (FTLinkAnimDownForwardD) */
/* 2464 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDownForwardD_joint1[20];
extern u16 dFTLinkAnimDownForwardD_joint2[48];
extern u16 dFTLinkAnimDownForwardD_joint3[38];
extern u16 dFTLinkAnimDownForwardD_joint5[36];
extern u16 dFTLinkAnimDownForwardD_joint6[110];
extern u16 dFTLinkAnimDownForwardD_joint7[48];
extern u16 dFTLinkAnimDownForwardD_joint10[16];
extern u16 dFTLinkAnimDownForwardD_joint11[92];
extern u16 dFTLinkAnimDownForwardD_joint12[48];
extern u16 dFTLinkAnimDownForwardD_joint13[16];
extern u16 dFTLinkAnimDownForwardD_joint14[8];
extern u16 dFTLinkAnimDownForwardD_joint17[12];
extern u16 dFTLinkAnimDownForwardD_joint18[36];
extern u16 dFTLinkAnimDownForwardD_joint19[18];
extern u16 dFTLinkAnimDownForwardD_joint21[24];
extern u16 dFTLinkAnimDownForwardD_joint22[152];
extern u16 dFTLinkAnimDownForwardD_joint24[56];
extern u16 dFTLinkAnimDownForwardD_joint26[146];
extern u16 dFTLinkAnimDownForwardD_joint27[114];
extern u16 dFTLinkAnimDownForwardD_joint29[40];
extern u16 dFTLinkAnimDownForwardD_joint30[92];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimDownForwardD_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimDownForwardD_joint30, /* [29] joint 30 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimDownForwardD_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimDownForwardD_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 100,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 940, 2752,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 3405, 906,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 16), 4200, -219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDownForwardD_joint2[48] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 945, -52, 162, 810,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 763, 641,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 841, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 2962, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 316, -486,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 335, 529,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 901, 272,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimDownForwardD_joint3[38] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -138, 14,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 40, 3,
	ftAnimSetValT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -7, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -104, -3,
	ftAnimBlock(0, 17),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 276, 40,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -107,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDownForwardD_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 74, 107,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 652, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 731, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 259, -47,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 166, 28, 56, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimDownForwardD_joint6[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -612, 140, -379, -8, -279, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -385, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -472, 188, -441, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, 131, -749, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -189, 25, -801, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -330, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -309, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -157, 32, -810, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -258, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -449, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -273, -14, -308, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -152, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -92, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -91, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -317, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -120, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 213, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 32, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -45, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 66, -326, -9, -86, -40,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimDownForwardD_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -815, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -570, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDownForwardD_joint10[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -128, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimDownForwardD_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 795, -96, 225, 23, -151, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 347, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 361, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -463, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -429, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 192, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 368, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 182, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -371, 11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 184, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 90, 29,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -104, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 211, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 384, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 31, 123, 33, -50, 54,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimDownForwardD_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -575, 46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -346, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -184, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -720, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -714, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -667, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDownForwardD_joint13[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -209, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimDownForwardD_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDownForwardD_joint17[12] = {
	ftAnimSetVal(FT_ANIM_ROTY), -208,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1697, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), -536,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), -536,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDownForwardD_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -332, 91, 291, -64,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 122, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 35, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -163, -61,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimDownForwardD_joint19[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -9, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -199, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDownForwardD_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -40, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -157, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 169, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -17, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimDownForwardD_joint22[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, 14, -386, 14, -259, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -450, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -324, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -280, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -428, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -209, 162, -627, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -854, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -103, 84, -305, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 238, 80, -107, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -41, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 299, 24, -95, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -43, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -299, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -300, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -186, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 270, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 67, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 215, -67, -353, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -266, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -191, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 97, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -266, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -260, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -51, -244, 15, 108, 11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimDownForwardD_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 706, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 531, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1201, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1013, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 913, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 345, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimDownForwardD_joint26[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 924, -84, 319, 14, 254, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 835, 110, 273, -47, 256, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1003, 1, 208, -6, 468, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 235, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 838, -110, 208, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 782, -38, 177, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 333, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 743, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 144, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 151, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 112, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 13, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 773, -13, 163, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 567, -156, -2, -139,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -371, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 399, -139, -148, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -160, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 134, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 286, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -333, 42, -135, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -228, 61, -77, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 42, -162, 66, -34, 42,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimDownForwardD_joint27[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -936, -80, 944, 45, -1801, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1184, 20, -2266, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1288, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1333, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1677, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1225, 42, -2331, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2047, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1409, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1665, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1556, -37,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1986, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1797, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1417, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1331, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1845, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1976, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1597, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1394, 54,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1923, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1801, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1328, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, 56, 1338, 9, -1733, 67,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimDownForwardD_joint29[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 825, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 663, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 774, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 749, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 537, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimDownForwardD_joint30[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2362, 48, -79, 10, 30, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -28, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 2620, 0, -108, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2622, 31, -132, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2749, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -85, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -84, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2704, -14, -66, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2824, -7, -214, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2813, -11, -218, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 2790, 17, -204, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2803, 9, -205, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2804, -11, -129, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2788, -15, -74, 11, -69, 59,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
