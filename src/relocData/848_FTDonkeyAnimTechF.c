/* AnimJoint data for relocData file 848 (FTDonkeyAnimTechF) */
/* 2976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTechF_joint1[18];
extern u16 dFTDonkeyAnimTechF_joint2[130];
extern u16 dFTDonkeyAnimTechF_joint3[70];
extern u16 dFTDonkeyAnimTechF_joint5[76];
extern u16 dFTDonkeyAnimTechF_joint6[152];
extern u16 dFTDonkeyAnimTechF_joint7[56];
extern u16 dFTDonkeyAnimTechF_joint8[54];
extern u16 dFTDonkeyAnimTechF_joint9[64];
extern u16 dFTDonkeyAnimTechF_joint11[44];
extern u16 dFTDonkeyAnimTechF_joint12[132];
extern u16 dFTDonkeyAnimTechF_joint13[60];
extern u16 dFTDonkeyAnimTechF_joint14[46];
extern u16 dFTDonkeyAnimTechF_joint17[8];
extern u16 dFTDonkeyAnimTechF_joint18[106];
extern u16 dFTDonkeyAnimTechF_joint20[48];
extern u16 dFTDonkeyAnimTechF_joint22[100];
extern u16 dFTDonkeyAnimTechF_joint23[108];
extern u16 dFTDonkeyAnimTechF_joint25[48];
extern u16 dFTDonkeyAnimTechF_joint26[116];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimTechF_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimTechF_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), 5400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 5400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimTechF_joint2[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -6836, 0, -29, 480, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -6836, 241, 0, 0, -29, 45, 480, 640, -400, 262,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -4423, 703, 8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 22, 131, 1200, -599, -106, 754,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 36, 28, 180, 240, -23, 164,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 36, 1320, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 36, -1, 180, -1680, -23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2010, 294, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 36, -2, 900, 3359, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 35, 0, 1440, -1440, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 36, 13, 180, -1560, -23, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 3216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 42, 17, 660, 1247, -19, -3,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 58, -30, -28, -160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 960, 156,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), 1031,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 3216, 0, -29, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimTechF_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -265, 29, -41, 4, -16, 1, -214, 0, -154, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 26, 36, 4, 5, 1, 2, -214, 0, -154, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 26, 4, 1, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 26, -1, 4, 0, 1, 0, -214, 0, -154, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -13, 0, -2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimTechF_joint5[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 750, -12, 24, -1, 41, -6, 0, 0, 319, 0, -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 625, -15, 6, -2, -19, -7, 0, 0, 319, 0, -157, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 625, 6, -19, 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 625, 17, 6, 0, -19, 1, 0, 0, 319, 0, -157, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 893, 5, 0, 0, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimTechF_joint6[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -4, -284, -3, 3047, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -152, 154, -370, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 3086, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3070, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 237, -425, -97, 2986, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 323, 143, -566, -44, 2770, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2777, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 312, -4, -514, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 256, -37, -551, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2772, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2868, -54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 225, -10, -541, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 323, -33, -566, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2770, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -110, -354, 186, 2819, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -103, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -97, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2738, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2466, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2286, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2560, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2688, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2753, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -65, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -82, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -84, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 2, -84, 0, 2743, -10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimTechF_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1059, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1099, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1097, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -401, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, -417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1082, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1030, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -443, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimTechF_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -804, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -804, 80, 0, 0, 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 73, 0, 0, 348, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0, 0, 402, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimTechF_joint9[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, -58, -67, 6, -44, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -294, 58, -13, 11, -20, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 522, 136, 0, 2, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 522, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 522, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -348, -14, 0, -4, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimTechF_joint11[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -398, 24, 70, -4, 29, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -149, 24, 26, -4, 11, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -149, 26, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -149, -9, 26, 1, 11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimTechF_joint12[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1185, 7, 1220, -1, -1620, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1767, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1351, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1292, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1474, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1717, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1854, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2097, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1403, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1435, 33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1716, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1517, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1470, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1479, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2235, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2401, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2590, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2249, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1411, -59, -2124, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1851, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1388, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1472, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1710, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1879, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2076, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1399, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1433, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, -13, 1436, 3, -2087, -11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimTechF_joint13[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1107, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1128, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1126, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1023, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1030, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -582, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1033, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -527, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimTechF_joint14[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 893, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 702, 18, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 893, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 804, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 804, -80, 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, -73, 348, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 6, 402, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 98, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimTechF_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimTechF_joint18[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1415, -10, -1147, 2, -2344, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1556, 122, -1223, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2344, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2384, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2104, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1660, 72, -1296, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1705, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1316, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2108, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2169, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1705, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1516, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1316, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1223, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2146, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1863, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1472, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1549, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1872, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1937, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -1, -1215, 8, -1937, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimTechF_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 908, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 968, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1061, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1058, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1026, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimTechF_joint22[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1213, 8, 1342, -4, 1588, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1489, 81, 1486, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1168, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1213, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1623, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1759, -115, 1565, 59, 1441, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1610, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1301, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1857, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1859, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1752, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1609, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1600, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1104, 22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1778, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1737, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1128, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1234, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, 14, 1593, -7, 1238, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimTechF_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 250, 11, 293, 3, -757, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 156, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 250, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -757, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -485, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 220, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -563, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -14, 42,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -266, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 97, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -296, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 0, 217, -3, -295, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimTechF_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 910, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 989, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1062, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1157, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 920, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimTechF_joint26[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -491, -9, -156, -2, -44, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -73, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -167, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -491, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 241, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -27, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 32, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -315, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 238, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 241, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 160, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 116, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -439, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 15, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, -5, -423, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 101, 0, -390, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -7, 103, 2, -387, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
