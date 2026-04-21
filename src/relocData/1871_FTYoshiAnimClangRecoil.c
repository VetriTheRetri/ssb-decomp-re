/* AnimJoint data for relocData file 1871 (FTYoshiAnimClangRecoil) */
/* 1392 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimClangRecoil_joint1[32];
extern u16 dFTYoshiAnimClangRecoil_joint2[20];
extern u16 dFTYoshiAnimClangRecoil_joint3[30];
extern u16 dFTYoshiAnimClangRecoil_joint6[32];
extern u16 dFTYoshiAnimClangRecoil_joint7[48];
extern u16 dFTYoshiAnimClangRecoil_joint8[24];
extern u16 dFTYoshiAnimClangRecoil_joint10[8];
extern u16 dFTYoshiAnimClangRecoil_joint11[60];
extern u16 dFTYoshiAnimClangRecoil_joint12[24];
extern u16 dFTYoshiAnimClangRecoil_joint13[42];
extern u16 dFTYoshiAnimClangRecoil_joint14[10];
extern u16 dFTYoshiAnimClangRecoil_joint15[20];
extern u16 dFTYoshiAnimClangRecoil_joint17[20];
extern u16 dFTYoshiAnimClangRecoil_joint18[48];
extern u16 dFTYoshiAnimClangRecoil_joint20[32];
extern u16 dFTYoshiAnimClangRecoil_joint22[58];
extern u16 dFTYoshiAnimClangRecoil_joint23[56];
extern u16 dFTYoshiAnimClangRecoil_joint25[24];
extern u16 dFTYoshiAnimClangRecoil_joint26[56];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimClangRecoil_joints[] = {
	(u32)dFTYoshiAnimClangRecoil_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimClangRecoil_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimClangRecoil_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimClangRecoil_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimClangRecoil_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimClangRecoil_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimClangRecoil_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimClangRecoil_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimClangRecoil_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimClangRecoil_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimClangRecoil_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimClangRecoil_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimClangRecoil_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimClangRecoil_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimClangRecoil_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimClangRecoil_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimClangRecoil_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimClangRecoil_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimClangRecoil_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimClangRecoil_joint1[32] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 596,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -822,
	ftAnimSetValT(FT_ANIM_TRAZ, 8), -658,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 510, 32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 521, 134,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 672, 171,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimClangRecoil_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 166, -12, -504, 47, -251, 36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 30, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -8, -89, 9, 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimClangRecoil_joint3[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -216, 38, 116, -8, 236, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 39, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -74, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 16, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimClangRecoil_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 456, -48, 159, -43, -21, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 78, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -38, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimClangRecoil_joint7[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -65, 196, -22, -365, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -45, -22, -134, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -697, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -405, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -68, -22, -135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -90, -21, -133, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -19, -131, 1, -352, 53,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimClangRecoil_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -896, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -652, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -783, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimClangRecoil_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimClangRecoil_joint11[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, -291, 592, -57, -5, -263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 161, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 100, -72, -528, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, -32, -570, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -501, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -93, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 159, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -83, -23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -280, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -51, -103, -19, -219, 61,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimClangRecoil_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -910, -85,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -848, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1014, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimClangRecoil_joint13[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 554, -143, -225, 167, -171, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 73, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -16, 22, 80, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 167, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 0, -20,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimClangRecoil_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimClangRecoil_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -349, 34,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -87, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -190, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimClangRecoil_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -512, 69,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 16, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -153, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimClangRecoil_joint18[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 215, 41, -681, 89, -519, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -743, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 145, -100, -283, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 35, -69, -326, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -50, 34, -35, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -184, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 44, 5, 40, -3, 180,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimClangRecoil_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 177, 54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 631, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 671, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -204,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimClangRecoil_joint22[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1181, 35, 216, -49, 266, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1515, 91, 148, 45, 132, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, 47, 199, 18, 139, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1568, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -33, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -207, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -291, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1585, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 28, -83, -49, -263, 27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimClangRecoil_joint23[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 235, 16, -230, 77, -189, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -25, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -36, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -558, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -223, 61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -10, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -6, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 11, 0, 6, -154, 68,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimClangRecoil_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 177, 198,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 868, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 492, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimClangRecoil_joint26[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1434, 36, -94, -2, 28, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -389, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1613, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 33, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -64, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -277, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1606, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 2, -89, -24, -228, 48,
	ftAnimEnd(),
	0x0000, 0x0000,
};
