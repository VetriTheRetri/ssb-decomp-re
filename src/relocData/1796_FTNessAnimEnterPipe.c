/* AnimJoint data for relocData file 1796 (FTNessAnimEnterPipe) */
/* 1312 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimEnterPipe_joint1[14];
extern u16 dFTNessAnimEnterPipe_joint2[18];
extern u16 dFTNessAnimEnterPipe_joint4[10];
extern u16 dFTNessAnimEnterPipe_joint5[92];
extern u16 dFTNessAnimEnterPipe_joint6[24];
extern u16 dFTNessAnimEnterPipe_joint7[10];
extern u16 dFTNessAnimEnterPipe_joint8[26];
extern u16 dFTNessAnimEnterPipe_joint10[10];
extern u16 dFTNessAnimEnterPipe_joint11[80];
extern u16 dFTNessAnimEnterPipe_joint12[24];
extern u16 dFTNessAnimEnterPipe_joint13[20];
extern u16 dFTNessAnimEnterPipe_joint15[10];
extern u16 dFTNessAnimEnterPipe_joint16[46];
extern u16 dFTNessAnimEnterPipe_joint18[24];
extern u16 dFTNessAnimEnterPipe_joint19[54];
extern u16 dFTNessAnimEnterPipe_joint21[10];
extern u16 dFTNessAnimEnterPipe_joint22[46];
extern u16 dFTNessAnimEnterPipe_joint24[24];
extern u16 dFTNessAnimEnterPipe_joint25[46];
extern u16 dFTNessAnimEnterPipe_joint26[16];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimEnterPipe_joints[] = {
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimEnterPipe_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimEnterPipe_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, -16, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 32), -1200, -347,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimEnterPipe_joint2[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0, 11, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimEnterPipe_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimEnterPipe_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 14, -261, -1, 415, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -78, 142, -438, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 480, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 234, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 87, 236, -553, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -677, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 394, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 905, 399, -205, -341,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1327, 32, -552, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -631, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -529, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1354, 22, -571, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), 1291, -3, -525, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -534, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -593, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1289, -1, -594, 0, -524, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimEnterPipe_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -761, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -769, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimEnterPipe_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimEnterPipe_joint8[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0, -11, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimEnterPipe_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimEnterPipe_joint11[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -14, 569, 5, -119, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 614, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -685, -142, -198, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -842, -149, -281, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1172, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -402, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 595, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 566, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1185, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1185, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -410, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 567, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 570, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1185, 0, 570, 0, -410, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimEnterPipe_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -817, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -824, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimEnterPipe_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 54, 126, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 879, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 357,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimEnterPipe_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimEnterPipe_joint16[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 6, -279, 0, -297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -173, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -54, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -63, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 0, -188, 0, -287, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimEnterPipe_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 470, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 469, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimEnterPipe_joint19[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -2, 12, 0, 26, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -133, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -81, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -120, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 0, 59, 0, -120, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimEnterPipe_joint21[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -66, 0, 0, 126, -82, -12,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimEnterPipe_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 1, 136, 0, -210, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -53, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -260, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 0, 118, 0, -260, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimEnterPipe_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 532, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 527, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimEnterPipe_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 0, 25, 0, -202, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 53, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -170, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, 0, 53, 0, -170, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimEnterPipe_joint26[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -61, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), -61,
	ftAnimEnd(),
};
