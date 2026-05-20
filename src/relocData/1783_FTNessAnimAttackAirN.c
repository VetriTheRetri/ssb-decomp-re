/* AnimJoint data for relocData file 1783 (FTNessAnimAttackAirN) */
/* 2704 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimAttackAirN_joint1[10];
extern u16 dFTNessAnimAttackAirN_joint2[34];
extern u16 dFTNessAnimAttackAirN_joint4[10];
extern u16 dFTNessAnimAttackAirN_joint5[110];
extern u16 dFTNessAnimAttackAirN_joint6[48];
extern u16 dFTNessAnimAttackAirN_joint7[10];
extern u16 dFTNessAnimAttackAirN_joint8[32];
extern u16 dFTNessAnimAttackAirN_joint10[10];
extern u16 dFTNessAnimAttackAirN_joint11[120];
extern u16 dFTNessAnimAttackAirN_joint12[56];
extern u16 dFTNessAnimAttackAirN_joint13[46];
extern u16 dFTNessAnimAttackAirN_joint15[10];
extern u16 dFTNessAnimAttackAirN_joint16[126];
extern u16 dFTNessAnimAttackAirN_joint18[96];
extern u16 dFTNessAnimAttackAirN_joint19[140];
extern u16 dFTNessAnimAttackAirN_joint21[42];
extern u16 dFTNessAnimAttackAirN_joint22[96];
extern u16 dFTNessAnimAttackAirN_joint24[92];
extern u16 dFTNessAnimAttackAirN_joint25[164];
extern u16 dFTNessAnimAttackAirN_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimAttackAirN_joints[] = {
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimAttackAirN_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimAttackAirN_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 242, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimAttackAirN_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 291, 72, -294, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 291, -148, -310, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -302, -3, -414, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), -302, 3, -414, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, -209,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimAttackAirN_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimAttackAirN_joint5[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -325, 449, -643, 308, -19, -431,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -178, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 123, 243, -450, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 161, 9, -534, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 141, -29, -506, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 297, -352, -123, -419, -312,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -422, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 737, 324, -1130, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 751, 12, -1143, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 28), 755, 2, -1145, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -426, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -447, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 753, -10, -470, -24, -1142, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -648, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 685, -120, -1073, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 494, -447, -872, 463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -410, -677, 2, -145, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, -116, -643, 34, -19, 126,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimAttackAirN_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -477, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimAttackAirN_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimAttackAirN_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 363, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 363, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 194, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 154, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 66, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 194,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimAttackAirN_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimAttackAirN_joint11[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1034, -447, 968, 348, -1429, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1481, -259, 1316, 204, -1884, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, -50, 1378, 28, -2031, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1500, 251, -1916, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1373, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1330, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1080, 209, 719, -309, -1466, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1081, 0, 711, -7, -1465, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 719, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1079, 2, -1462, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), -1067, -12, -1454, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1080, -50, -1466, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1169, -239, 733, 19, -1555, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 634, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1558, -465, -1947, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2100, -372, -2491, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2304, -151, -2698, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2624, -31, -3018, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2643, -19, 639, 5, -3038, -19,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimAttackAirN_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -314,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -399, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -599, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -454, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimAttackAirN_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, 0, 126, 47, 609, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -170, -98, 126, 67, 609, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -562, -2, 397, 6, 157, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -562, 2, 397, -5, 157, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -170, -63, 267,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimAttackAirN_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimAttackAirN_joint16[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 24, -360, 78, -700, -242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -7, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -286, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -942, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -940, 211,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, -97, -207, 40, -573, 187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -560, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -173, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -184, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -569, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -187, -4,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -585, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -350, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -182, 55, -539, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -38, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 6, -360, -10, -700, 5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimAttackAirN_joint18[96] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 194,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, -294,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1192, 1192, 1188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 7, -321, 7076, 607, 7076, 607, 7067, 603,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5917, -174, 5917, -155, 5907, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 7, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, -539, 4096, -534, 4096, -539,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimAttackAirN_joint19[140] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1620, 128, 1573, 128, -1615, 141,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -1508, -112, 4096, -1, 4096, -1, 4096, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1440, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1728, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1714, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1682, -68, 1460, -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1642, 17,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -1, 4096, 3, 4096, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1463, 5, -1444, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1367, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1475, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1611, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1478, 9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1445, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1420, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1419, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1406, -10,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1487, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1580, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1470, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1606, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1414, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1606, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, -14, 1573, -7, -1615, -9,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimAttackAirN_joint21[42] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -476, 178, 112, 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 0, 4096, 3, 4096, 1,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 129, 5324, 128, 5324, 126,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4484, -10, 4480, -6, 4476, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimAttackAirN_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 183, 442, -142, -799, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 163, -9, 282, 3, -964, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 44, 293, 125, -918, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, 58, 533, 117, -287, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, 0, 528, -5, -287, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 250, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -284, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 27), 538, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 533, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 452, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 261, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 266, -97, -291, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -722, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, -153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -59, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 0, 442, -9, -799, -16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimAttackAirN_joint24[92] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, -78,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 464, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -232,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1171, 1171, 1175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, -261, 7025, 607, 7025, 607, 7035, 614,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5919, -55, 5919, -70, 5938, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, -473, 4096, -474, 4096, -507,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimAttackAirN_joint25[164] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -46, -104, 416, -32, 439,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -118, 64,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -1, 4096, -1, 4096, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 312, 206, 406, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 421, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 308, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, -12, 405, -221,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -59, 25, -143, -22, -216,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 18, -5,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -1, 4096, 3, 4096, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -114, 10, -27, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -142, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, -2, 138, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 24, 1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 160, 13,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 11, 30,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -125, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, 14, 173, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 13, -9, -25, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -110, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -5, -104, 6, -32, -7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimAttackAirN_joint26[48] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -339, -256, -211, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 0, 4096, 3, 4096, 1,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 129, 5324, 128, 5324, 126,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4484, -10, 4480, -6, 4476, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
