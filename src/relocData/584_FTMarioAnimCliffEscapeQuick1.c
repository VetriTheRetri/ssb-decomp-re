/* AnimJoint data for relocData file 584 (FTMarioAnimCliffEscapeQuick1) */
/* 992 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffEscapeQuick1_joint1[26];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint2[32];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint3[34];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint5[36];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint6[24];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint7[16];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint8[20];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint9[34];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint11[32];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint12[24];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint13[14];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint14[16];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint16[10];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint17[24];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint19[14];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint21[24];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint22[24];
extern u16 dFTMarioAnimCliffEscapeQuick1_joint24[42];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffEscapeQuick1_joints[] = {
	(u32)dFTMarioAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffEscapeQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF00EB, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCliffEscapeQuick1_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -633, 1851, -351, -579,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 225, 1566, -545, 718,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 0, 521,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 149, -900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCliffEscapeQuick1_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -80, 54, 0, 0, 218, 223, -77, 291,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 439, 409, 0, 0, 313, -136, 291, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimCliffEscapeQuick1_joint3[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 116, -166, 0, -274,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 33, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 204, 166, -651, -1378,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 220, -475, -861, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffEscapeQuick1_joint5[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 34), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 7,
	ftAnimSetValRate(FT_ANIM_ROTX), 380, 52,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 759, 15,
	ftAnimSetValT(FT_ANIM_ROTX, 22), 759,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCliffEscapeQuick1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -674, 45, -1489, 0, 234, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -472, 16, -1519, -4, -52, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -468, 4, -1522, -2, -46, 5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffEscapeQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffEscapeQuick1_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -498, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -625, 8, 0, 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffEscapeQuick1_joint9[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 54), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -641, 188, -1, 0, 19, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -4, 0, 176, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 318, 191,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 318,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCliffEscapeQuick1_joint11[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 8, -17,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 54, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCliffEscapeQuick1_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 507, -29, 1414, -15, 76, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 377, -4, 1398, -4, -112, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, 7, 1388, -9, -95, 16,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffEscapeQuick1_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimCliffEscapeQuick1_joint14[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1437, -36, -79, -35, 53, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1206, -9, -45, 1, 37, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffEscapeQuick1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffEscapeQuick1_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1203, 4, -1537, -4, -1644, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1190, 1, -1551, -2, -1691, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1188, 1, -1553, -2, -1698, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffEscapeQuick1_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffEscapeQuick1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -655, 20, -303, 1, 770, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -575, 20, -299, 1, 702, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -555, 20, -298, 1, 682, -20,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffEscapeQuick1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 4, 14, -3, -22, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 42, 5, 5, -1, -70, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 5, 4, -1, -77, -7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffEscapeQuick1_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x071E, 0xFFEC, 0xF8CC, 0x0006, 0x0867, 0xFFF4, 0x200F, 0x0004, 0x06D2, 0xFFF0, 0xF8E7, 0x0007, 0x0830, 0xFFF1, 0x200F, 0x0001, 0x06C2, 0xFFF0, 0xF8EE, 0x0007, 0x0820, 0xFFF0, 0x0000, 0x0000, 0x0000,
};
