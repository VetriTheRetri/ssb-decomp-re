/* AnimJoint data for relocData file 756 (FTFoxAnimDashAttack) */
/* 3648 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDashAttack_joint1[12];
extern u16 dFTFoxAnimDashAttack_joint2[24];
extern u16 dFTFoxAnimDashAttack_joint3[28];
extern u16 dFTFoxAnimDashAttack_joint5[78];
extern u16 dFTFoxAnimDashAttack_joint6[172];
extern u16 dFTFoxAnimDashAttack_joint7[62];
extern u16 dFTFoxAnimDashAttack_joint8[10];
extern u16 dFTFoxAnimDashAttack_joint9[122];
extern u16 dFTFoxAnimDashAttack_joint11[22];
extern u16 dFTFoxAnimDashAttack_joint12[178];
extern u16 dFTFoxAnimDashAttack_joint13[70];
extern u16 dFTFoxAnimDashAttack_joint14[76];
extern u16 dFTFoxAnimDashAttack_joint16[10];
extern u16 dFTFoxAnimDashAttack_joint17[158];
extern u16 dFTFoxAnimDashAttack_joint19[64];
extern u16 dFTFoxAnimDashAttack_joint21[154];
extern u16 dFTFoxAnimDashAttack_joint22[182];
extern u16 dFTFoxAnimDashAttack_joint24[52];
extern u16 dFTFoxAnimDashAttack_joint25[184];
extern u16 dFTFoxAnimDashAttack_joint26[40];
extern u16 dFTFoxAnimDashAttack_joint27[72];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimDashAttack_joints[] = {
	(u32)dFTFoxAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimDashAttack_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimDashAttack_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDashAttack_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDashAttack_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDashAttack_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimDashAttack_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDashAttack_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDashAttack_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimDashAttack_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimDashAttack_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimDashAttack_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimDashAttack_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimDashAttack_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimDashAttack_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimDashAttack_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDashAttack_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimDashAttack_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimDashAttack_joint1[12] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 40), 4200, 160,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDashAttack_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 780,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 35), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 994,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 514,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 514,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimDashAttack_joint3[28] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 357, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -1189,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 804, -797,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 804, -1189, -797,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDashAttack_joint5[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 320, 201, -181,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 66, 300, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 66, 300, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -452, -118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -12, 504,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -10, 501, -681,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -452, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -12, 504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 82, 585, 51, -363, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, 109, 607, -85, -12, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 48, 415, -196, 163, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 48, 215, -129, 118, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimDashAttack_joint6[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -281, -11, -284, 359, 398, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 114, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -292, 68, 424, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -144, 72, 571, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 228, -349, -214, 239, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 313, 232, -313, 17, -368, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 316, 3, -314, 0, -370, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -312, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 319, 0, -374, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 316, 1, -370, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 319, 43, -374, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 404, 119, -305, 27, -455, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 557, -54, -257, -84, -591, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, -393, -473, -75, -331, 411,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -125, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -228, -354, 230, 413,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -361, 46, 675, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 20, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -318, 37, 673, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 817, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -244, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -152, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 400, -165,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -213, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -156, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 47, -165, -12, 258, -141,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDashAttack_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -381,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -595, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -681, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -640, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 82,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDashAttack_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimDashAttack_joint9[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -262, 179, 368, 127,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -286,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 183, 508, -104,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 183, 508, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -88, 450, -77, -65, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -104, 352, -75, -15, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, 51, 298, -13, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 211, 9, 298, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 26, -22, 298, -2,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -34, 271, -26, -12, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -32, 246, -23, -24, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -27, 223, -29, -43, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, -19, 187, -43, -59, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimDashAttack_joint11[22] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 62, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -12, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimDashAttack_joint12[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1305, 145, 1346, 45, -1167, 414,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1391, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1160, 401, -753, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -503, 628, -477, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, -48, 1019, -211, 77, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 966, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -601, -339, -589, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -583, 9, -576, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -583, 0, 966, 0, -576, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -583, 0, 966, 0, -576, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -583, -300, 966, 191, -576, -344,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1594, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1184, -246, -1264, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1076, -32, -1233, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1249, -351, 1422, -148, -1167, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1363, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1780, -330, -1558, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1946, -27, -1614, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1965, -15, -1616, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1903, 32, -1490, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1358, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1206, -26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1870, 103, -1460, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1598, 72, -1138, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1225, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1325, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1551, 32, -1157, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1514, 28, -1300, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 39, 1336, 10, -1271, 28,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDashAttack_joint13[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -73, -770,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1241, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1038, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1124, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1139, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -593, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -560, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -34,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimDashAttack_joint14[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -134, -67, 134, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 714,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, -268, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 446, -268, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -111, 0, 67, 0, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 35, -357, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 178, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -357,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 178, -12, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 89, -17, 0, 0, -357, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimDashAttack_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimDashAttack_joint17[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1518, 412, -1393, 113, -2560, -345,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1100, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1930, 390, -2906, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2299, 633, -2996, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3197, 359, -637, 347, -3519, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -407, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3019, -87, -3111, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3017, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3113, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -3056, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -404, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -419, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3016, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 3041, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3052, -160, -430, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 2436, -141, -139, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2436, 0, -166, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2398, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -242, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -275, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -254, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3041, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2932, 83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2351, -79, -292, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -602, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2239, 110, -2829, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2572, 307, -3139, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2854, 119, -377, 189, -3333, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2811, -43, -223, 153, -3243, 89,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimDashAttack_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 107, 554,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, -518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 175, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 234, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 507, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDashAttack_joint21[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, -88, -99, 13, 67, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -233, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, 132, 5, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 52, 31, 323, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 62, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 441, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 8, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 30, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, 89, -5, 63, 452, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, -63, 126, 57, 508, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -160, 108, -8, 399, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 275, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 174, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -152, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -171, 47,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 71, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -151, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -22, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 68, 125, 54, -56, 58,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimDashAttack_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -161, -1, 225, 55, 159, -446,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 389, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -162, -28, -286, -553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -218, 145, -947, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, 434, 620, 192, -913, 338,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 706, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 649, 287, -270, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 703, 42, -215, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 734, 25, -182, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 792, 1, -114, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 683, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 524, 22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 793, -72, -113, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 240, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 545, -156, -542, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -349, 210, -262, -634, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -502, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -109, -435, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -45, -7, -396, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -487, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -576, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, -4, -405, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -363, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -10, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -608, 20, 11, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -271, 304, -186, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -8, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 72, 262, -48, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 253, 141, 77, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 101, 137, 60, 134, 142,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimDashAttack_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 305, 415,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1291, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1287, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1291, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1274, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1211, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1240, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1281, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1277, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 719, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -143,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimDashAttack_joint25[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1681, 3, -1712, 167, 1925, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1677, 99, -1544, 256, 1681, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1482, -277, -1200, 178, 1439, 229,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1251, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2232, -430, 2139, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2344, -56, 2227, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2351, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2114, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1250, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1250, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2352, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2351, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2086, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1900, -89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1252, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2358, 77, -1182, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2196, 451, -1026, -47, 1761, -428,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1655, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1454, 357, 1043, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1482, -88, 1001, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 904, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1632, -80, -1766, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1727, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1679, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1687, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1559, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1724, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1793, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1810, 24, 892, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1672, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1319, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1567, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1605, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1523, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1515, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 13, -1505, 9, 1381, 62,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDashAttack_joint26[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -442, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 178, 20, 625, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 93, -21, 368, -33, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -384, -6, -238, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimDashAttack_joint27[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 53, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 348, -17, 20, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -322, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 348, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -322, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 348, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -322, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 348, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -322, -58, 5, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 50, 407, -60, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -17, -16, -358, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
