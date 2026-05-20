/* AnimJoint data for relocData file 1825 (FTYoshiAnimJumpF) */
/* 2512 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimJumpF_joint2[66];
extern u16 dFTYoshiAnimJumpF_joint3[52];
extern u16 dFTYoshiAnimJumpF_joint4[24];
extern u16 dFTYoshiAnimJumpF_joint6[12];
extern u16 dFTYoshiAnimJumpF_joint7[128];
extern u16 dFTYoshiAnimJumpF_joint10[32];
extern u16 dFTYoshiAnimJumpF_joint11[128];
extern u16 dFTYoshiAnimJumpF_joint12[30];
extern u16 dFTYoshiAnimJumpF_joint13[8];
extern u16 dFTYoshiAnimJumpF_joint14[10];
extern u16 dFTYoshiAnimJumpF_joint15[20];
extern u16 dFTYoshiAnimJumpF_joint17[32];
extern u16 dFTYoshiAnimJumpF_joint18[116];
extern u16 dFTYoshiAnimJumpF_joint20[60];
extern u16 dFTYoshiAnimJumpF_joint22[158];
extern u16 dFTYoshiAnimJumpF_joint23[110];
extern u16 dFTYoshiAnimJumpF_joint25[58];
extern u16 dFTYoshiAnimJumpF_joint26[160];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimJumpF_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpF_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTYoshiAnimJumpF_joint2[66] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 89, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -5, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 25,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 360,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), -357, -12, -24, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 25), -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 9), -357, -26, -24, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -893, 2,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), 38, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -268, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 15), 0, 1, 63, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimJumpF_joint3[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 134, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 278, 41,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, -75, 48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -5, 1, -75, 94, 48, 22,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 1, 161, 17, 104, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1174, 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 657, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimJumpF_joint4[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -268, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -268, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 568, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -141, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 446, 2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimJumpF_joint6[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 31), 255,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimJumpF_joint7[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 0, -1628, 1, 1700, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1679, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1749, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1247, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1195, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1088, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1699, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1588, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1746, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1283, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 481, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1518, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -715, 110,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1281, 2, 467, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1293, -6, 427, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -609, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -360, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -31, -1300, 62, 406, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1039, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -423, -365, 244, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1022, -515, 501, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1455, -259, -1142, -90, 729, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, -86, -1220, -77, 707, -21,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimJumpF_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimJumpF_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1597, -2, 1589, 4, -1490, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1512, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1748, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -2022, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2079, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2309, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1491, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1574, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1726, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1284, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1585, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1283, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1303, -50, -2417, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2746, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2106, -26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1284, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1299, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2758, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2790, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2119, 77, 1305, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1183, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1660, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2641, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2460, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1215, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1675, -14, 1220, 4, -2509, -48,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimJumpF_joint12[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -5,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimJumpF_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimJumpF_joint14[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1251, -714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), -804, -714,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimJumpF_joint15[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 223, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -257, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -536, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 39, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 357, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimJumpF_joint17[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 268, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -261, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -252, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -536, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 98, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 98, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -278, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimJumpF_joint18[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -19, 1, -22, 2, 770, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -89, -21, -61, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 816, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 898, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 6, -75, -35, 899, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 103, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -180, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 11, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 186, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 190, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -210, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -122, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 229, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 319, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, 4, -234, 50, -92, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 36, -131, 103, -233, -141,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimJumpF_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 773, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 620, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimJumpF_joint22[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1558, -5, 22, -1, 542, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1461, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 214, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 745, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 556, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1441, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1566, -120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -213,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -224, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -65, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1720, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1758, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -385, 180,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1753, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1755, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -50, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -546, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, 194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 421, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1817, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2661, -217,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -585, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -641, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1340, 67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2861, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3007, 159,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -671, -58, 1354, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2655, 465, -758, 21, 941, -595,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2076, 579, -627, 130, 163, -778,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimJumpF_joint23[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 1, -21, 2, 783, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 89, 18, 64, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 809, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 896, -105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 107, -6, 75, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -98, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 118, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 59, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 32, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 40, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -104, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -180, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 254, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 29, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -221, -41, -23, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -364, 32, -143, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -321, 18, 252, -61, -105, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, -6, 131, -120, -233, -127,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimJumpF_joint25[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 757, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 813, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 603, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 333,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimJumpF_joint26[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, -6, 1586, 2, 2166, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -149, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1823, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 2355, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2381, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2176, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -41, 122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2015, -216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1385, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1875, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1544, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 148, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1234, 180,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 146, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1558, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1071, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1430, 185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2007, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 204, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 810, 209,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1033, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1039, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2149, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2876, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1035, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1295, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, -126, 1005, -76, 2874, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1043, -421, 887, -12, 2538, -551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 469, -573, 980, 93, 1771, -766,
	ftAnimEnd(),
	0x0000, 0x0000,
};
