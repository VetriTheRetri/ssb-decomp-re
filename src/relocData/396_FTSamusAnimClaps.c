/* AnimJoint data for relocData file 396 (FTSamusAnimClaps) */
/* 1904 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimClaps_joint1[10];
extern u16 dFTSamusAnimClaps_joint2[14];
extern u16 dFTSamusAnimClaps_joint4[26];
extern u16 dFTSamusAnimClaps_joint5[160];
extern u16 dFTSamusAnimClaps_joint6[72];
extern u16 dFTSamusAnimClaps_joint8[106];
extern u16 dFTSamusAnimClaps_joint11[8];
extern u16 dFTSamusAnimClaps_joint12[130];
extern u16 dFTSamusAnimClaps_joint14[104];
extern u16 dFTSamusAnimClaps_joint15[58];
extern u16 dFTSamusAnimClaps_joint17[16];
extern u16 dFTSamusAnimClaps_joint19[56];
extern u16 dFTSamusAnimClaps_joint20[48];
extern u16 dFTSamusAnimClaps_joint22[96];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimClaps_joints[] = {
	(u32)dFTSamusAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimClaps_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimClaps_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimClaps_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTSamusAnimClaps_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimClaps_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimClaps_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimClaps_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimClaps_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimClaps_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimClaps_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimClaps_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01BE, /* [22] END */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimClaps_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimClaps_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -277, -299, 1754, -217,
	ftAnimBlock(0, 68),
	ftAnimLoop(0x6800, -16),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimClaps_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), -75,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimClaps_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -56, 225, 102, -7, -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), -80, 218, 46, 17, 27, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), -56, 225, 102, -7, -6, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimClaps_joint5[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1152, 1, -1662, 0, 1269, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -1138, -3, -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1315, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1311, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1289, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1141, -3, -1677, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1712, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1135, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1266, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1712, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1712, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1138, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1136, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1304, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1716, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1679, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1291, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1139, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1140, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1679, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1665, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1302, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1271, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1143, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1151, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1663, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1662, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1152, 0, -1662, 0, 1269, -1,
	ftAnimLoop(0x6800, -316),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimClaps_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -664, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -569, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -615, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -494, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -554, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -466, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -581, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -567, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -661, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -2,
	ftAnimLoop(0x6800, -142),
};

/* Joint 8 */
u16 dFTSamusAnimClaps_joint8[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 567, 24, -244, -42, -310, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 480, -17, -85, 36, -44, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 478, 8, 70, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 567, 24, -244, -42, -310, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 480, -17, -83, 43, -44, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 478, 8, 70, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 567, 24, -244, -42, -310, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 480, -17, -85, 36, -44, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 478, 8, 70, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 567, 24, -244, -42, -310, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 480, -17, -83, 43, -44, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 478, 8, 70, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 567, 24, -244, -42, -310, -68,
	ftAnimLoop(0x6800, -208),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimClaps_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 68),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimClaps_joint12[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2868, 0, 199, -1, -65, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 176, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2861, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -91, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -92, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 177, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2864, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 2860, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, -3, -97, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 183, -5, -89, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2863, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 2861, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, -5, -94, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 182, -6, -84, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2864, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 2859, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -6, -91, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 198, 2, -66, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2862, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2867, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2868, 0, 199, 1, -65, 0,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimClaps_joint14[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -769, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -703, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -723, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -676, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -676, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -716, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -687, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -723, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -764, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -734, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 0,
	ftAnimLoop(0x6800, -206),
};

/* Joint 15 */
u16 dFTSamusAnimClaps_joint15[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 0, -287, 0, -128, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -254, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 54), -119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 37), -511, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -509, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -405, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -256, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -287, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 0, -287, 0, -128, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimClaps_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 162, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 67), 162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 162, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTSamusAnimClaps_joint19[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, 0, -86, 0, 165, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 39, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 63), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 40), -17, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -40, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 165, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 0, -86, 0, 165, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimClaps_joint20[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, -31, 0, 48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), -44, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 10, -2, 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -2, 48, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -31, 0, 48, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 0, -31, 0, 48, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimClaps_joint22[96] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 4, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimLoop(0x6800, -70),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 91, 0, 335, 0, 50, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), 116, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 45), 374, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 372, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 335, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 115, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 50, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 0, 335, 0, 50, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
