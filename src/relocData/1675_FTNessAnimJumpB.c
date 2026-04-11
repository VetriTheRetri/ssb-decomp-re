/* AnimJoint data for relocData file 1675 (FTNessAnimJumpB) */
/* 2256 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimJumpB_joint1[24];
extern u16 dFTNessAnimJumpB_joint2[56];
extern u16 dFTNessAnimJumpB_joint3[18];
extern u16 dFTNessAnimJumpB_joint4[10];
extern u16 dFTNessAnimJumpB_joint5[102];
extern u16 dFTNessAnimJumpB_joint6[46];
extern u16 dFTNessAnimJumpB_joint7[22];
extern u16 dFTNessAnimJumpB_joint8[94];
extern u16 dFTNessAnimJumpB_joint10[10];
extern u16 dFTNessAnimJumpB_joint11[128];
extern u16 dFTNessAnimJumpB_joint12[46];
extern u16 dFTNessAnimJumpB_joint13[20];
extern u16 dFTNessAnimJumpB_joint15[10];
extern u16 dFTNessAnimJumpB_joint16[72];
extern u16 dFTNessAnimJumpB_joint18[22];
extern u16 dFTNessAnimJumpB_joint19[80];
extern u16 dFTNessAnimJumpB_joint21[70];
extern u16 dFTNessAnimJumpB_joint22[54];
extern u16 dFTNessAnimJumpB_joint24[16];
extern u16 dFTNessAnimJumpB_joint25[176];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimJumpB_joints[] = {
	(u32)dFTNessAnimJumpB_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimJumpB_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimJumpB_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimJumpB_joint4, /* [3] joint 4 */
	(u32)dFTNessAnimJumpB_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimJumpB_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimJumpB_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimJumpB_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimJumpB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimJumpB_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimJumpB_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimJumpB_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimJumpB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimJumpB_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimJumpB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimJumpB_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimJumpB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimJumpB_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimJumpB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimJumpB_joint25, /* [24] joint 25 */
	0xFFFF020D, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimJumpB_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -16, 242, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 40), -16, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -97, 242, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 242, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimJumpB_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -151, -120, 8,
	ftAnimSetValRate(FT_ANIM_SCAY | FT_ANIM_SCAZ), 6229, 84, 2390, 28,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -273, 2, -173, -2, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4129, -714, 4070, 367,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3562, 9, 4598, 18,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4441, 10, 3758, -7,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4090, -31, 4090, 61,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 36), 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimJumpB_joint3[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 199, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 199, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 148,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimJumpB_joint4[10] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3973,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 60), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimJumpB_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, -2, -98, -2, -280, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 331, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -213, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -355, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -208, 34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 327, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 61, -56,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -383, 24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, -170, -170, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -280, -206, 138, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -415, -119, 250, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 568, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1081, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -360, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -378, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 632, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1085, -3, -379, 0, 635, 2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimJumpB_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -692, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimJumpB_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 0, 0, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 268,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimJumpB_joint8[94] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -18,
	ftAnimSetValBlock(FT_ANIM_ROTX), 497,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 5, 0, -18, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 524, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 510, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 5, 0, -19, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 579, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 531, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 6, 0, -20, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 639, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 534, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 5, 0, -18, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 676, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 343, -38, 4, 0, -13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 138, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimJumpB_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimJumpB_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2543, 1, 130, -4, 2962, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 2601, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 216, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 2870, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2883, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 2909, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2604, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 2785, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 220, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 398, 38,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2909, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2872, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 439, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 637, 67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2829, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2882, -310, 700, 141, 2861, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2209, -241, 921, 139, 2134, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2399, 145, 979, 49, 2260, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2388, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2500, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2823, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2399, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2417, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2823, 0, 1115, 0, 2417, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimJumpB_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -577, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimJumpB_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 90, 54, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -104, 44, 566,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimJumpB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimJumpB_joint16[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -573, 2, 1, 3, -22, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -74, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -289, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -479, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -483, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -396, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -526, -24,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -377, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -94, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -335, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -626, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, -1, -335, 0, -623, 3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimJumpB_joint18[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimJumpB_joint19[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1430, 0, 1593, -1, 2221, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -1304, -10, 1503, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 2037, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2029, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2050, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1314, -8, 1517, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1574, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1324, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2045, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 1802, -1,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1581, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1659, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1586, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -1, 1659, 0, 1802, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimJumpB_joint21[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -66, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -5, 0, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -136, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 36, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -12, 0, -7, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -153, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 20, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -17, 0, -11, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -154, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -40, 0, 0, 6, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -384, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimJumpB_joint22[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -94, 1, 26, 0, -6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -126, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 298, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -177, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -618, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -126, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 172, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 305, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 3, 323, 0, -621, -2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimJumpB_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimJumpB_joint25[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, 0, 88, 0, 701, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 13, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 174, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 401, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 493, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 89, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 44, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 329, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -13, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 228, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 11, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 0, 10, -1, 226, -1,
	ftAnimEnd(),
	0x400E, 0xFFD8, 0x0000, 0x0000, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x280D, 0x000A, 0x0003, 0x0000, 0x0002, 0x0000, 0x2003, 0x0006, 0x001B, 0xFFFF, 0x2803, 0x0006, 0xFFC2, 0x0002, 0x0801, 0x0004, 0x280D, 0x000A, 0x0006, 0x0000, 0x0005, 0x0000, 0x0801, 0x0002, 0x2003, 0x0007, 0x003D, 0xFFFE, 0x2803, 0x0005, 0xFFA3, 0x0000, 0x0801, 0x0001, 0x280D, 0x000A, 0x0009, 0x0000, 0x0007, 0x0000, 0x0801, 0x0004, 0x2803, 0x0007, 0x003C, 0x0004, 0x0801, 0x0006, 0x280D, 0x000A, 0x0000, 0xFFFD, 0x0000, 0xFFFE, 0x0801, 0x0001, 0x2003, 0x0008, 0xFFE7, 0xFFF1, 0x4003, 0x0015, 0xFE78, 0x0801, 0x0001, 0x380D, 0x0014, 0xFFA0, 0xFFB4, 0x0000,
};
