/* AnimJoint data for relocData file 1575 (FTCaptainAnimCatchPull) */
/* 768 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCatchPull_joint1[16];
extern u16 dFTCaptainAnimCatchPull_joint2[14];
extern u16 dFTCaptainAnimCatchPull_joint4[14];
extern u16 dFTCaptainAnimCatchPull_joint5[24];
extern u16 dFTCaptainAnimCatchPull_joint6[16];
extern u16 dFTCaptainAnimCatchPull_joint7[8];
extern u16 dFTCaptainAnimCatchPull_joint8[14];
extern u16 dFTCaptainAnimCatchPull_joint10[14];
extern u16 dFTCaptainAnimCatchPull_joint11[24];
extern u16 dFTCaptainAnimCatchPull_joint12[16];
extern u16 dFTCaptainAnimCatchPull_joint13[8];
extern u16 dFTCaptainAnimCatchPull_joint16[12];
extern u16 dFTCaptainAnimCatchPull_joint17[24];
extern u16 dFTCaptainAnimCatchPull_joint19[16];
extern u16 dFTCaptainAnimCatchPull_joint21[24];
extern u16 dFTCaptainAnimCatchPull_joint22[24];
extern u16 dFTCaptainAnimCatchPull_joint24[16];
extern u16 dFTCaptainAnimCatchPull_joint25[48];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCatchPull_joints[] = {
	(u32)dFTCaptainAnimCatchPull_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCatchPull_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCatchPull_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimCatchPull_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimCatchPull_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCatchPull_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCatchPull_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCatchPull_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimCatchPull_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimCatchPull_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCatchPull_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCatchPull_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimCatchPull_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimCatchPull_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimCatchPull_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimCatchPull_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimCatchPull_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimCatchPull_joint25, /* [24] joint 25 */
	0xFFFF00B4, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCatchPull_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1557, 172, 188, 109,
	ftAnimSetValBlock(FT_ANIM_TRAX), -104,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1557, -115,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimCatchPull_joint2[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 15, -153, -123, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 107, -153, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimCatchPull_joint4[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 19, -172, -41, -197, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 329, -172, -197,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCatchPull_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, -40, -143, -7, -442, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -168, 19, -151, 19, -436, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, 78, -104, 46, -391, 44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCatchPull_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -771, -186,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimCatchPull_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2326, 33, 731,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCatchPull_joint8[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 19, 189, 113, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 133, 189, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimCatchPull_joint10[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, -42, 53, 28, -92, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -296, 53, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCatchPull_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -266, -120, 331, -15, 143, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -387, -36, 316, -73, -176, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -340, 46, 184, -131, -383, -207,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCatchPull_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1206, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1274, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1226, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimCatchPull_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 565, 145, -538,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTCaptainAnimCatchPull_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCatchPull_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 169, 49, -71, -12, -557, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, 92, -84, -3, -548, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 136, -79, 4, -504, 43,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimCatchPull_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 556, -103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimCatchPull_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1751, -44, 1721, 43, -1633, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1796, -85, 1765, 53, -1520, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1922, -126, 1829, 64, -1350, 169,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimCatchPull_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -21, 131, -30, -286, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 22, 101, -8, -343, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 67, 114, 12, -364, -20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimCatchPull_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 735, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimCatchPull_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 62, 3, -107, 11, 2982, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, -9, -96, -7, 2954, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, -22, -122, -26, 2910, -43,
	ftAnimEnd(),
	0x500E, 0x0000, 0x0648, 0x0000, 0x28C0, 0xFE5C, 0xFDDB, 0x03E3, 0x00A1, 0x1020, 0x008B, 0x40C1, 0x0002, 0xFE5C, 0x035C, 0x1021, 0x0002, 0x008B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
