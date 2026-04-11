/* AnimJoint data for relocData file 582 (FTMarioAnimCliffAttackSlow1) */
/* 1296 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffAttackSlow1_joint1[14];
extern u16 dFTMarioAnimCliffAttackSlow1_joint2[26];
extern u16 dFTMarioAnimCliffAttackSlow1_joint3[24];
extern u16 dFTMarioAnimCliffAttackSlow1_joint5[30];
extern u16 dFTMarioAnimCliffAttackSlow1_joint6[60];
extern u16 dFTMarioAnimCliffAttackSlow1_joint7[24];
extern u16 dFTMarioAnimCliffAttackSlow1_joint8[18];
extern u16 dFTMarioAnimCliffAttackSlow1_joint9[34];
extern u16 dFTMarioAnimCliffAttackSlow1_joint11[34];
extern u16 dFTMarioAnimCliffAttackSlow1_joint12[32];
extern u16 dFTMarioAnimCliffAttackSlow1_joint13[20];
extern u16 dFTMarioAnimCliffAttackSlow1_joint14[30];
extern u16 dFTMarioAnimCliffAttackSlow1_joint16[10];
extern u16 dFTMarioAnimCliffAttackSlow1_joint17[66];
extern u16 dFTMarioAnimCliffAttackSlow1_joint19[32];
extern u16 dFTMarioAnimCliffAttackSlow1_joint21[74];
extern u16 dFTMarioAnimCliffAttackSlow1_joint22[24];
extern u16 dFTMarioAnimCliffAttackSlow1_joint24[46];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffAttackSlow1_joints[] = {
	(u32)dFTMarioAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffAttackSlow1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffAttackSlow1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffAttackSlow1_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffAttackSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffAttackSlow1_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffAttackSlow1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0136, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCliffAttackSlow1_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -327, 174, -109, 92,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 65, 0, -9,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCliffAttackSlow1_joint2[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -31, 0, 0, 0, -159,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, -396, -300, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -317, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -536, 15,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimCliffAttackSlow1_joint3[24] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 23), 600,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 13,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 1, 0, 101, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffAttackSlow1_joint5[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 32), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 18,
	ftAnimSetValRate(FT_ANIM_ROTX), 223, 26,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 759, 32, 0, 6, 0, 2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCliffAttackSlow1_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -49, 14, -160, 38, -247, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 246, 174, -207, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -737, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -892, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 415, 113, -312, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 413, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -599, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 64, -218, -411, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -88, -653, -54, -313, 97,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffAttackSlow1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffAttackSlow1_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), -625, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 30,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimCliffAttackSlow1_joint9[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 178, 8, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0, 0, -2, 0, 3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 27), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 13,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffAttackSlow1_joint11[34] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, 0, -18, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 13,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -172, -16, 165, 13, -129, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -368, -40, 309, -37, -239, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCliffAttackSlow1_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, -13, 159, -18, -242, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -90, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 143, 45, -739, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 190, 0, -823, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, -46, -141, -50, -690, 133,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffAttackSlow1_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -478,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffAttackSlow1_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 557, 3, -95, 22, 77, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 625, 3, 0, 4, 0, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 625, 8,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffAttackSlow1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffAttackSlow1_joint17[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -29, -56, 9, 125, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 409, 179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -247, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 97, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -767, -535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1142, -204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, 176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 931, 116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1176, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1102, 501, -490, -173, 994, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 928, -593, -103, 151, -842,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffAttackSlow1_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 564, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 959, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCliffAttackSlow1_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 142, -291, 31, 742, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 418, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 221, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -327, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -205, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 509, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 196, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 568, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 414, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 467, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -160, -256,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 275, -138, 146, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -191, 102, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -408, -247, -107, -246, 20, -82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffAttackSlow1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 2, 47, 0, 120, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 74, 0, 30, 9, 115, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -4, 48, 17, 120, 5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffAttackSlow1_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x2806, 0x0769, 0xFFFF, 0xF8E5, 0x0000, 0x3808, 0x0856, 0x200F, 0x0009, 0x06C8, 0xFFBD, 0xF8FC, 0xFFF3, 0x0873, 0xFFF0, 0x200F, 0x0001, 0x0679, 0xFFB2, 0xF8E5, 0xFFE9, 0x0856, 0xFFE3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
