/* AnimJoint data for relocData file 1142 (FTLinkAnimDamageX1) */
/* 1952 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamageX1_joint1[42];
extern u16 dFTLinkAnimDamageX1_joint2[44];
extern u16 dFTLinkAnimDamageX1_joint4[48];
extern u16 dFTLinkAnimDamageX1_joint5[80];
extern u16 dFTLinkAnimDamageX1_joint6[32];
extern u16 dFTLinkAnimDamageX1_joint9[16];
extern u16 dFTLinkAnimDamageX1_joint10[70];
extern u16 dFTLinkAnimDamageX1_joint11[36];
extern u16 dFTLinkAnimDamageX1_joint12[28];
extern u16 dFTLinkAnimDamageX1_joint13[8];
extern u16 dFTLinkAnimDamageX1_joint16[10];
extern u16 dFTLinkAnimDamageX1_joint17[38];
extern u16 dFTLinkAnimDamageX1_joint18[30];
extern u16 dFTLinkAnimDamageX1_joint20[22];
extern u16 dFTLinkAnimDamageX1_joint21[88];
extern u16 dFTLinkAnimDamageX1_joint23[40];
extern u16 dFTLinkAnimDamageX1_joint25[76];
extern u16 dFTLinkAnimDamageX1_joint26[88];
extern u16 dFTLinkAnimDamageX1_joint28[122];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamageX1_joints[] = {
	(u32)dFTLinkAnimDamageX1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamageX1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamageX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamageX1_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamageX1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamageX1_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamageX1_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamageX1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDamageX1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDamageX1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDamageX1_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamageX1_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamageX1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamageX1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamageX1_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamageX1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamageX1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamageX1_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamageX1_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01C1, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimDamageX1_joint1[42] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, -264, 0, -927,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 663, -529, -269, -2201,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 768, 119, -550, -321,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 768, -46, -550, 547,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 722, 264, -3, 1100,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 901, 39, 0, 149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamageX1_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -28, 276, 28, 0, -24,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -215, -13, 650, 46, -186, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -215, 39, 650, -46, -186, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 63, 26, 325, -93, -52, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -107, 9, 276, -22, 0, 4,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamageX1_joint4[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 89, 166, -21, 56, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 538, 38, -11, -155, 333, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 336, -37, -145, -40, 815, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 275, -7, -296, 3, 631, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 259, -71, 166, 9, 56, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDamageX1_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -110, -326, 390, -86, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, -208, 63, 105, -135, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, -209, -115, -45, 502, 297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -219, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 84, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -263, -66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 206, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 73, -326, -63, -86, -56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamageX1_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -273,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1051, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -718, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamageX1_joint9[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 7, 4, 312,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamageX1_joint10[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2800, 595, 123, -27, -50, 386,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 60, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2204, 372, 335, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2056, -53, 172, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 293, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2311, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2451, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2402, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 66, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2411, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2474, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2669, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, -130, 123, 63, -50, -117,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamageX1_joint11[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -161,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -494, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -764, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 156,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamageX1_joint12[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 58, -209, 77, 0, 33,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 197, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 21, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 192, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -61, -209, -102, 0, -5,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimDamageX1_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamageX1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1697, -536, -339, 83, 0, 12,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimDamageX1_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -5, -163, -65, 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 115, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -159, -70, -407, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -159, -70, -407, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -78, 98, -311, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -27, -163, 7, 0, -40,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamageX1_joint18[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, -222, 63,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 131, -101, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -396, -11, -173,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -364, 66, -212,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamageX1_joint20[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 6,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 1), 296,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDamageX1_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 208, -244, -77, 108, -656,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -67, -322, 74, -547, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -377, -120, -94, 200, -409, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -383, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -20, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -275, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -271, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -299, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -445, -124,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -298, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 138, 291, -638, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 284, -91, -155, -136, -406, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -263, -292, -44, -146, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -198, -244, 48, 108, 255,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamageX1_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 712,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 367, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 539, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 515, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -266,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamageX1_joint25[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 203, -161, 111, -34, -243,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 80, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 532, 253, -277, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 836, 154, -119, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 862, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -131, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 45, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 875, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 866, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 835, -193, 51, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 138, -103, -438, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 272, 95, -243, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 56, -161, 81, -34, 96,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamageX1_joint26[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -417, 269, 18, -125, -380,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 450, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -147, -146, -505, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -22, 79, -81, 256,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -44, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 49, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 73, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 64, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 451, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 414, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -81, -72, 16, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 95, 227, -47, -408, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, 199, 318, 43, -592, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 80, 314, -24, -345, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 61, 269, -44, -125, 220,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamageX1_joint28[122] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 235,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 807, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -227,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0x00B1, 0xFFB6, 0x00B6, 0xFFBB, 0x0095, 0x2803, 0x0007, 0x0046, 0x0012, 0x2805, 0x0008, 0x00D8, 0x0045, 0x2009, 0x0001, 0x004F, 0x016A, 0x2009, 0x0001, 0x028F, 0x0139, 0x2009, 0x0001, 0x02C2, 0x0027, 0x2009, 0x0001, 0x02DE, 0x0013, 0x2009, 0x0003, 0x02E9, 0xFFF6, 0x200B, 0x0001, 0x0056, 0xFFC2, 0x02D8, 0xFF0D, 0x2809, 0x0002, 0xFF43, 0xFF2A, 0x2007, 0x0001, 0xFFC9, 0xFF04, 0x0141, 0xFF95, 0x2007, 0x0001, 0xFE5F, 0xFF45, 0x0001, 0xFF3E, 0x200F, 0x0001, 0xFE51, 0xFFFB, 0xFFBE, 0xFFDB, 0xFF55, 0x003B, 0x200F, 0x0001, 0xFE55, 0x0003, 0xFFB6, 0xFFF9, 0xFFBB, 0x0065, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
