/* AnimJoint data for relocData file 407 (FTLinkAnimClaps) */
/* 2768 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimClaps_joint1[16];
extern u16 dFTLinkAnimClaps_joint2[12];
extern u16 dFTLinkAnimClaps_joint4[8];
extern u16 dFTLinkAnimClaps_joint5[226];
extern u16 dFTLinkAnimClaps_joint6[76];
extern u16 dFTLinkAnimClaps_joint9[136];
extern u16 dFTLinkAnimClaps_joint10[334];
extern u16 dFTLinkAnimClaps_joint11[100];
extern u16 dFTLinkAnimClaps_joint12[136];
extern u16 dFTLinkAnimClaps_joint13[8];
extern u16 dFTLinkAnimClaps_joint16[8];
extern u16 dFTLinkAnimClaps_joint17[8];
extern u16 dFTLinkAnimClaps_joint18[12];
extern u16 dFTLinkAnimClaps_joint20[8];
extern u16 dFTLinkAnimClaps_joint21[58];
extern u16 dFTLinkAnimClaps_joint23[24];
extern u16 dFTLinkAnimClaps_joint25[36];
extern u16 dFTLinkAnimClaps_joint26[58];
extern u16 dFTLinkAnimClaps_joint28[24];
extern u16 dFTLinkAnimClaps_joint29[38];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimClaps_joints[] = {
	(u32)dFTLinkAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimClaps_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimClaps_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimClaps_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimClaps_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimClaps_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimClaps_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimClaps_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimClaps_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimClaps_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimClaps_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimClaps_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimClaps_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimClaps_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimClaps_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimClaps_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimClaps_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimClaps_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimClaps_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 954,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 75, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 30), 936,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 30), 954,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTLinkAnimClaps_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -109, 134, -9, 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimClaps_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 114, -42, -14,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTLinkAnimClaps_joint5[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 379, -4, 73, -2, -306, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -202, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 40, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 264, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 355, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -306, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 64, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 379, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 303, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -224, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 61, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 269, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 299, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 379, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -306, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 36, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 362, -17, -287, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 243,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -224, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 61, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 379, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -306, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 36, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 362, -17, -287, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 243,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -224, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 61, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 379, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -306, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, 0, 73, 0, -306, 0,
	ftAnimLoop(0x6800, -448),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimClaps_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -393, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -409, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -405, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -413, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -405, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -413, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -405, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -413, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -405, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 0,
	ftAnimLoop(0x6800, -150),
};

/* Joint 9 */
u16 dFTLinkAnimClaps_joint9[136] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -777, 185, -120,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5324, 4915, 2457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -703, 14, 158, -8, 100, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -648, -10, 106, 3, 311, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -777, -21, 185, 13, -120, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -777, 9, 185, -3, -120, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -703, 14, 158, -8, 100, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -648, -10, 106, 3, 311, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -777, -21, 185, 13, -120, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -777, 9, 185, -3, -120, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -703, 14, 158, -8, 100, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -648, -10, 106, 3, 311, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -777, -21, 185, 13, -120, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -777, 9, 185, -3, -120, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -703, 14, 158, -8, 100, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -648, -10, 106, 3, 311, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -777, -21, 185, 13, -120, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -777, 185, -120,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimClaps_joint10[334] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -510, 9, 83, 4, -347, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 66, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -331, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -376, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -198, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -331, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 69, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -368, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -258, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -485, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 99, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -341, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -510, 2, 83, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -443, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 97, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -331, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -398, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -245, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 41, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -323, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 25, -335, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 99, -11, -372, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -385, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -510, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -2, -347, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 97, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -245, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 41, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -358, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -323, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 99, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -385, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -510, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -2, -347, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 97, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -245, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 41, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -358, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -323, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 99, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -385, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -485, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -510, -25, 83, -16, -347, 25,
	ftAnimLoop(0x6800, -664),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimClaps_joint11[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -620, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -826, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -741, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -826, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -741, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -826, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -741, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -826, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -741, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 84,
	ftAnimLoop(0x6800, -198),
};

/* Joint 12 */
u16 dFTLinkAnimClaps_joint12[136] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -560, 54, -46,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5324, 4915, 2457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -358, 17, 7, 18, -6, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -403, -28, 221, 6, -204, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -560, -26, 54, -27, -46, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -560, 25, 54, -5, -46, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -358, 17, 7, 18, -6, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -403, -28, 221, 6, -204, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -560, -26, 54, -27, -46, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -560, 25, 54, -5, -46, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -358, 17, 7, 18, -6, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -403, -28, 221, 6, -204, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -560, -26, 54, -27, -46, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -560, 25, 54, -5, -46, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -358, 17, 7, 18, -6, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -403, -28, 221, 6, -204, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -560, -26, 54, -27, -46, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -560, 54, -46,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimClaps_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimClaps_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2187, -586, -850,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimClaps_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimClaps_joint18[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 76, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 60), 76, -5,
	ftAnimLoop(0x6800, -22),
};

/* Joint 20 */
u16 dFTLinkAnimClaps_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTLinkAnimClaps_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -251, 0, -146, 0, 20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -153, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 53), -249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 20, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -152, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -146, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -251, 0, -146, 0, 20, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimClaps_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 287, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 352, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTLinkAnimClaps_joint25[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1150, 0, -1643, 0, 1482, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), -1150, 0, -1642, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 1459, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1461, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1482, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1150, 0, -1643, 0, 1482, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimClaps_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1260, 0, 1432, 0, 1605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), 1405, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), -1268, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 1562, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1564, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1604, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1406, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1432, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1267, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1260, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1260, 0, 1432, 0, 1605, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimClaps_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 148, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 264, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 149, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 29 */
u16 dFTLinkAnimClaps_joint29[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1113, 0, -1377, 0, 1656, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), 1113, 0, -1377, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 1608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1610, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1656, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1113, 0, -1377, 0, 1656, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000,
};
