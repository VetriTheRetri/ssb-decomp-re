/* AnimJoint data for relocData file 849 (FTDonkeyAnimTechB) */
/* 3392 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTechB_joint1[18];
extern u16 dFTDonkeyAnimTechB_joint2[134];
extern u16 dFTDonkeyAnimTechB_joint3[60];
extern u16 dFTDonkeyAnimTechB_joint5[70];
extern u16 dFTDonkeyAnimTechB_joint6[160];
extern u16 dFTDonkeyAnimTechB_joint7[52];
extern u16 dFTDonkeyAnimTechB_joint8[60];
extern u16 dFTDonkeyAnimTechB_joint9[72];
extern u16 dFTDonkeyAnimTechB_joint11[36];
extern u16 dFTDonkeyAnimTechB_joint12[142];
extern u16 dFTDonkeyAnimTechB_joint13[52];
extern u16 dFTDonkeyAnimTechB_joint14[60];
extern u16 dFTDonkeyAnimTechB_joint15[14];
extern u16 dFTDonkeyAnimTechB_joint17[16];
extern u16 dFTDonkeyAnimTechB_joint18[154];
extern u16 dFTDonkeyAnimTechB_joint20[64];
extern u16 dFTDonkeyAnimTechB_joint22[136];
extern u16 dFTDonkeyAnimTechB_joint23[140];
extern u16 dFTDonkeyAnimTechB_joint25[56];
extern u16 dFTDonkeyAnimTechB_joint26[148];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimTechB_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimTechB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimTechB_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), -5400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -5400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimTechB_joint2[134] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 6031, -29, 480, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 6031, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -33, 360, -463,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -29, 63, 480, -39, -400, 1017,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 5227, -502, 14, 69, 330, 1198, 300, 1025,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1229, 3958, 240, -1200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2010, -714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 14,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1320, -2996, 0, -1440,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 480, -3918, -120, 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 340, 3840, 300, 1841,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1206, -321,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1440, 532, 340, -1440,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 540, -2040, -240, -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 420, 1439, 300, 352,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2814, -95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1440, 1270, -19, -511,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1531, -411,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 14, 2, -19, 259,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 109, 415,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 14, -25, 1080, -285, 240, -291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimTechB_joint3[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -265, 26, -41, 4, -16, 1, -214, 0, -154, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 33, 0, 5, 0, 2, -214, 0, -154, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -10, 0, -1, 0, 0, -214, 0, -154, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -265, -41, -16, -214, -154,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimTechB_joint5[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 319, -157,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 804, -21, 24, -2, 41, -4, 319, 0, -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 536, -33, 0, -3, 0, -5, 319, 0, -157, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 536, 0, 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 536, 17, 319, 0, -157, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 804, 10, 0, 1, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimTechB_joint6[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -6, -284, -6, -169, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -348, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -317, 20, -161, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, 1, -169, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -152, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -317, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -251, 161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 399, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -260, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 401, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 400, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -350, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -260, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -191, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 399, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -10, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -139, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -72, -59, -160, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -211, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -82, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -327, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -70, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -459, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 7, -84, -2, -473, -13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimTechB_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1059, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1059, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -993, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1061, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1066, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -491, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimTechB_joint8[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -110, 0, 10, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1108, -138, 109, 13, 130, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1108, 109, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1108, 62, 109, -5, 130, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, 73, 31, -3, 89, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 60, 16, 57, -2, 243, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimTechB_joint9[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 174, -67, -44, 0, 1354, 213,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -6, -3, 1333, -12, 258, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 142, 36, -73, 6, -48, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 536, 39, 0, 7, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 536, 0, 0, -6, 1333, 258,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 536, -71, -6, 1, 1333, 6, 258, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -536, -17, 0, -3, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimTechB_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -149, 17, 26, -3, 11, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -149, 26, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -149, -9, 26, 1, 11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimTechB_joint12[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 423, 8, 387, 3, -11, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 423, -74, -11, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 406, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 387, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 467, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 317, -201, 11, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -326, -254,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -486, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 408, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 317, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -489, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -492, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -483, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 212, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -490, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -490, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -489, 34, -486, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -222, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -125, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 117, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -202, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 166, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 100, -17, -195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -94, -24, -464, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -21, 172, 5, -479, -14,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimTechB_joint13[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1107, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1107, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -989, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1070, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1046, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -493, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimTechB_joint14[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 893, 31, 0, -9, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1206, 39, -93, -11, 99, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1206, -93, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1206, -33, -93, -1, 99, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 705, -72, -114, 4, 208, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 45, -55, -20, 10, 263, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 98, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimTechB_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1340, 2502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 34), -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimTechB_joint17[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -404, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -1059,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -404,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimTechB_joint18[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1801, -3, -1147, -2, -2344, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1816, 9, -1157, 6, -2315, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1801, 62, -1147, -17, -2344, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1382, -6, -2866, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1520, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1492, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1474, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1380, 4, -2861, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1340, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2869, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2892, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2435, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1475, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1909, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1326, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1436, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2331, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2108, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1527, 15, -1947, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1406, 93, -1950, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, -16, -1339, 64, -1868, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1151, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1894, 53, -1682, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1834, 57, -1738, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1685, 18, -1925, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1171, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1192, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, 16, -1215, -23, -1937, -12,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimTechB_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 908, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 989, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1292, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1147, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 400, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1023, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimTechB_joint22[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 395, -3, 266, 1, -20, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 202, -41, -118, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 379, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 395, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -35, -173, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -209, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 133, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 23, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -185, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 122, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, -64, -28, -62, -157, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -207, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 20, -346, -135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 119, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -377, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -210, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -142, 24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 38, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 28, 14, -23, -369, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimTechB_joint23[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1858, 3, 1314, 1, 850, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 751, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1875, -10, 1324, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1858, -60, 1314, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1461, -13, 1387, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 353, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1464, 10, 1387, -1, 358, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1338, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1642, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 347, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 685, 171,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1296, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1420, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, 170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1407, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1714, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1712, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1399, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1444, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1414, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1385, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1418, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1319, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1709, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1714, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, -1, 1391, 5, 1312, -6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimTechB_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 910, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 990, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1293, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1286, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1117, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 587, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 955, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimTechB_joint26[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1117, 0, 1765, 0, -1653, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1730, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1772, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1112, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1117, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1300, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1423, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1616, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1781, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1826, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1605, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1545, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1825, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1762, -36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1524, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1692, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1778, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1620, -105,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1813, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2042, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1772, 40, 1498, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1513, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1718, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2078, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2002, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1519, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1509, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1703, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1638, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, -22, 1504, -5, -1995, 6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
