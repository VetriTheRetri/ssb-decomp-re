/* AnimJoint data for relocData file 1678 (FTNessAnimFall) */
/* 912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFall_joint1[10];
extern u16 dFTNessAnimFall_joint2[12];
extern u16 dFTNessAnimFall_joint4[10];
extern u16 dFTNessAnimFall_joint5[38];
extern u16 dFTNessAnimFall_joint6[24];
extern u16 dFTNessAnimFall_joint7[10];
extern u16 dFTNessAnimFall_joint8[16];
extern u16 dFTNessAnimFall_joint10[10];
extern u16 dFTNessAnimFall_joint11[48];
extern u16 dFTNessAnimFall_joint12[22];
extern u16 dFTNessAnimFall_joint13[10];
extern u16 dFTNessAnimFall_joint15[10];
extern u16 dFTNessAnimFall_joint16[24];
extern u16 dFTNessAnimFall_joint18[14];
extern u16 dFTNessAnimFall_joint19[24];
extern u16 dFTNessAnimFall_joint21[16];
extern u16 dFTNessAnimFall_joint22[24];
extern u16 dFTNessAnimFall_joint24[16];
extern u16 dFTNessAnimFall_joint25[66];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimFall_joints[] = {
	(u32)dFTNessAnimFall_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimFall_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimFall_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimFall_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimFall_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimFall_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimFall_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimFall_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimFall_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimFall_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimFall_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimFall_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimFall_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimFall_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimFall_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimFall_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimFall_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimFall_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimFall_joint25, /* [24] joint 25 */
	0xFFFF00D9, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimFall_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 242, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimFall_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimFall_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimFall_joint5[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1136, 48, -241, 7, 665, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 555, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -234, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -885, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -984, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1088, -76, 626, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1136, -48, -241, -7, 665, 39,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFall_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -673, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -629, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -687, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimFall_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimFall_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 138,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimFall_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFall_joint11[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -393, -106, 1115, 7, -799, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1237, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1159, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -906, -130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -980,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -500, 162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1123, -21, -904, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, 106, 1115, -7, -799, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimFall_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -584, -74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -784, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -770,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -658, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 74,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimFall_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -104, 44, 566, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimFall_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimFall_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 0, -335, 6, -623, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -96, 0, -333, -3, -624, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 0, -335, -2, -623, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimFall_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimFall_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1587, 5, 1659, -1, -1414, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1573, -27, 1624, 36, -1338, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -14, 1659, 35, -1414, -76,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimFall_joint21[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 112, 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -461,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -384,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimFall_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, -1, 322, 4, -616, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 179, -3, 329, -9, -600, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -3, 323, -5, -621, -21,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimFall_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimFall_joint25[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -30, 10, -31, 230, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -118, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 402, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 235, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -1, 10, 8, 226, -9,
	ftAnimEnd(),
	0x4002, 0xFE78, 0x48EC, 0xFFA0, 0xFFB4, 0xFF82, 0xFFAE, 0xFFF4, 0x3803, 0x0002, 0xFE21, 0x3803, 0x0006, 0xFE78, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
