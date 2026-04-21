/* AnimJoint data for relocData file 1647 (FTCaptainAnimExitPipeWalk) */
/* 1680 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimExitPipeWalk_joint1[36];
extern u16 dFTCaptainAnimExitPipeWalk_joint2[40];
extern u16 dFTCaptainAnimExitPipeWalk_joint4[32];
extern u16 dFTCaptainAnimExitPipeWalk_joint5[76];
extern u16 dFTCaptainAnimExitPipeWalk_joint6[32];
extern u16 dFTCaptainAnimExitPipeWalk_joint7[40];
extern u16 dFTCaptainAnimExitPipeWalk_joint8[10];
extern u16 dFTCaptainAnimExitPipeWalk_joint10[36];
extern u16 dFTCaptainAnimExitPipeWalk_joint11[56];
extern u16 dFTCaptainAnimExitPipeWalk_joint12[24];
extern u16 dFTCaptainAnimExitPipeWalk_joint13[32];
extern u16 dFTCaptainAnimExitPipeWalk_joint14[12];
extern u16 dFTCaptainAnimExitPipeWalk_joint16[60];
extern u16 dFTCaptainAnimExitPipeWalk_joint17[54];
extern u16 dFTCaptainAnimExitPipeWalk_joint19[32];
extern u16 dFTCaptainAnimExitPipeWalk_joint21[76];
extern u16 dFTCaptainAnimExitPipeWalk_joint22[46];
extern u16 dFTCaptainAnimExitPipeWalk_joint24[32];
extern u16 dFTCaptainAnimExitPipeWalk_joint25[64];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimExitPipeWalk_joints[] = {
	(u32)dFTCaptainAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimExitPipeWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimExitPipeWalk_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimExitPipeWalk_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimExitPipeWalk_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimExitPipeWalk_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimExitPipeWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimExitPipeWalk_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimExitPipeWalk_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimExitPipeWalk_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimExitPipeWalk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimExitPipeWalk_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimExitPipeWalk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimExitPipeWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimExitPipeWalk_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimExitPipeWalk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimExitPipeWalk_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimExitPipeWalk_joint1[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 898, -7, -1596, 181,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 40), 67, 257,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 993, 137, 2662, 27, 2662, 28, 2662, 27,
	ftAnimSetValRateT(FT_ANIM_TRAY, 25), 1583, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimExitPipeWalk_joint2[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 0, 173, 0, -72, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 39, 0, 18, -14, 44, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 13, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 37, 0, -127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 37, 0, -64, 15,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimExitPipeWalk_joint4[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 0, -347, 0, 58, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 260, 0, 427, 1, -65, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 260, 0, 120, -41, -16, 5,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimExitPipeWalk_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1797, 5, -1563, -9, 1250, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1439, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1753, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1613, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1631, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1590, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1423, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1600, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1758, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1539, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1329, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1619, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1634, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1753, -5, -1635, -1, 1312, -16,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimExitPipeWalk_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -917, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -708, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -938, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -865, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimExitPipeWalk_joint7[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3553, 0, 172, 0, -181, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 3126, -13, 142, 0, -55, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 26),
	ftAnimSetValAfterT(FT_ANIM_ROTX, 4), 3126,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 142, -55,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3250, 16, 151, 1, -94, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimExitPipeWalk_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimExitPipeWalk_joint10[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 0, 212, -3, -125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -210, 0, -253, 0, 217, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -200, 3, -227, 10, 198, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -152, 6, -98, 13, 103, -12,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimExitPipeWalk_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1652, -8, -1756, 19, -1237, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1751, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 1645, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1816, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1832, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1842, 7,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1755, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1728, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1627, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1574, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, -17, -1723, 5, -1836, 5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimExitPipeWalk_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -945, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -801, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -787, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimExitPipeWalk_joint13[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, 2, 25, 3, 17, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -26, 0, 82, 0, 503, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -100, 0, 14, 0, -60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -92, 1, 18, 0, -35, 3,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimExitPipeWalk_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1403, -645, -200, 92, 56, 7,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimExitPipeWalk_joint16[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -25, -17, 4, 4, 155, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -174, 1, 42, 2, 34, -18,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -6, 8, 38, -2, -87, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -3, -4, 13, 1, -138, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -103, -19, 65, 12, 41, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -158, 12, 89, -8, 33, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 16, 0, -7, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimExitPipeWalk_joint17[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 146, 15, -172, 28, 213, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -72, 1, -423, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -133, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -109, 14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -1, -422, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -62, 12, -453, 39,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -95, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 13, -50, 11, -409, 44,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimExitPipeWalk_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 374, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 274, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 639, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimExitPipeWalk_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1430, 2, -1480, -21, -1937, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1770, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 1648, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -1590, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1578, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1675, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1747, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1341, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1668, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1544, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1363, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1787, -52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1637, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1611, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1605, -6, -1552, -8, -1837, -50,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimExitPipeWalk_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, -8, 107, 0, -596, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 142, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -98, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), 82, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 32, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -198, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 17, 35, 3, -237, -38,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimExitPipeWalk_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 591, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 596, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 550, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 612, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 775, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimExitPipeWalk_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1634, 5, 1560, 5, -1583, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1490, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -1553, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1906, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1905, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1891, 8,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1491, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1672, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1880, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1808, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1563, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1651, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1640, 10, 1662, -9, -1805, 2,
	ftAnimEnd(),
};
