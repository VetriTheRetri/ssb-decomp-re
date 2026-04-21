/* AnimJoint data for relocData file 944 (FTDonkeyAnimHandSlapEnd) */
/* 800 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimHandSlapEnd_joint1[14];
extern u16 dFTDonkeyAnimHandSlapEnd_joint2[14];
extern u16 dFTDonkeyAnimHandSlapEnd_joint4[14];
extern u16 dFTDonkeyAnimHandSlapEnd_joint5[24];
extern u16 dFTDonkeyAnimHandSlapEnd_joint6[16];
extern u16 dFTDonkeyAnimHandSlapEnd_joint7[22];
extern u16 dFTDonkeyAnimHandSlapEnd_joint8[14];
extern u16 dFTDonkeyAnimHandSlapEnd_joint10[14];
extern u16 dFTDonkeyAnimHandSlapEnd_joint11[24];
extern u16 dFTDonkeyAnimHandSlapEnd_joint12[20];
extern u16 dFTDonkeyAnimHandSlapEnd_joint13[22];
extern u16 dFTDonkeyAnimHandSlapEnd_joint14[8];
extern u16 dFTDonkeyAnimHandSlapEnd_joint16[10];
extern u16 dFTDonkeyAnimHandSlapEnd_joint17[24];
extern u16 dFTDonkeyAnimHandSlapEnd_joint19[16];
extern u16 dFTDonkeyAnimHandSlapEnd_joint21[24];
extern u16 dFTDonkeyAnimHandSlapEnd_joint22[24];
extern u16 dFTDonkeyAnimHandSlapEnd_joint24[16];
extern u16 dFTDonkeyAnimHandSlapEnd_joint25[30];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimHandSlapEnd_joints[] = {
	(u32)dFTDonkeyAnimHandSlapEnd_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimHandSlapEnd_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimHandSlapEnd_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimHandSlapEnd_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimHandSlapEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimHandSlapEnd_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimHandSlapEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimHandSlapEnd_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimHandSlapEnd_joint1[14] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, -31, 1175, 86, -476, 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -24, 1032, -402,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimHandSlapEnd_joint2[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, 0, -12, 0, -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimHandSlapEnd_joint4[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 670, -8, 12, 0, -134, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimHandSlapEnd_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -30, -257, 6, -671, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -34, -47, -104, 34, -480, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -28, -84, 19, -473, 6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimHandSlapEnd_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -463, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -424, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimHandSlapEnd_joint7[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 201, -1, -66, 8, -471, 22, 4096, -292, 4096, -585, 4096, -292,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimHandSlapEnd_joint8[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 218, -1, -70, 0, -84, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimHandSlapEnd_joint10[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -230, 1, 126, -1, 28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimHandSlapEnd_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -722, 81, 212, 58, -1010, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -157, 79, 192, -38, -469, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 41, 172, -20, -479, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimHandSlapEnd_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -657, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -623, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimHandSlapEnd_joint13[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -165, 6, 309, -1, -62, 13, 4095, -163, 4095, -327, 4095, -163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 98, 0, 0, 4095, 4095, 4095,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimHandSlapEnd_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 565, -904, 635,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimHandSlapEnd_joint16[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -536, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimHandSlapEnd_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -131, 3, -302, -10, -427, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -91, 8, -384, -16, -315, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 5, -394, -10, -304, 10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimHandSlapEnd_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 921, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 995, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimHandSlapEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -24, -151, 42, -288, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -58, -9, 13, 20, -368, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -4, 24, 11, -377, -8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimHandSlapEnd_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 117, 1, 242, -8, -407, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 101, -3, 217, -1, -307, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, -1, 216, 0, -297, 9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimHandSlapEnd_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 884, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 980, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimHandSlapEnd_joint25[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, 5, 166, -6, -276, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 15, -19, 112, -11, -373, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -14, 105, -7, -383, -10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
