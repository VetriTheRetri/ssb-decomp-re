/* AnimJoint data for relocData file 888 (FTDonkeyAnimCliffEscapeSlow1) */
/* 1216 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint1[14];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint2[50];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint3[26];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint5[26];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint6[54];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint7[24];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint8[26];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint9[22];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint11[22];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint12[34];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint13[16];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint14[26];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint15[8];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint17[8];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint18[30];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint20[16];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint22[24];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint23[58];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint25[32];
extern u16 dFTDonkeyAnimCliffEscapeSlow1_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimCliffEscapeSlow1_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffEscapeSlow1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint1[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1974, 1413, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 118, 0, 913,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint2[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 2, -475, -72, 1028, 43, -438, 230,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 277, 1339,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 688, -176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 107, 72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 7), -385, 103,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 103,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), -350, 76,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1339,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 452, 1416,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1416,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 631, -1116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint3[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 12, -53, 17, -105, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 288, 52, 162, 66, -168, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 620, -41, 710, 16, 132, -43,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 28, 211, 14, -148, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 382, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 199, -15, -136, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -16, -5, 6, 3,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint6[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 47, -9, -89, -4, -446, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 51, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -228, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -55, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -198, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -88, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -171, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 72, -99, -10, -335, -137,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1080, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1153, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -772, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, 88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint8[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, 0, -178, 16, -100, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -270, 0, 23, 14, -460, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -246, 0, 34, 0, -442, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint9[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 393, 144, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 370, 121, 61,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint11[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -603, -188, 324,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -603, -188, 324,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1046, -130, 28,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2095, -18, 1304, 1, -2343, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1963, 1, -1998, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1533, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1582, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1960, 2, 1581, -1, -2006, -7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -978, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1161, -2, 0, 33, 268, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 261, -7, 520, -10, 168, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1056, 19, -153, -16, 172, 0,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1260, 33, -917, -5, 192, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1346, -28, -1111, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 332, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1371, -25, -1160, -48, 434, 48,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1189, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1206, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 377, 0, 9, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 137, -64, 10, 0, 19, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -67, 11, 0, 14, -4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -316, 16, 198, -11, 2024, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2004, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -316, -205, 198, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -710, -353, 135, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1022, -150, 241, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1012, 21, 247, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -769, 89, 207, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2020, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2074, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -675, 94, 191, -15, 2082, 8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1190, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1190, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1317, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1259, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1270, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1313, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1316, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffEscapeSlow1_joint26[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1619, 17, 1738, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -1270,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1721, -3, -1291, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1538, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1592, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1614, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, -1, 1717, -3, -1296, -4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
