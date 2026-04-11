/* AnimJoint data for relocData file 1223 (FTLinkAnimJab1) */
/* 2512 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJab1_joint1[44];
extern u16 dFTLinkAnimJab1_joint2[64];
extern u16 dFTLinkAnimJab1_joint4[64];
extern u16 dFTLinkAnimJab1_joint5[158];
extern u16 dFTLinkAnimJab1_joint6[76];
extern u16 dFTLinkAnimJab1_joint9[76];
extern u16 dFTLinkAnimJab1_joint10[82];
extern u16 dFTLinkAnimJab1_joint11[40];
extern u16 dFTLinkAnimJab1_joint12[8];
extern u16 dFTLinkAnimJab1_joint13[8];
extern u16 dFTLinkAnimJab1_joint16[8];
extern u16 dFTLinkAnimJab1_joint17[48];
extern u16 dFTLinkAnimJab1_joint18[48];
extern u16 dFTLinkAnimJab1_joint20[8];
extern u16 dFTLinkAnimJab1_joint21[92];
extern u16 dFTLinkAnimJab1_joint23[32];
extern u16 dFTLinkAnimJab1_joint25[106];
extern u16 dFTLinkAnimJab1_joint26[102];
extern u16 dFTLinkAnimJab1_joint28[134];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimJab1_joints[] = {
	(u32)dFTLinkAnimJab1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimJab1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimJab1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimJab1_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimJab1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimJab1_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimJab1_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimJab1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimJab1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimJab1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimJab1_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimJab1_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimJab1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimJab1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimJab1_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimJab1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimJab1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimJab1_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimJab1_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0243, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimJab1_joint1[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -7, -6, 720, -144, 48, 64,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -7, 0, 80, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -7, 4, 720, 103, 80, -45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 901, 22, 0, -9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 56), 0, 901, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimJab1_joint2[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -104, 0, 465, 47, -64, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -104, 30, 465, -154, -64, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 15, 27, -154, -103, 53, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 61, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -154, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 61, -12, -154, 30, 53, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -107, -2, 276, 6, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), -107, 276, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimJab1_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 57, -50, 103, -15, 166, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 57, 51, 103, -82, 166, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 262, 41, -228, -110, 53, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 304, 4, -562, -37, -121, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 304, -3, -562, 52, -121, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 259, 0, 166, 11, 56, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 259, 166, 56,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimJab1_joint5[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -447, -326, -177, -86, 336,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 275, -256,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -558, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -167, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -714, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -542, 59, -262, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -594, -22, -444, 136, -549, -235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -24, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -587, -36, -734, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -309, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -667, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -207, 581,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 495, 405, -168, 8, -389, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 161, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -495, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 603, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 605, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 605, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 159, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 45, -122,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 621, 55, -527, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -969, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1025, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -306, -133,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 911, -259, -453, -85, -774, 320,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -377, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 507, -299, -320, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 313, -113, -112, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -32, -326, 50, -86, 26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJab1_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -408,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -850, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -652, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -480, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -470, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -727, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimJab1_joint9[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -284, -26, 157, 54, -102, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -125, 140, 281, 26, -106, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, -185, 236, 49, 585, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -497, -532, 380, -9, 189, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -929, -257, 216, -59, 65, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1270, -48, 200, -2, -419, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1270, 91, 200, -13, -419, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 4, 19, 7, -2, 76, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 4, 7, 76,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimJab1_joint10[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 41, 123, 74, -50, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 305, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 445, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -88, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 278, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 231, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 416, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 468, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -31, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 80, -83,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 132, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 431, -25, -6, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -15, 123, -8, -50, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJab1_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -471, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -740, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -401, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -595, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimJab1_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimJab1_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimJab1_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimJab1_joint17[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 5, -5, -276, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -35, -6, 220, 82, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -35, 220, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 70), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -35, 2, 220, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 0, -163, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 56), 0, -163,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimJab1_joint18[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -16, -8, -265, 55, -53, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -49, -5, 130, 66, -111, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -49, 130, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -49, 3, 130, -23, -111, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, -199, -5, 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 0, -199, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimJab1_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimJab1_joint21[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 94, -244, -42, 108, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -182, 26, -229, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 208, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 295, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, 78, -50, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 11, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -16, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -121, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -197, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -133, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -16, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 99, 13,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -172, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -244, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -226, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -15, -244, 0, 108, 9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimJab1_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 616, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 375, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimJab1_joint25[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 5, -161, 28, -34, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 203, -157, -348, -156, -121, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -187, -535, -164, -96, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -176, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -678, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 159, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 80, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -66, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -686, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -239, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -95, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 302, 38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -82, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -45, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -187, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 26, -161, 25, -34, 11,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimJab1_joint26[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -21, 269, -4, -125, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 77, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -88, -95, -322, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -168, -3, -535, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -88, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -746, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -69, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -115, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 45, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -396, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 276, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 252, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -155, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 273, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 17, 269, -3, -125, 30,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimJab1_joint28[134] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 532, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 714, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 487, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 446, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -21,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF80C, 0x002B, 0xFA02, 0xFFA5, 0x0602, 0x002B, 0x280D, 0x0004, 0xF877, 0x0053, 0x0634, 0xFFE9, 0x2003, 0x0002, 0xF877, 0x0068, 0x2003, 0x0001, 0xF908, 0x0035, 0x2803, 0x0003, 0xF78F, 0xFFCA, 0x0801, 0x0001, 0x200D, 0x0001, 0xF938, 0x00DB, 0x061C, 0x0012, 0x2809, 0x0004, 0x0631, 0xFFED, 0x2005, 0x0001, 0xFA2F, 0x008D, 0x2007, 0x0001, 0xF78D, 0x000E, 0xFA53, 0x0006, 0x2805, 0x0006, 0xF9ED, 0x0000, 0x2803, 0x0009, 0xF7BC, 0xFFE5, 0x0801, 0x0002, 0x2009, 0x0001, 0x0624, 0xFFF9, 0x2809, 0x000D, 0x05FD, 0x0005, 0x0801, 0x0003, 0x2005, 0x0001, 0xF9F1, 0x0009, 0x2805, 0x0009, 0xFA09, 0xFFF6, 0x0801, 0x0002, 0x2003, 0x0001, 0xF7A2, 0xFFEC, 0x2003, 0x0006, 0xF7ED, 0x0022, 0x200F, 0x0001, 0xF80C, 0x001F, 0xFA02, 0xFFFA, 0x0602, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
