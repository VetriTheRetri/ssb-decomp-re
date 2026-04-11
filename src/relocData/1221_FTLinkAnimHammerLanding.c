/* AnimJoint data for relocData file 1221 (FTLinkAnimHammerLanding) */
/* 2224 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimHammerLanding_joint1[16];
extern u16 dFTLinkAnimHammerLanding_joint2[16];
extern u16 dFTLinkAnimHammerLanding_joint4[26];
extern u16 dFTLinkAnimHammerLanding_joint5[70];
extern u16 dFTLinkAnimHammerLanding_joint6[32];
extern u16 dFTLinkAnimHammerLanding_joint9[28];
extern u16 dFTLinkAnimHammerLanding_joint10[80];
extern u16 dFTLinkAnimHammerLanding_joint11[32];
extern u16 dFTLinkAnimHammerLanding_joint12[28];
extern u16 dFTLinkAnimHammerLanding_joint13[12];
extern u16 dFTLinkAnimHammerLanding_joint16[8];
extern u16 dFTLinkAnimHammerLanding_joint17[18];
extern u16 dFTLinkAnimHammerLanding_joint18[26];
extern u16 dFTLinkAnimHammerLanding_joint20[22];
extern u16 dFTLinkAnimHammerLanding_joint21[130];
extern u16 dFTLinkAnimHammerLanding_joint23[68];
extern u16 dFTLinkAnimHammerLanding_joint25[126];
extern u16 dFTLinkAnimHammerLanding_joint26[124];
extern u16 dFTLinkAnimHammerLanding_joint28[192];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimHammerLanding_joints[] = {
	(u32)dFTLinkAnimHammerLanding_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimHammerLanding_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimHammerLanding_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimHammerLanding_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimHammerLanding_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimHammerLanding_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimHammerLanding_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimHammerLanding_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimHammerLanding_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimHammerLanding_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimHammerLanding_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimHammerLanding_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimHammerLanding_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimHammerLanding_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimHammerLanding_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimHammerLanding_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimHammerLanding_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimHammerLanding_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimHammerLanding_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01EA, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimHammerLanding_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 821, 162,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 901, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimHammerLanding_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTLinkAnimHammerLanding_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -94, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 563, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 658, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimHammerLanding_joint5[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1181, 0, -1547, -3, -2080, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1576, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1126, 44, -2406, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1082, -12, -2520, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2394, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1588, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1547, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2404, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2099, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1201, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1181, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1181, 0, -1547, 0, -2081, 18,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimHammerLanding_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -749, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -548, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -563, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -728, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -19,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimHammerLanding_joint9[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 96, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -109, -10, 32, -7, 99, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -366, -15, 33, 5, 172, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -277, 96, 220,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimHammerLanding_joint10[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 0, -4, 20, -233, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -463, -44, 95, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -293, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -498, 39, 124, -37, -665, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -330, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -135, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -643, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -407, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 24, -576, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -7, 5, -257, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 2, -4, 3, -235, 22,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimHammerLanding_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -573, -91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -866, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -568, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -4,
	ftAnimLoop(0x6800, -62),
};

/* Joint 12 */
u16 dFTLinkAnimHammerLanding_joint12[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 293, 373, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -49, 0, 253, -27, -54, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 285, 31, 148, 11, 316, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 293, 373, 15,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimHammerLanding_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 48, 12, 60,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimHammerLanding_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimHammerLanding_joint17[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimHammerLanding_joint18[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -252, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -66, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 126, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 201, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 184,
	ftAnimLoop(0x6800, -50),
};

/* Joint 20 */
u16 dFTLinkAnimHammerLanding_joint20[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -189, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 168, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -225, -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -189,
	ftAnimLoop(0x6800, -42),
};

/* Joint 21 */
u16 dFTLinkAnimHammerLanding_joint21[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 88, -13, -431, 325, -750, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -275, -105, 117, -764, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -462, -82, -197, 7, -503, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 222, -91, 36, -269, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 18, -124, -21, -284, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -237, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, -190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1159, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -108, -105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, 59, -1086, 185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -491, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -149, -5, -118, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -75, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -118, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -325, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -153, -57, 51, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -190, 84, 331, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 15, 83, -99, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -39, -404, -79, -541, -442,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimHammerLanding_joint23[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1184, -309,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1177, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 591, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1068, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, 5,
	ftAnimLoop(0x6800, -134),
};

/* Joint 25 */
u16 dFTLinkAnimHammerLanding_joint25[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 646, -225, 391, -211, 42, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 421, 153, 180, -123, 241, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 953, 58, 145, -55, 619, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -261, -290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 25, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 539, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 447, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, 9, -344, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 467, 141, -320, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 588, -16, 7, -54, -348, 274,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -30, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 434, 11, 229, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 612, 101, 300, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 636, -16, 576, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 323, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 60, 175, -420,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 218, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -461, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 351, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 305, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 580, 275, 379, 160, -29, 431,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimHammerLanding_joint26[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 282, -17, 231, -18, -7, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 245, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 299, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, -235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -947, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -106, 30, 147, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 223, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2, 297, -951, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -610, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 488, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 161, -221, 129, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 167, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 269, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 169, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5, -154, -158, -438,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -143, 154, -883, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 137, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 166, 238, -433, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 333, 63, 115, 44, -136, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, -39, 226, 110, -50, 85,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimHammerLanding_joint28[192] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 475, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 664, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1106, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 265, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1176, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 341,
	ftAnimLoop(0x6800, -118),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -406, 20, -318, 29, -215, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -352, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -213, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -105, 69, -470, 362,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -617, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -149, 48, 546, 240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -178, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1076, 36, 705, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -355, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -543, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -386, 44, -98, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -567, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -263, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -478, 148,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -512, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -471, 71, -234, 56, -135, 351,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -165, -80, 499, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -368, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -636, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -644, 101, -311, -81, 291, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 211, -329, -17, -144, -436,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
	0x0000, 0x0000,
};
