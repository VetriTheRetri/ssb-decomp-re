/* AnimJoint data for relocData file 1240 (FTLinkAnimAttackAirD) */
/* 3472 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimAttackAirD_joint1[28];
extern u16 dFTLinkAnimAttackAirD_joint2[56];
extern u16 dFTLinkAnimAttackAirD_joint4[62];
extern u16 dFTLinkAnimAttackAirD_joint5[206];
extern u16 dFTLinkAnimAttackAirD_joint6[96];
extern u16 dFTLinkAnimAttackAirD_joint7[56];
extern u16 dFTLinkAnimAttackAirD_joint9[56];
extern u16 dFTLinkAnimAttackAirD_joint10[284];
extern u16 dFTLinkAnimAttackAirD_joint11[104];
extern u16 dFTLinkAnimAttackAirD_joint12[8];
extern u16 dFTLinkAnimAttackAirD_joint13[8];
extern u16 dFTLinkAnimAttackAirD_joint16[50];
extern u16 dFTLinkAnimAttackAirD_joint17[48];
extern u16 dFTLinkAnimAttackAirD_joint18[48];
extern u16 dFTLinkAnimAttackAirD_joint20[72];
extern u16 dFTLinkAnimAttackAirD_joint21[126];
extern u16 dFTLinkAnimAttackAirD_joint23[64];
extern u16 dFTLinkAnimAttackAirD_joint25[74];
extern u16 dFTLinkAnimAttackAirD_joint26[116];
extern u16 dFTLinkAnimAttackAirD_joint28[56];
extern u16 dFTLinkAnimAttackAirD_joint29[60];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimAttackAirD_joints[] = {
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirD_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimAttackAirD_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 0, -337,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), -210, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 70), -210, 21,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), 0, 112,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimAttackAirD_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 160, -19, 274, 0, 83, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -63, -3, 270, 0, -4, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -63, 0, 270, 0, -4, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 32, 7, 274, 0, 83, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 32, 274, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 32, 274, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimAttackAirD_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -162, 1, -344, -36, -38, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 323, 86, -15, 49, -304, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 791, 14, 201, 8, 41, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 791, 0, 201, 0, 41, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 2, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 468, -23, 412, -1, 328, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimAttackAirD_joint5[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -308, 223, -260, 49, 346, -260,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 123, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, 155, 86, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, 242, -424, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 129, 275, -110, -681, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 382, 89, -170, -318, -454, 176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -364, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -567, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 328, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 477, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -335, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -67, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -715, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 478, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 494, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 52), -75, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -726, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 494, -21, -74, -64, -726, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 154, -519, -224, 617,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -458, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -588, -409, -117, 188, 614, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -664, -35, -81, -68, 639, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -410, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -658, 21, 603, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -522, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 502, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -407, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -305, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -255, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -452, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -329, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -308, 21, -260, -5, 346, -26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimAttackAirD_joint6[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -571, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), -571, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1218, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1253, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -751, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimAttackAirD_joint7[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 278, -69, 266, -31, 193, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -67, 0, 111, 0, -306, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -67, 0, 111, 0, -306, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 1, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 278, 26, 266, 11, 193, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 278, 266, 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 278, 266, 193,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimAttackAirD_joint9[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, -1, 1, 26, 8, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 796, 0, 134, 2, 1605, 24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 796, 0, 134, 0, 1605, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, 0, 1, -10, 8, -122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 804, 1, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 804, 1, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimAttackAirD_joint10[284] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 488, -43, 60, -10, 163, -259,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 53, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 445, -3, -96, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 481, -178, -506, -368,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1078, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -103, -139, 228, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, -259, 337, 129, -1301, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -622, 7, 487, -116, -2037, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, 306, 105, -107, -2014, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 198, 272, 148, -1755, 394,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 261, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, 37, -1224, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, -13, -958, 250,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 381, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 121, -257, -723, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -790, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -253, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -447, -114, 202, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -483, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -817, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -483, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), -482, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 91, 0,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -807, 7,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -482, 9, 91, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 128, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -244, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -40, 166, -807, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -830, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -195, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 114, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1539, -357,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1985, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -236, 10, 170, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, 144, 105, 127, -2014, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 156, 426, 167, -1465, 399,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 345, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 440, 9, -1214, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 289, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -539, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 521, 122, -210, 295,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 492, -8, 171, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 53, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, -4, 60, 6, 163, -8,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimAttackAirD_joint11[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1179, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1073, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1133, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1099, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -669, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), -669, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -848, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1397, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1073, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -860, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1029, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -668, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimAttackAirD_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 90),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimAttackAirD_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 90),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimAttackAirD_joint16[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 926, -116, 157, -37, -1684, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 926, 9, 157, 0, -1684, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 1527, 8, 129, 0, -800, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1508, -1, 346, 16, -843, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1508, 346, -843,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimAttackAirD_joint17[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 0, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 70), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -1, -163, -27, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, -276, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimAttackAirD_joint18[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 0, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 70), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -235,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 15, -199, -33, 0, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 153, -335, -208,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimAttackAirD_joint20[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -199, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 204, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 204, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, -6, 0, -21, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 114, -326, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimAttackAirD_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, -42, 139, 47, -782, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 214, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 19, 18, -1074, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, 91, -968, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 85, 56, -79, -290, 338,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 202, 0, -290, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 63), 186, 0, -302, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 59), 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, -6, 25, 18, -302, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 134, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -161, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -616, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, -230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1106, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 109, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 139, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 24, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -824, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -794, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 5, 139, 0, -782, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimAttackAirD_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1232, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 1140, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1257, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1180, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1195, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimAttackAirD_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, -136, -183, 0, 70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 334, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 373, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 264, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1218, 477,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1220, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 62), 1289, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1290, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1214, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 775, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 423, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 441, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 469, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 3, -183, 0, 70, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimAttackAirD_joint26[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 16, 318, -13, -270, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 318, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 334, -8, -222, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 301, -168, -270, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -247, -121, -932, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 375, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -246, 0, -933, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 63), -246, 0, -933, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 60), 373, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, 32, 372, 9, -932, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 343, 87, 234, -111, -119, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 392, 31, 127, -83, 3, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 304, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 173, 25, -51, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, 26, -84, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 315, 6, -263, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -2, 318, 3, -270, -6,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimAttackAirD_joint28[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 845, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 982, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 62), 982, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 623, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 463, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 838, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimAttackAirD_joint29[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -647, 12, -89, 0, 252, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 34), -693, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -694, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 34), -600, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -594, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -560, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -369, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -401, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -440, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -644, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, -2, -89, 0, 252, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
