/* AnimJoint data for relocData file 532 (FTMarioAnimDamaged6) */
/* 1776 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged6_joint1[20];
extern u16 dFTMarioAnimDamaged6_joint2[46];
extern u16 dFTMarioAnimDamaged6_joint4[46];
extern u16 dFTMarioAnimDamaged6_joint5[84];
extern u16 dFTMarioAnimDamaged6_joint6[26];
extern u16 dFTMarioAnimDamaged6_joint7[10];
extern u16 dFTMarioAnimDamaged6_joint8[46];
extern u16 dFTMarioAnimDamaged6_joint10[24];
extern u16 dFTMarioAnimDamaged6_joint11[86];
extern u16 dFTMarioAnimDamaged6_joint12[32];
extern u16 dFTMarioAnimDamaged6_joint13[30];
extern u16 dFTMarioAnimDamaged6_joint15[36];
extern u16 dFTMarioAnimDamaged6_joint16[68];
extern u16 dFTMarioAnimDamaged6_joint18[16];
extern u16 dFTMarioAnimDamaged6_joint20[82];
extern u16 dFTMarioAnimDamaged6_joint21[72];
extern u16 dFTMarioAnimDamaged6_joint23[32];
extern u16 dFTMarioAnimDamaged6_joint24[84];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDamaged6_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged6_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged6_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -216, -216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -216, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamaged6_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -155, 0, -104, 0, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -466, -11, -313, -44, 73, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -466, 50, -313, 8, 73, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -110, 116, -255, 78, 32, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamaged6_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, 51, 0, -25, 0, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 242, 20, -76, -10, -110, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 242, 2, -76, 6, -110, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 256, -38, -33, 19, -49, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged6_joint5[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2852, -769, -915, -407, 3091, 883,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3621, -246, -1322, -187, 3974, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3344, -107, -1290, 113, 3656, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3835, -275, -1095, 100, 4029, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3896, -23, -1088, 4, 4080, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1095, -34, 4029, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3813, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3835, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4798, -704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1162, -9, 4203, 429,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1056, 98, 5731, 702,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5574, -628,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6055, -480, -918, 138, 6293, 561,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamaged6_joint6[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 758,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimDamaged6_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimDamaged6_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, 101, 0, -17, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 432, 0, -52, -7, -49, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 432, -2, -52, 4, -49, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 412, -76, -23, 13, -21, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 127, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged6_joint10[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 53, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDamaged6_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1261, -523, 690, 619, 1467, -659,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 223, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1309, 297, 807, -520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1285, -178, 425, -334,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 50, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 84, -134, 952, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -12, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 931, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 952, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, 427, 139, 380,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1308, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 842, 564, 938, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1212, -34, 1124, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 773, 24, 653, -217, 918, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1261, 488, 690, 37, 1467, 548,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged6_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 769,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamaged6_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -63, 5, 267, 38,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), -170,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -278, 198, 54, 15, 380, -66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamaged6_joint15[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1920, 168, 312, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1945, -104, 337, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1608, -4, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1909, 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1608, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDamaged6_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -311, 4, -73, -105, 288,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -379, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -354, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 151, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -413, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -415, 152,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -347, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -60, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -188, 224, 62, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 92, 20, -114, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -18, 4, 65, -105, 9,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged6_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamaged6_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 194, -45, 51, 552, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -82, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 322, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -202, -157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -98, -126,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 649, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -286, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -146, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -361, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -270, 75, 587, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 60, -45, 100, 552, -34,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged6_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 232, 204, -58, -233, 320,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 356, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 265, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 134, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 238, -106,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 261, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 252, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -137, -98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 130, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -7, 204, -48, -233, -96,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged6_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -925,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 522,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamaged6_joint24[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, -393, -170, 20, -183, 855,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -165, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -244, -186, 672, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -223, 132, 547, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 455, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 21, 83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -133, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 25, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 130, 79, 484, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 229, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -98, 191, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, -80, -170, -22, -183, -374,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
