/* AnimJoint data for relocData file 1140 (FTLinkAnimDamaged2) */
/* 2416 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged2_joint1[36];
extern u16 dFTLinkAnimDamaged2_joint2[60];
extern u16 dFTLinkAnimDamaged2_joint4[60];
extern u16 dFTLinkAnimDamaged2_joint5[130];
extern u16 dFTLinkAnimDamaged2_joint6[48];
extern u16 dFTLinkAnimDamaged2_joint9[16];
extern u16 dFTLinkAnimDamaged2_joint10[114];
extern u16 dFTLinkAnimDamaged2_joint11[40];
extern u16 dFTLinkAnimDamaged2_joint12[8];
extern u16 dFTLinkAnimDamaged2_joint13[8];
extern u16 dFTLinkAnimDamaged2_joint16[8];
extern u16 dFTLinkAnimDamaged2_joint17[40];
extern u16 dFTLinkAnimDamaged2_joint18[58];
extern u16 dFTLinkAnimDamaged2_joint20[24];
extern u16 dFTLinkAnimDamaged2_joint21[116];
extern u16 dFTLinkAnimDamaged2_joint23[40];
extern u16 dFTLinkAnimDamaged2_joint25[92];
extern u16 dFTLinkAnimDamaged2_joint26[104];
extern u16 dFTLinkAnimDamaged2_joint28[32];
extern u16 dFTLinkAnimDamaged2_joint29[116];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamaged2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged2_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged2_joint1[36] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -343,
	ftAnimSetValBlock(FT_ANIM_TRAY), 901,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -334, -194,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 746,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), -412, 25,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 16), 559,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -269, 471,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 4), 610,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 231,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 901,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDamaged2_joint2[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -21, 276, 19, 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, -60, 411, -46, -51, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -350, -4, 89, -30, 157, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -207, 18, 10, 14, 147, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -108, 28, 281, 36, -11, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -9, 0, 269, 0, -16, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -107, 13, 276, 16, 0, 6,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamaged2_joint4[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, -104, 166, 83, 56, -86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 469, -12, 95, -133, 155, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 210, -41, -366, -34, -390, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -67, 29, -351, 30, -154, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 650, 72, 95, 49, 3, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 511, -78, 45, 14, 122, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, 66, 166, -4, 56, 16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamaged2_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 338, -326, 239, -86, -502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 618, -44, -87, -103, -588, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -610, -534, -115, -273, 515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -601, -498, -318, 210, 443, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -805, -115, -112, 108, 568, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 675, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -848, 4, -91, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -838, 15, -84, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -697, -38, 64, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 386, -237,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -724, 0, 20, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -400, 163, -399, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -261, 208, -387, -38, -131, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 149, 97, -468, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -44, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 210, 65, -396, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 69, -326, 69, -86, -41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged2_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -297,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -765, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -753, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -589, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamaged2_joint9[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -1, 665,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamaged2_joint10[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 450, 123, 220, -50, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 174, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 866, 246, 344, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 908, 23, 366, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 802, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 253, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 362, -36,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 811, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 998, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -41, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1036, -44, 267, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 501, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 294, -68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 391, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 393, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 23, 123, -30, -50, 8,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged2_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -505, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -563, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -617, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamaged2_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamaged2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamaged2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamaged2_joint17[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -192, -163, 303, 0, -58,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -220, 11, 124, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 204, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -220, 11, 124, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 72, -163, -112,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamaged2_joint18[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, -90, -445, 56, 90, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -360, 8, 27, 46, 93, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 215, 46, 117, 10, -35, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 155, -69, 141, -108, -65, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -61, -139, -314, -150, 37, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -404, 8, -460, 16, 202, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamaged2_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -120, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 240, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 7, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamaged2_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -292, -174, -196, -186, 155, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -466, -43, -383, -48, -242, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -378, 43, -293, 92, -140, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -428, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -229, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 44, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -25, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -415, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -71, 136,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -353, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -565, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 83, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -24, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -335, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -294, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -175, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -292, -116, -196, 97, 155, 180,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged2_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 218, 580,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 803, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 985, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 960, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamaged2_joint25[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 339, 336, -123, 309, -30, -200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -272, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 675, 138, 186, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 616, -55, 4, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 474, -33, -301, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -299, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 440, -34, -293, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -96, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 365, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 385, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 290, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -77, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -151, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, 24, -149, 14, -174, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 339, 36, -123, 25, -30, 144,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged2_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 195, -290, 297, 44, -124, -168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 251, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, -162, -292, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -128, -12, -260, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -609, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 66, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -210, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 239, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 120, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -591, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -412, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -521, 79,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -396, 205, 119, 103, -670, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -363, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -110, 222, 297, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 48, 153, 330, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, 146, 297, -32, -124, 239,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged2_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 433, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 388, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 619, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 629, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -196,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamaged2_joint29[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 189, -32, 182, -75, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -220, 63, 149, 47, 227, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -101, 62, -115, 235, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 514, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -628, -65, -212, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -693, -60, -232, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -635, 125, -167, 46,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 330, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -466, 223, -101, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 177, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -5, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 38, 29, 339, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -135, -184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 6, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 156, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -362, -131, 10, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -399, -24, -22, -21, -92, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -11, -32, -9, -75, 17,
	ftAnimEnd(),
};
