/* AnimJoint data for relocData file 824 (FTDonkeyAnimDamaged1) */
/* 1856 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamaged1_joint1[38];
extern u16 dFTDonkeyAnimDamaged1_joint2[30];
extern u16 dFTDonkeyAnimDamaged1_joint4[54];
extern u16 dFTDonkeyAnimDamaged1_joint5[86];
extern u16 dFTDonkeyAnimDamaged1_joint7[44];
extern u16 dFTDonkeyAnimDamaged1_joint8[34];
extern u16 dFTDonkeyAnimDamaged1_joint10[8];
extern u16 dFTDonkeyAnimDamaged1_joint11[94];
extern u16 dFTDonkeyAnimDamaged1_joint13[36];
extern u16 dFTDonkeyAnimDamaged1_joint14[8];
extern u16 dFTDonkeyAnimDamaged1_joint16[26];
extern u16 dFTDonkeyAnimDamaged1_joint17[98];
extern u16 dFTDonkeyAnimDamaged1_joint19[36];
extern u16 dFTDonkeyAnimDamaged1_joint21[96];
extern u16 dFTDonkeyAnimDamaged1_joint22[82];
extern u16 dFTDonkeyAnimDamaged1_joint24[36];
extern u16 dFTDonkeyAnimDamaged1_joint25[72];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamaged1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamaged1_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -221, -467, 1045, -764, -578, -984,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -204, 17, 744, -593, -690, -226,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -204, 155, 452, 254, -804, 328,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamaged1_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -199, 8, 278, 39, 39, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -199, -6, 278, -31, 39, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamaged1_joint4[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -36, -36, 150, -168, -162, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 602, -128, -14, 87, 415, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, -39, 285, 49, 264, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 364, 42, 285, -29, 264, -24, -36, 32, 150, 149, -162, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 750, 24, 41, 0, 319, -157,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamaged1_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 115, -84, 129, -473, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 104, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 184, -495, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 283, 121, -769, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 290, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 318, 107, -539, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 321, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -397, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 290, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 17, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 332, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 403, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 395, -150, -206, -74, -421, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, -228, -130, 61, -343, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -165, -84, 45, -473, -130,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDamaged1_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -433, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 303,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDamaged1_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 177, 51, -199, -52, 333, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 484, 44, -379, 10, 145, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 533, -51, -113, 52, -28, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamaged1_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamaged1_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 309, 172, 110, -479, 440,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 221, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 193, 474, 283, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 832, 308, 174, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 605, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 810, -106, 216, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 58, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 619, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 293, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -121, -236, -302, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -148, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -314, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 525, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 236, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -112, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -3, 172, -63, -479, -106,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDamaged1_joint13[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -614,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1247, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -959, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -897, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 256,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDamaged1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamaged1_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -189, 30, -180, -23, -222, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -192, -23, -164, 20, -171, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamaged1_joint17[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -37, -392, 40, 2887, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -249, 110, 2709, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 182, 315, -131, 21, 2411, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -223, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 445, 177, 2570, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 727, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2474, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2125, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -225, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -186, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 828, 12, 1771, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 752, -51, 2570, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 725, -245, -339, -70, 2692, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, -393, -326, -26, 2828, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -322, -392, -65, 2887, 58,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamaged1_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 935, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1161, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1255, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -204,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamaged1_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1494, 90, 1593, -135, 1238, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1259, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1584, 81, 1387, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1657, -167, 1603, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1140, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1249, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1138, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1019, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1023, -329, 1091, -263, 1184, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 359, -90, 733, 199, 522, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 843, 245, 1490, 421, 1111, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 850, 168, 1576, 72, 1042, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1181, 322, 1636, 8, 1078, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, 313, 1593, -42, 1238, 160,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamaged1_joint22[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1504, 38, 1391, -4, 1312, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1360, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1450, -101, 1236, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1668, -148, 796, -296,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 480, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1747, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1404, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1314, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 209, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, 264, 1064, -163, 267, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1217, 71, 987, 122, 699, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1484, -143, 1310, 201, 941, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1504, -19, 1391, 80, 1312, 371,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamaged1_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1001, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1277, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1355, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1336, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1259, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1234, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -239,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDamaged1_joint25[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -58, 103, 109, -387, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 156, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -226, -10, -630, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -215, -5, -528, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -430, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -26, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -602, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -691, 211, -4, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -179, 349, -300, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 187, 103, 130, -387, -86,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
