/* AnimJoint data for relocData file 1745 (FTNessAnimCliffAttackQuick1) */
/* 1520 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffAttackQuick1_joint1[32];
extern u16 dFTNessAnimCliffAttackQuick1_joint2[54];
extern u16 dFTNessAnimCliffAttackQuick1_joint3[52];
extern u16 dFTNessAnimCliffAttackQuick1_joint5[44];
extern u16 dFTNessAnimCliffAttackQuick1_joint6[46];
extern u16 dFTNessAnimCliffAttackQuick1_joint7[16];
extern u16 dFTNessAnimCliffAttackQuick1_joint8[22];
extern u16 dFTNessAnimCliffAttackQuick1_joint9[30];
extern u16 dFTNessAnimCliffAttackQuick1_joint11[32];
extern u16 dFTNessAnimCliffAttackQuick1_joint12[48];
extern u16 dFTNessAnimCliffAttackQuick1_joint13[16];
extern u16 dFTNessAnimCliffAttackQuick1_joint14[30];
extern u16 dFTNessAnimCliffAttackQuick1_joint16[10];
extern u16 dFTNessAnimCliffAttackQuick1_joint17[44];
extern u16 dFTNessAnimCliffAttackQuick1_joint19[30];
extern u16 dFTNessAnimCliffAttackQuick1_joint20[34];
extern u16 dFTNessAnimCliffAttackQuick1_joint22[28];
extern u16 dFTNessAnimCliffAttackQuick1_joint23[46];
extern u16 dFTNessAnimCliffAttackQuick1_joint25[26];
extern u16 dFTNessAnimCliffAttackQuick1_joint26[38];
extern u16 dFTNessAnimCliffAttackQuick1_joint27[28];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimCliffAttackQuick1_joints[] = {
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimCliffAttackQuick1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffAttackQuick1_joint1[32] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -640, 890, -348, -143,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -254, 1222, -545, -652,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -181, 1040, -592, 260,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5, 726, -480, 879,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 475, 0, 1352,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffAttackQuick1_joint2[54] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), -80, 0, -77,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 218, 252,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4095,
	ftAnimSetValT(FT_ANIM_SCAY, 4), 4095,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 691, 0, 493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 0, 343, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1637, 332,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 1), 0, 0, 650, -817, 182, 0, 3276, -546,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimCliffAttackQuick1_joint3[52] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 85, -252,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 35, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -209, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, -804, -201, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -277, -92, -275, -91,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, -7, 0, 0, 0, 16,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCliffAttackQuick1_joint5[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 382, 59, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 29), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, -159, 0, -2, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -253, 61, -9, -6, -4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 604, 286, -24, -4, -10, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffAttackQuick1_joint6[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -581, -193, -1493, 55, 211, 232,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -804, 148, 465, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1438, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1166, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -479, 186, -1337, -234, 75, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -431, 65, -1636, 22, 196, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -347, 83, -1293, 342, -72, -268,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffAttackQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffAttackQuick1_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4,
	ftAnimSetValRate(FT_ANIM_ROTX), -553, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -625, 12, 0, 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffAttackQuick1_joint9[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -641, 46, -1, 0, 19, 4, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 0, 288, 2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 565, 172, -2, 0, 86, 9,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffAttackQuick1_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -18, -5, 8, 2, -17, -5, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -182, -7, 113, 4, -172, -6,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 0, 54, -10, -17, 3,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffAttackQuick1_joint12[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 472, -28, 1418, -152, 31, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 6, 1265, -84, -25, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 485, -105, 1249, -88, 48, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 232, -27, 1089, -307, -280, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 431, 28, 634, 109, 178, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 290, -141, 1308, 674, -244, -423,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffAttackQuick1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffAttackQuick1_joint14[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1437, -13, -79, 20, 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 958, -110, 382, -1, 18, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 557, -135, -95, -96, 77, 145,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffAttackQuick1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffAttackQuick1_joint17[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1217, 28, -1523, -29, -1616, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1568, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1419, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1692, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1679, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2016, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1797, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1890, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1517, -97, -1915, -25, -2041, -25,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffAttackQuick1_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, 196,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimCliffAttackQuick1_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -735, 81, -309, 18, 777, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -249, 72, 239, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -577, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -707, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -584, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, 191, -152, 96, -14, -253,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffAttackQuick1_joint22[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 4, 29, 1, 51, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 18, 26, 21, -2, -168, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 72, 29, 14, 2, -186, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffAttackQuick1_joint23[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, -33, -6, 55, -2, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -14, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 260, -81, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 513, 175, 179, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 28, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, -34, -168, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -116, 19, -9, -677, -509,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffAttackQuick1_joint25[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 582,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, 554,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffAttackQuick1_joint26[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, -15, 255, -44, 544, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -40, -105, 273, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 439, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 413, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, 39, -138, -98, 89, -183,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimCliffAttackQuick1_joint27[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 14, 2, 22, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 43, 17, 46, 1, -241, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 87, -9, 20, -1, 28, 18,
	ftAnimEnd(),
};
