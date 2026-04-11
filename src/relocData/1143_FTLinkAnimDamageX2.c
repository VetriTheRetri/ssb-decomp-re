/* AnimJoint data for relocData file 1143 (FTLinkAnimDamageX2) */
/* 2368 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamageX2_joint1[54];
extern u16 dFTLinkAnimDamageX2_joint2[44];
extern u16 dFTLinkAnimDamageX2_joint4[44];
extern u16 dFTLinkAnimDamageX2_joint5[96];
extern u16 dFTLinkAnimDamageX2_joint6[40];
extern u16 dFTLinkAnimDamageX2_joint9[12];
extern u16 dFTLinkAnimDamageX2_joint10[122];
extern u16 dFTLinkAnimDamageX2_joint11[40];
extern u16 dFTLinkAnimDamageX2_joint12[58];
extern u16 dFTLinkAnimDamageX2_joint13[8];
extern u16 dFTLinkAnimDamageX2_joint16[8];
extern u16 dFTLinkAnimDamageX2_joint17[32];
extern u16 dFTLinkAnimDamageX2_joint18[26];
extern u16 dFTLinkAnimDamageX2_joint20[16];
extern u16 dFTLinkAnimDamageX2_joint21[92];
extern u16 dFTLinkAnimDamageX2_joint23[40];
extern u16 dFTLinkAnimDamageX2_joint25[104];
extern u16 dFTLinkAnimDamageX2_joint26[122];
extern u16 dFTLinkAnimDamageX2_joint28[168];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamageX2_joints[] = {
	(u32)dFTLinkAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamageX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamageX2_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamageX2_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamageX2_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDamageX2_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDamageX2_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamageX2_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamageX2_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamageX2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamageX2_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamageX2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamageX2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamageX2_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamageX2_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0212, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimDamageX2_joint1[54] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 12, 901, -319, 0, -1459,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2, 51, 754, -253, -383, -1937,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 19, 6, 805, -71, -726, -42,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 17), 18, -7, 584, 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), -457, 288,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -162, 406,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -50, 901, 235, 0, 162,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamageX2_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -44, 276, 16, 0, -21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -65, -114, -297, -5, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -305, -14, -615, -35, 213, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -305, 9, -615, 42, 213, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -107, 20, 276, -2, 0, 10,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamageX2_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 136, 166, -92, 56, 164,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 805, 88, 19, 15, -21, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 524, -20, 211, 13, -490, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 524, -12, 211, -2, -490, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 259, -88, 166, 28, 56, -60,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamageX2_joint5[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -538, -326, 308, -86, 280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 94, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -258, -313, 194, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -347, -91, 248, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -625, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 253, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 289, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -159, -156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -501, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 256, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -61, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -295, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -364, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 24, -326, 37, -86, -24,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamageX2_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -737, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -716, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -554, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 53,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamageX2_joint9[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 4,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -245,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 4,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDamageX2_joint10[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, -2, 123, -3, -50, 271,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 172, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, 97, 220, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, 185, 46, -301,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 464, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -337, -436, -381, -349,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1019, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -922, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1023, 1, 456, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -763, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 572, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -921, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -690, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -642, 166, -569, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -51, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 102, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 548, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 283, -153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 328, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, -79, 14, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 87, 123, -26, -50, -65,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamageX2_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -221,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -787, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -612, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -952, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -726, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 138,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamageX2_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -55, -209, 95,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 32, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 224, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 93, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 352, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 387, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 208, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 525, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -110,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -209, -96,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimDamageX2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamageX2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamageX2_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -23, -163, -56, 0, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -80, 0, -358, 16, -361, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -5, 5, 83, 13, -22, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, -163, 1, 0, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamageX2_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, 307, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -183, 108, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -495, 399, -120,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDamageX2_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 43,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 0, 18,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamageX2_joint21[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 24, -244, -146, 108, -407,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -360, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -246, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -44, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -330, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -360, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -232, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -274, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -94, 37,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -316, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -71, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -289, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -84, -244, 45, 108, 107,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamageX2_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 545,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 795, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1009, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 509, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -259,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamageX2_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 136, -161, -239, -34, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 465, -167, -401, -246, -173, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -521, -655, -34, 458, 674,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -578, -291, -470, 112, 1175, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -589, -7, -431, 35, 1174, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -537, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -136, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 575, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -239, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -556, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -195, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 245, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -153, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 313, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 333, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -4, -161, 33, -34, 118,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamageX2_joint26[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 585, 269, -283, -125, -222,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -423, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 856, 273, -347, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 817, -56, -317, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 546, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -288, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -450, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -383, 50,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 461, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -114, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -447, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -398, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, 8, -309, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -535, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -202, 173,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -394, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -205, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -426, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 283, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -205, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 129, 166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 140, 269, -14, -125, 117,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamageX2_joint28[168] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -424,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 391, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 767, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 581, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -156,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0AE5, 0x01B5, 0xFFB6, 0xFB19, 0xFFBB, 0xFDC1, 0x200F, 0x0001, 0x0C9A, 0x00DA, 0xFACF, 0xFD31, 0xFD7B, 0xFED6, 0x200F, 0x0001, 0x0C9A, 0x002A, 0xFA18, 0xFF98, 0xFD65, 0xFFF2, 0x2803, 0x0005, 0x0DDC, 0x0016, 0x2809, 0x000A, 0xFD45, 0xFFE1, 0x2005, 0x0004, 0xFA14, 0x0003, 0x2005, 0x0001, 0xFA17, 0x0002, 0x2805, 0x0006, 0xFA32, 0x000C, 0x2003, 0x0001, 0x0DF4, 0x0019, 0x2003, 0x0004, 0x0EBA, 0x0088, 0x200B, 0x0001, 0x0F75, 0x0120, 0xFD1D, 0xFFB6, 0x280B, 0x0002, 0x124C, 0x00A8, 0xFC54, 0xFFB8, 0x2005, 0x0001, 0xFA37, 0xFFE7, 0x2805, 0x0005, 0xF9C1, 0x0027, 0x0801, 0x0001, 0x200B, 0x0001, 0x124D, 0x0009, 0xFC1F, 0xFF65, 0x2803, 0x0003, 0x120A, 0xFF9B, 0x2009, 0x0001, 0xFB1D, 0xFF31, 0x2009, 0x0001, 0xFA81, 0xFF75, 0x2809, 0x0005, 0xF944, 0x0024, 0x0801, 0x0001, 0x2007, 0x0001, 0x118A, 0xFFC5, 0xFA09, 0x0004, 0x2803, 0x0003, 0x1162, 0xFFE3, 0x2005, 0x0002, 0xF9C5, 0x0006, 0x2005, 0x0001, 0xF9D6, 0x001E, 0x200F, 0x0001, 0x112D, 0xFFCB, 0xFA02, 0x002B, 0xF972, 0x002E, 0x0000,
};
